/** @file
 * # NotMuch Support for Mutt
 *
 * ## Authors
 * * Copyright (C) 2011-2016 Karel Zak <kzak@redhat.com>
 * * Copyright (C) 2016-2017 Richard Russon <rich@flatcap.org>
 * * Copyright (C) 2016 Kevin Velghe <kevin@paretje.be>
 * * Copyright (C) 2017 Bernard 'Guyzmo' Pratz <guyzmo+github+pub@m0g.net>
 *
 * ## License
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ## Notes
 *
 * - notmuch uses private CONTEXT->data and private HEADER->data
 *
 * - all exported functions are usable within notmuch context only
 *
 * - all functions have to be covered by "ctx->magic == MUTT_NOTMUCH" check
 *   (it's implemented in get_ctxdata() and init_context() functions).
 *
 * - exception are nm_nonctx_* functions -- these functions use nm_default_uri
 *   (or parse URI from another resource)
 */

#include "config.h"
#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <notmuch.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <unistd.h>
#include <utime.h>
#include "mutt.h"
#include "mutt_notmuch.h"
#include "buffy.h"
#include "copy.h"
#include "keymap.h"
#include "mailbox.h"
#include "mutt_curses.h"
#include "mx.h"
#include "rfc2047.h"
#include "sort.h"
#include "url.h"

#ifdef LIBNOTMUCH_CHECK_VERSION
#undef LIBNOTMUCH_CHECK_VERSION
#endif

/**
 * struct uri_tag - Parsed NotMuch-URI arguments
 *
 * The arguments in a URI are saved in a linked list.
 *
 * @sa nm_ctxdata#query_items
 */
struct uri_tag
{
  char *name;
  char *value;
  struct uri_tag *next;
};

/**
 * url_free_tags - Free a list of tags
 * @param tags List of tags
 */
static void url_free_tags(struct uri_tag *tags)
{
  while (tags)
  {
    struct uri_tag *next = tags->next;
    FREE(&tags->name);
    FREE(&tags->value);
    FREE(&tags);
    tags = next;
  }
}

/**
 * url_parse_query - Extract the tokens from a query URI
 * @param[in]  url      URI to parse
 * @param[out] filename Save the filename
 * @param[out] tags     Save the list of tags
 *
 * @retval true  Success
 * @retval false Error: Bad format
 *
 * Parse a NotMuch URI, such as:
 * *    notmuch:///path/to/db?query=tag:lkml&limit=1000
 * *    notmuch://?query=neomutt
 *
 * Extract the database filename (optional) and any search parameters (tags).
 * The tags will be saved in a linked list (#uri_tag).
 */
static bool url_parse_query(const char *url, char **filename, struct uri_tag **tags)
{
  char *p = strstr(url, "://"); /* remote unsupported */
  char *e = NULL;
  struct uri_tag *tag, *last = NULL;

  *filename = NULL;
  *tags = NULL;

  if (!p || !*(p + 3))
    return false;

  p += 3;
  *filename = p;

  e = strchr(p, '?');

  *filename = e ? (e == p) ? NULL : mutt_substrdup(p, e) : safe_strdup(p);
  if (!e)
    return true; /* only filename */

  if (*filename && (url_pct_decode(*filename) < 0))
    goto err;

  e++; /* skip '?' */
  p = e;

  while (p && *p)
  {
    tag = safe_calloc(1, sizeof(struct uri_tag));

    if (!*tags)
      last = *tags = tag;
    else
    {
      last->next = tag;
      last = tag;
    }

    e = strchr(p, '=');
    if (!e)
      e = strchr(p, '&');
    tag->name = e ? mutt_substrdup(p, e) : safe_strdup(p);
    if (!tag->name || (url_pct_decode(tag->name) < 0))
      goto err;
    if (!e)
      break;

    p = e + 1;

    if (*e == '&')
      continue;

    e = strchr(p, '&');
    tag->value = e ? mutt_substrdup(p, e) : safe_strdup(p);
    if (!tag->value || (url_pct_decode(tag->value) < 0))
      goto err;
    if (!e)
      break;
    p = e + 1;
  }

  return true;
err:
  FREE(&(*filename));
  url_free_tags(*tags);
  return false;
}

