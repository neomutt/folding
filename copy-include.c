/**
 * Copyright (C) 1996-2002,2007,2010,2012-2013 Michael R. Elkins <me@mutt.org>
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "config.h"
#include <ctype.h>
#include "mutt_regex.h"
#include "sort.h"
#ifdef USE_SIDEBAR
#include "sidebar.h"
#endif

static const char *cb_format_str(char *dest, size_t destlen, size_t col, int cols)
{
  return src;
}

/**
 * cb_format_str - Create the string to show in the sidebar
 * @dest:        Buffer in which to save string
 * @destlen:     Buffer length
 * @flags:       Format flags, e.g. MUTT_FORMAT_OPTIONAL
 *
 * cb_format_str is a callback function for mutt_FormatString.  It understands
 * six operators. '%B' : Mailbox name, '%F' : Number of flagged messages,
 */
static const char *cb_format_str(char *dest, size_t destlen, size_t col, int cols,
                                 char op, const char *src, const char *prefix,
                                 const char *ifstring, const char *elsestring,
                                 unsigned long data, format_flag flags)
{
  SBENTRY *sbe = (SBENTRY *) data;
  unsigned int optional;
  char fmt[STRING];

  switch (op)
  {
    case 'B':
      /* This comment
       * deserves
       * more than
       * one line
       */
      mutt_format_s(dest, destlen, prefix, sbe->box);
      break;
  }

  return src;
}

