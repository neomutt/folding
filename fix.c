
/* mutt_account_tourl: fill URL with info from account. The URL information
 *   is a set of pointers into account - don't free or edit account until
 *   you've finished with url (make a copy of account if you need it for
 *   a while). */
void mutt_account_tourl(ACCOUNT *account, ciss_url_t *url)
{
  function();
}

/*
 * if someone has an address like
 *      From: Michael `/bin/rm -f ~` Elkins <me@mutt.org>
 * and the user creates an alias for this, Mutt could wind up executing
 * the backticks because it writes aliases like
 *      alias me Michael `/bin/rm -f ~` Elkins <me@mutt.org>
 * To avoid this problem, use a backslash (\) to quote any backticks.  We also
 * need to quote backslashes as well, since you could defeat the above by
 * doing
 *      From: Michael \`/bin/rm -f ~\` Elkins <me@mutt.org>
 * since that would get aliased as
 *      alias me Michael \\`/bin/rm -f ~\\` Elkins <me@mutt.org>
 * which still gets evaluated because the double backslash is not a quote.
 *
 * Additionally, we need to quote ' and " characters - otherwise, mutt will
 * interpret them on the wrong parsing step.
 *
 * $ wants to be quoted since it may indicate the start of an environment
 * variable.
 */
static void write_safe_address(FILE *fp, char *s)
{
  function();
}

/*
 * Sanity-check an alias name:  Only characters which are non-special to both
 * the RFC 822 and the mutt configuration parser are permitted.
 */
int mutt_check_alias_name(const char *s, char *dest, size_t destlen)
{
  function();
}

/*
 * This routine looks to see if the user has an alias defined for the given
 * address.
 */
ADDRESS *alias_reverse_lookup(ADDRESS *a)
{
  function();
}

/* alias_complete() -- alias completion routine
 *
 * given a partial alias, this routine attempts to fill in the alias
 * from the alias list as much as possible. if given empty search string
 * or found nothing, present all aliases
 */
int mutt_alias_complete(char *s, size_t buflen)
{
  function();
}

/* mutt_account_tourl: fill URL with info from account. The URL information
 *   is a set of pointers into account - don't free or edit account until
 *   you've finished with url (make a copy of account if you need it for
 *   a while). */
void mutt_account_tourl(ACCOUNT *account, ciss_url_t *url)
{
  function();
}

/*
 * if someone has an address like
 *      From: Michael `/bin/rm -f ~` Elkins <me@mutt.org>
 * and the user creates an alias for this, Mutt could wind up executing
 * the backticks because it writes aliases like
 *      alias me Michael `/bin/rm -f ~` Elkins <me@mutt.org>
 * To avoid this problem, use a backslash (\) to quote any backticks.  We also
 * need to quote backslashes as well, since you could defeat the above by
 * doing
 *      From: Michael \`/bin/rm -f ~\` Elkins <me@mutt.org>
 * since that would get aliased as
 *      alias me Michael \\`/bin/rm -f ~\\` Elkins <me@mutt.org>
 * which still gets evaluated because the double backslash is not a quote.
 *
 * Additionally, we need to quote ' and " characters - otherwise, mutt will
 * interpret them on the wrong parsing step.
 *
 * $ wants to be quoted since it may indicate the start of an environment
 * variable.
 */
static void write_safe_address(FILE *fp, char *s)
{
  function();
}

/*
 * Sanity-check an alias name:  Only characters which are non-special to both
 * the RFC 822 and the mutt configuration parser are permitted.
 */
int mutt_check_alias_name(const char *s, char *dest, size_t destlen)
{
  function();
}

/*
 * This routine looks to see if the user has an alias defined for the given
 * address.
 */
ADDRESS *alias_reverse_lookup(ADDRESS *a)
{
  function();
}

/* alias_complete() -- alias completion routine
 *
 * given a partial alias, this routine attempts to fill in the alias
 * from the alias list as much as possible. if given empty search string
 * or found nothing, present all aliases
 */
int mutt_alias_complete(char *s, size_t buflen)
{
  function();
}

/*
 * Currently, this only works for send mode, as it assumes that the
 * BODY->filename actually contains the information.  I'm not sure
 * we want to deal with editing attachments we've already received,
 * so this should be ok.
 *
 * Returns 1 if editor found, 0 if not (useful to tell calling menu to
 * redraw)
 */
int mutt_edit_attachment(BODY *a)
{
  function();
}

/* Ok, the difference between send and receive:
 * recv: BODY->filename is a suggested name, and Context|HEADER points
 *       to the attachment in mailbox which is encoded
 * send: BODY->filename points to the un-encoded file which contains the
 *       attachment
 */
int mutt_print_attachment(FILE *fp, BODY *a)
{
  function();
}

/* imap_add_folder:
 * add a folder name to the browser list, formatting it as necessary.
 *
 * The folder parameter should already be 'unmunged' via
 * imap_unmunge_mbox_name().
 */
static void imap_add_folder(char delim, char *folder, int noselect, int noinferiors,
                            struct browser_state *state, short isparent)
{
  function();
}

/* imap_browse: IMAP hook into the folder browser, fills out browser_state,
 *   given a current folder to browse */
int imap_browse(char *path, struct browser_state *state)
{
  function();
}

/* Wild compare function that calls the others. It's useful
 * because it provides a way to tell "../" is always on the
 * top of the list, independently of the sort method.
 */
static int browser_compare(const void *a, const void *b)
{
  function();
}

/* Call to qsort using browser_compare function. Some
 * specific sort methods are not used via NNTP.
 */
static void browser_sort(struct browser_state *state)
{
  function();
}

/* Public function
 *
 * This function helps the browser to know which directory has
 * been selected. It should be called anywhere a confirm hit is done
 * to open a new directory/file which is a maildir/mbox.
 *
 * We could check if the sort method is appropriate with this feature.
 */
void mutt_browser_select_dir(char *f)
{
  function();
}

/*
 * Creates and initializes a BUFFER*. If passed an existing BUFFER*,
 * just initializes. Frees anything already in the buffer. Copies in
 * the seed string.
 *
 * Disregards the 'destroy' flag, which seems reserved for caller.
 * This is bad, but there's no apparent protocol for it.
 */
BUFFER *mutt_buffer_from(char *seed)
{
  function();
}

/* dynamically grows a BUFFER to accommodate s, in increments of 128 bytes.
 * Always one byte bigger than necessary for the null terminator, and
 * the buffer is always null-terminated */
static void mutt_buffer_add(BUFFER *buf, const char *s, size_t len)
{
  function();
}

/* Find the last message in the file.
 * upon success return 0. If no message found - return -1 */
static int fseek_last_message(FILE *f)
{
  function();
}

/* Checks the specified maildir subdir (cur or new) for new mail or mail counts.
 * check_new:   if true, check for new mail.
 * check_stats: if true, count total, new, and flagged messages.
 * Returns 1 if the dir has new mail.
 */
static int buffy_maildir_check_dir(BUFFY *mailbox, const char *dir_name,
                                   int check_new, int check_stats)
{
  function();
}

/* Checks new mail for a maildir mailbox.
 * check_stats: if true, also count total, new, and flagged messages.
 * Returns 1 if the mailbox has new mail.
 */
static int buffy_maildir_check(BUFFY *mailbox, int check_stats)
{
  function();
}

/* Checks new mail for an mbox mailbox
 * check_stats: if true, also count total, new, and flagged messages.
 * Returns 1 if the mailbox has new mail.
 */
static int buffy_mbox_check(BUFFY *mailbox, struct stat *sb, int check_stats)
{
  function();
}

/*
 * mutt_buffy() -- incoming folders completion routine
 *
 * given a folder name, this routine gives the next incoming folder with new
 * mail.
 */
void mutt_buffy(char *s, size_t slen)
{
  function();
}

/*
 * The following list has been created manually from the data under:
 * http://www.isi.edu/in-notes/iana/assignments/character-sets
 * Last update: 2000-09-07
 *
 * Note that it includes only the subset of character sets for which a preferred
 * MIME name is given.
 */

static const struct
{
  function();
}

/* this first ties off any charset extension such as //TRANSLIT,
   canonicalizes the charset and re-adds the extension */
void mutt_canonical_charset(char *dest, size_t dlen, const char *name)
{
  function();
}

/*
 * Like iconv_open, but canonicalises the charsets, applies charset-hooks,
 * recanonicalises, and finally applies iconv-hooks. Parameter flags=0 skips
 * charset-hooks, while MUTT_ICONV_HOOK_FROM applies them to fromcode. Callers
 * should use flags=0 when fromcode can safely be considered true, either some
 * constant, or some value provided by the user; MUTT_ICONV_HOOK_FROM should be
 * used only when fromcode is unsure, taken from a possibly wrong incoming MIME
 * label, or such. Misusing MUTT_ICONV_HOOK_FROM leads to unwanted interactions
 * in some setups. Note: By design charset-hooks should never be, and are never,
 * applied to tocode. Highlight note: The top-well-named MUTT_ICONV_HOOK_FROM
 * acts on charset-hooks, not at all on iconv-hooks.
 */
iconv_t mutt_iconv_open(const char *tocode, const char *fromcode, int flags)
{
  function();
}

/*
 * Like iconv, but keeps going even when the input is invalid
 * If you're supplying inrepls, the source charset should be stateless;
 * if you're supplying an outrepl, the target charset should be.
 */
size_t mutt_iconv(iconv_t cd, ICONV_CONST char **inbuf, size_t *inbytesleft,
                  char **outbuf, size_t *outbytesleft,
                  ICONV_CONST char **inrepls, const char *outrepl)
{
  function();
}

/*
 * Convert a string
 * Used in rfc2047.c, rfc2231.c, crypt_gpgme.c, mutt_idna.c, and more.
 * Parameter flags is given as-is to mutt_iconv_open(). See there
 * for its meaning and usage policy.
 */
int mutt_convert_string(char **ps, const char *from, const char *to, int flags)
{
  function();
}

/*
 * FGETCONV stuff for converting a file while reading it.
 * Used in sendlib.c for converting from mutt's Charset
 */

struct fgetconv_s
{
  function();
}

/* usage: uncolor index pattern [pattern...]
 *        unmono  index pattern [pattern...]
 */
static int _mutt_parse_uncolor(BUFFER *buf, BUFFER *s, unsigned long data,
                               BUFFER *err, short parse_uncolor)
{
  function();
}

/* usage: color <object> <fg> <bg> [ <regexp> ]
 *        mono  <object> <attr> [ <regexp> ]
 */
static int _mutt_parse_color(BUFFER *buf, BUFFER *s, BUFFER *err,
                             parser_callback_t callback, short dry_run)
{
  function();
}

/* sets up a new command control block and adds it to the queue.
 * Returns NULL if the pipeline is full. */
static IMAP_COMMAND *cmd_new(IMAP_DATA *idata)
{
  function();
}

/* cmd_parse_expunge: mark headers with new sequence ID and mark idata to
 *   be reopened at our earliest convenience */
static void cmd_parse_expunge(IMAP_DATA *idata, const char *s)
{
  function();
}

/* cmd_parse_fetch: Load fetch response into IMAP_DATA. Currently only
 *   handles unanticipated FETCH responses, and only FLAGS data. We get
 *   these if another client has changed flags for a mailbox we've selected.
 *   Of course, a lot of code here duplicates code in message.c. */
static void cmd_parse_fetch(IMAP_DATA *idata, char *s)
{
  function();
}

/* cmd_parse_capabilities: set capability bits according to CAPABILITY
 *   response */
static void cmd_parse_capability(IMAP_DATA *idata, char *s)
{
  function();
}

/* first cut: just do buffy update. Later we may wish to cache all
 * mailbox information, even that not desired by buffy */
static void cmd_parse_status(IMAP_DATA *idata, char *s)
{
  function();
}

/* imap_cmd_start: Given an IMAP command, send it to the server.
 *   If cmdstr is NULL, sends queued commands. */
int imap_cmd_start(IMAP_DATA *idata, const char *cmdstr)
{
  function();
}

/* imap_cmd_step: Reads server responses from an IMAP command, detects
 *   tagged completion response, handles untagged messages, can read
 *   arbitrarily large strings (using malloc, so don't make it _too_
 *   large!). */
int imap_cmd_step(IMAP_DATA *idata)
{
  function();
}

/* imap_exec: execute a command, and wait for the response from the server.
 * Also, handle untagged responses.
 * Flags:
 *   IMAP_CMD_FAIL_OK: the calling procedure can handle failure. This is used
 *     for checking for a mailbox on append and login
 *   IMAP_CMD_PASS: command contains a password. Suppress logging.
 *   IMAP_CMD_QUEUE: only queue command, do not execute.
 * Return 0 on success, -1 on Failure, -2 on OK Failure
 */
int imap_exec(IMAP_DATA *idata, const char *cmdstr, int flags)
{
  function();
}

/* imap_cmd_finish: Attempts to perform cleanup (eg fetch new mail if
 *   detected, do expunge). Called automatically by imap_cmd_step, but
 *   may be called at any time. Called by imap_check_mailbox just before
 *   the index is refreshed, for instance. */
void imap_cmd_finish(IMAP_DATA *idata)
{
  function();
}

/* given a partial pathname, this routine fills in as much of the rest of the
 * path as is unique.
 *
 * return 0 if ok, -1 if no matches
 */
int mutt_complete(char *s, size_t slen)
{
  function();
}

/*
 * cum_attachs_size: Cumulative Attachments Size
 *
 * Returns the total number of bytes used by the attachments in the
 * attachment list _after_ content-transfer-encodings have been
 * applied.
 *
 */
static unsigned long cum_attachs_size(MUTTMENU *menu)
{
  function();
}

/*
 * compose_format_str()
 *
 * %a = total number of attachments
 * %h = hostname  [option]
 * %l = approx. length of current message (in bytes)
 * %v = Mutt version
 *
 * This function is similar to status_format_str().  Look at that function for
 * help when modifying this function.
 */
static const char *compose_format_str(char *buf, size_t buflen, size_t col, int cols,
                                      char op, const char *src, const char *prefix,
                                      const char *ifstring, const char *elsestring,
                                      unsigned long data, format_flag flags)
{
  function();
}

/* return values:
 *
 * 1    message should be postponed
 * 0    normal exit
 * -1   abort message
 */
int mutt_compose_menu(HEADER *msg, /* structure for new message */
                      char *fcc,   /* where to save a copy of the message */
                      size_t fcclen, HEADER *cur, /* current message */
                      int flags)
{
  function();
}

/* Notes:
 * Any references to compressed files also apply to encrypted files.
 * ctx->path     == plaintext file
 * ctx->realpath == compressed file
 */

/**
 * struct COMPRESS_INFO - Private data for compress
 *
 * This object gets attached to the mailbox's CONTEXT.
 */
typedef struct
{
  function();
}

/* flags
        CH_DECODE       RFC2047 header decoding
        CH_FROM         retain the "From " message separator
        CH_FORCE_FROM   give CH_FROM precedence over CH_WEED
        CH_MIME         ignore MIME fields
        CH_NOLEN        don't write Content-Length: and Lines:
        CH_NONEWLINE    don't output a newline after the header
        CH_NOSTATUS     ignore the Status: and X-Status:
        CH_PREFIX       quote header with $indent_str
        CH_REORDER      output header in order specified by `hdr_order'
        CH_TXTPLAIN     generate text/plain MIME headers [hack alert.]
        CH_UPDATE       write new Status: and X-Status:
        CH_UPDATE_LEN   write new Content-Length: and Lines:
        CH_XMIT         ignore Lines: and Content-Length:
        CH_WEED         do header weeding
        CH_NOQFROM      ignore ">From " line
        CH_UPDATE_IRT   update the In-Reply-To: header
        CH_UPDATE_REFS  update the References: header
        CH_VIRTUAL      write virtual header lines too

   prefix
        string to use if CH_PREFIX is set
 */
int mutt_copy_header(FILE *in, HEADER *h, FILE *out, int flags, const char *prefix)
{
  function();
}

/* make a copy of a message
 *
 * fpout        where to write output
 * fpin         where to get input
 * hdr          header of message being copied
 * body         structure of message being copied
 * flags
 *      MUTT_CM_NOHEADER        don't copy header
 *      MUTT_CM_PREFIX  quote header and body
 *      MUTT_CM_DECODE  decode message body to text/plain
 *      MUTT_CM_DISPLAY displaying output to the user
 *      MUTT_CM_PRINTING   printing the message
 *      MUTT_CM_UPDATE  update structures in memory after syncing
 *      MUTT_CM_DECODE_PGP      used for decoding PGP messages
 *      MUTT_CM_CHARCONV        perform character set conversion
 * chflags      flags to mutt_copy_header()
 */
int _mutt_copy_message(FILE *fpout, FILE *fpin, HEADER *hdr, BODY *body, int flags, int chflags)
{
  function();
}

/* should be made to return -1 on fatal errors, and 1 on non-fatal errors
 * like partial decode, where it is worth displaying as much as possible */
int mutt_copy_message(FILE *fpout, CONTEXT *src, HEADER *hdr, int flags, int chflags)
{
  function();
}

/* appends a copy of the given message to a mailbox
 *
 * dest         destination mailbox
 * fpin         where to get input
 * src          source mailbox
 * hdr          message being copied
 * body         structure of message being copied
 * flags        mutt_copy_message() flags
 * chflags      mutt_copy_header() flags
 */
static int _mutt_append_message(CONTEXT *dest, FILE *fpin, CONTEXT *src,
                                HEADER *hdr, BODY *body, int flags, int chflags)
{
  function();
}

/*
 * This function copies a message body, while deleting _in_the_copy_
 * any attachments which are marked for deletion.
 * Nothing is changed in the original message -- this is left to the caller.
 *
 * The function will return 0 on success and -1 on failure.
 */
static int copy_delete_attach(BODY *b, FILE *fpin, FILE *fpout, char *date)
{
  function();
}

/*
 * This function is the equivalent of mutt_write_address_list(),
 * but writes to a buffer instead of writing to a stream.
 * mutt_write_address_list could be re-used if we wouldn't store
 * all the decoded headers in a huge array, first.
 *
 * XXX - fix that.
 */
static void format_address_header(char **h, ADDRESS *a)
{
  function();
}

/*
 * This checks for the malformed layout caused by MS Exchange in
 * some cases:
 *  <multipart/mixed>
 *     <text/plain>
 *     <application/pgp-encrypted> [BASE64-encoded]
 *     <application/octet-stream> [BASE64-encoded]
 * See ticket #3742
 */
int mutt_is_malformed_multipart_pgp_encrypted(BODY *b)
{
  function();
}

/*
 * Check if all recipients keys can be automatically determined.
 * Enable encryption if they can, otherwise disable encryption.
 */
void crypt_opportunistic_encrypt(HEADER *msg)
{
  function();
}

/*
 * This routine verifies a  "multipart/signed"  body.
 */
int mutt_signed_handler(BODY *a, STATE *s)
{
  function();
}

/* Obtain pointers to fingerprint or short or long key ID, if any.
 * See mutt_crypt.h for details.
 */
const char *crypt_get_fingerprint_or_id(char *p, const char **pphint,
                                        const char **ppl, const char **pps)
{
  function();
}

/*
 * Used by pgp_find_keys and find_keys to check if a crypt-hook
 * value is a key id.
 */
bool crypt_is_numerical_keyid(const char *s)
{
  function();
}

/*

    Generic

*/

#ifdef CRYPT_BACKEND_CLASSIC_PGP
extern struct crypt_module_specs crypt_mod_pgp_classic;
#endif

#ifdef CRYPT_BACKEND_CLASSIC_SMIME
extern struct crypt_module_specs crypt_mod_smime_classic;
#endif

#ifdef CRYPT_BACKEND_GPGME
extern struct crypt_module_specs crypt_mod_pgp_gpgme;
extern struct crypt_module_specs crypt_mod_smime_gpgme;
#endif

void crypt_init(void)
{
  function();
}

/*

    PGP

*/

/* Reset a PGP passphrase */
void crypt_pgp_void_passphrase(void)
{
  function();
}

/* This routine attempts to find the keyids of the recipients of a
   message.  It returns NULL if any of the keys can not be found.
   If oppenc_mode is true, only keys that can be determined without
   prompting will be used.  */
char *crypt_pgp_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
}

/* Warning: A is no longer freed in this routine, you need to free it
   later.  This is necessary for $fcc_attach. */
BODY *crypt_pgp_encrypt_message(BODY *a, char *keylist, int sign)
{
  function();
}

/*

   S/MIME

*/

/* Reset an SMIME passphrase */
void crypt_smime_void_passphrase(void)
{
  function();
}

/* This routine attempts to find the keyids of the recipients of a
   message.  It returns NULL if any of the keys can not be found.
   If oppenc_mode is true, only keys that can be determined without
   prompting will be used.  */
char *crypt_smime_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
}

/*
 * Type definitions.
 */

struct crypt_cache
{
  function();
}

/* Print the utf-8 encoded string BUF of length LEN bytes to stream
   FP. Convert the character set. */
static void print_utf8(FILE *fp, const char *buf, size_t len)
{
  function();
}

/*
 * Key management.
 */

/* Return the keyID for the key K.  Note that this string is valid as
   long as K is valid */
static const char *crypt_keyid(crypt_key_t *k)
{
  function();
}

/* Returns the fingerprint if available, otherwise
 * returns the long keyid.
 */
static const char *crypt_fpr_or_lkeyid(crypt_key_t *k)
{
  function();
}

/* Release all the keys at the address of KEYLIST and set the address
   to NULL. */
static void crypt_free_key(crypt_key_t **keylist)
{
  function();
}

/* Return a bit vector describing how well the addresses ADDR and
   U_ADDR match and whether KEY is valid. */
static int crypt_id_matches_addr(ADDRESS *addr, ADDRESS *u_addr, crypt_key_t *key)
{
  function();
}

/*
 * GPGME convenient functions.
 */

/* Create a new gpgme context and return it.  With FOR_SMIME set to
   true, the protocol of the context is set to CMS. */
static gpgme_ctx_t create_gpgme_context(int for_smime)
{
  function();
}

/* Create a new gpgme data object.  This is a wrapper to die on
   error. */
static gpgme_data_t create_gpgme_data(void)
{
  function();
}

/* Create a new GPGME Data object from the mail body A.  With CONVERT
   passed as true, the lines are converted to CR,LF if required.
   Return NULL on error or the gpgme_data_t object on success. */
static gpgme_data_t body_to_data_object(BODY *a, int convert)
{
  function();
}

/* Create a GPGME data object from the stream FP but limit the object
   to LENGTH bytes starting at OFFSET bytes from the beginning of the
   file. */
static gpgme_data_t file_to_data_object(FILE *fp, long offset, long length)
{
  function();
}

/* Copy a data object to a temporary file.
 * The tempfile name may be optionally passed in.
 * If ret_fp is passed in, the file will be rewound, left open, and returned
 * via that parameter.
 * The tempfile name is returned, and must be freed.
 */
static char *data_object_to_tempfile(gpgme_data_t data, char *tempf, FILE **ret_fp)
{
  function();
}

/* Create a GpgmeRecipientSet from the keys in the string KEYLIST.
   The keys must be space delimited. */
static gpgme_key_t *create_recipient_set(const char *keylist, gpgme_protocol_t protocol)
{
  function();
}

/* Encrypt the gpgme data object PLAINTEXT to the recipients in RSET
   and return an allocated filename to a temporary file containing the
   enciphered text.  With USE_SMIME set to true, the smime backend is
   used.  With COMBINED_SIGNED a PGP message is signed and
   encrypted.  Returns NULL in case of error */
static char *encrypt_gpgme_object(gpgme_data_t plaintext, gpgme_key_t *rset,
                                  int use_smime, int combined_signed)
{
  function();
}

/* Find the "micalg" parameter from the last Gpgme operation on
   context CTX.  It is expected that this operation was a sign
   operation.  Return the algorithm name as a C string in buffer BUF
   which must have been allocated by the caller with size BUFLEN.
   Returns 0 on success or -1 in case of an error.  The return string
   is truncated to BUFLEN - 1. */
static int get_micalg(gpgme_ctx_t ctx, int use_smime, char *buf, size_t buflen)
{
  function();
}

/*
 * Implementation of `sign_message'.
 */

/* Sign the MESSAGE in body A either using OpenPGP or S/MIME when
   USE_SMIME is passed as true.  Returns the new body or NULL on
   error. */
static BODY *sign_message(BODY *a, int use_smime)
{
  function();
}

/*
 * Implementation of `encrypt_message'.
 */

/* Encrypt the mail body A to all keys given as space separated keyids
   or fingerprints in KEYLIST and return the encrypted body.  */
BODY *pgp_gpgme_encrypt_message(BODY *a, char *keylist, int sign)
{
  function();
}

/*
 * Implementation of `smime_build_smime_entity'.
 */

/* Encrypt the mail body A to all keys given as space separated
   fingerprints in KEYLIST and return the S/MIME encrypted body.  */
BODY *smime_gpgme_build_smime_entity(BODY *a, char *keylist)
{
  function();
}

/*
 * Implementation of `verify_one'.
 */

/* Display the common attributes of the signature summary SUM.
   Return 1 if there is is a severe warning.
 */
static int show_sig_summary(unsigned long sum, gpgme_ctx_t ctx, gpgme_key_t key,
                            int idx, STATE *s, gpgme_signature_t sig)
{
  function();
}

/* Show information about one signature.  This function is called with
   the context CTX of a successful verification operation and the
   enumerator IDX which should start at 0 and increment for each
   call/signature.

   Return values are: 0 for normal procession, 1 for a bad signature,
   2 for a signature with a warning or -1 for no more signature.  */
static int show_one_sig_status(gpgme_ctx_t ctx, int idx, STATE *s)
{
  function();
}

/* Do the actual verification step. With IS_SMIME set to true we
   assume S/MIME (surprise!) */
static int verify_one(BODY *sigbdy, STATE *s, const char *tempfile, int is_smime)
{
  function();
}

/*
 * Implementation of `decrypt_part'.
 */

/* Decrypt a PGP or SMIME message (depending on the boolean flag
   IS_SMIME) with body A described further by state S.  Write
   plaintext out to file FPOUT and return a new body.  For PGP returns
   a flag in R_IS_SIGNED to indicate whether this is a combined
   encrypted and signed message, for S/MIME it returns true when it is
   not a encrypted but a signed message.  */
static BODY *decrypt_part(BODY *a, STATE *s, FILE *fpout, int is_smime, int *r_is_signed)
{
  function();
}

/* Decrypt a PGP/MIME message in FPIN and B and return a new body and
   the stream in CUR and FPOUT.  Returns 0 on success. */
int pgp_gpgme_decrypt_mime(FILE *fpin, FILE **fpout, BODY *b, BODY **cur)
{
  function();
}

/* Decrypt a S/MIME message in FPIN and B and return a new body and
   the stream in CUR and FPOUT.  Returns 0 on success. */
int smime_gpgme_decrypt_mime(FILE *fpin, FILE **fpout, BODY *b, BODY **cur)
{
  function();
}

/* Check that 'b' is a complete line containing 'a' followed by either LF or CRLF.
 *
 * returns:
 * 0 if the is a match
 * -1 otherwise
 */
static int line_compare(const char *a, size_t n, const char *b)
{
  function();
}

/*
 * Implementation of `pgp_check_traditional'.
 */
static int pgp_check_traditional_one_body(FILE *fp, BODY *b, int tagged_only)
{
  function();
}

/*
 * Implementation of `application_handler'.
 */

/*
  Copy a clearsigned message, and strip the signature and PGP's
  dash-escaping.

  XXX - charset handling: We assume that it is safe to do
  character set decoding first, dash decoding second here, while
  we do it the other way around in the main handler.

  (Note that we aren't worse than Outlook & Cie in this, and also
  note that we can successfully handle anything produced by any
  existing versions of mutt.)  */
static void copy_clearsigned(gpgme_data_t data, STATE *s, char *charset)
{
  function();
}

/*
 * Implementation of `encrypted_handler'.
 */

/* MIME handler for pgp/mime encrypted messages.
 * This handler is passed the application/octet-stream directly.
 * The caller must propagate a->goodsig to its parent.
 */
int pgp_gpgme_encrypted_handler(BODY *a, STATE *s)
{
  function();
}

/*
 * Format an entry on the CRYPT key selection menu.
 *
 * %n   number
 * %k   key id          %K      key id of the principal key
 * %u   user id
 * %a   algorithm       %A      algorithm of the princ. key
 * %l   length          %L      length of the princ. key
 * %f   flags           %F      flags of the princ. key
 * %c   capabilities    %C      capabilities of the princ. key
 * %t   trust/validity of the key-uid association
 * %p           protocol
 * %[...] date of key using strftime(3)
 */
static const char *crypt_entry_fmt(char *dest, size_t destlen, size_t col, int cols,
                                   char op, const char *src, const char *prefix,
                                   const char *ifstring, const char *elsestring,
                                   unsigned long data, format_flag flags)
{
  function();
}

/* Compare two trust values, the key length, the creation dates. the
   addresses and the key IDs.  For sorting. */
static int _crypt_compare_trust(const void *a, const void *b)
{
  function();
}

/* Print the X.500 Distinguished Name part KEY from the array of parts
   DN to FP. */
static int print_dn_part(FILE *fp, struct dn_array_s *dn, const char *key)
{
  function();
}

/* Parse a DN and return an array-ized one.  This is not a validating
   parser and it does not support any old-stylish syntax; gpgme is
   expected to return only rfc2253 compatible strings. */
static struct dn_array_s *parse_dn(const char *string)
{
  function();
}

/* Print a nice representation of the USERID and make sure it is
   displayed in a proper way, which does mean to reorder some parts
   for S/MIME's DNs.  USERID is a string as returned by the gpgme key
   functions.  It is utf-8 encoded. */
static void parse_and_print_user_id(FILE *fp, const char *userid)
{
  function();
}

/*
 * Implementation of `findkeys'.
 */

/* Convert LIST into a pattern string suitable to be passed to GPGME.
   We need to convert spaces in an item into a '+' and '%' into
   "%25". */
static char *list_to_pattern(LIST *list)
{
  function();
}

/* Return a list of keys which are candidates for the selection.
   Select by looking at the HINTS list. */
static crypt_key_t *get_candidates(LIST *hints, unsigned int app, int secret)
{
  function();
}

/* Add the string STR to the list HINTS.  This list is later used to
   match addresses. */
static LIST *crypt_add_string_to_hints(LIST *hints, const char *str)
{
  function();
}

/* Display a menu to select a key from the array KEYS. FORCED_VALID
   will be set to true on return if the user did override the
   key's validity. */
static crypt_key_t *crypt_select_key(crypt_key_t *keys, ADDRESS *p, const char *s,
                                     unsigned int app, int *forced_valid)
{
  function();
}

/* Display TAG as a prompt to ask for a key.  If WHATFOR is not null
   use it as default and store it under that label as the next
   default.  ABILITIES describe the required key abilities (sign,
   encrypt) and APP the type of the requested key; ether S/MIME or
   PGP.  Return a copy of the key or NULL if not found. */
static crypt_key_t *crypt_ask_for_key(char *tag, char *whatfor, short abilities,
                                      unsigned int app, int *forced_valid)
{
  function();
}

/* This routine attempts to find the keyids of the recipients of a
   message.  It returns NULL if any of the keys can not be found.
   If oppenc_mode is true, only keys that can be determined without
   prompting will be used.  */
static char *find_keys(ADDRESS *adrlist, unsigned int app, int oppenc_mode)
{
  function();
}

/* not possible to unget more than one char under some curses libs, and it
 * is impossible to unget function keys in SLang, so roll our own input
 * buffering routines.
 */

/* These are used for macros and exec/push commands.
 * They can be temporarily ignored by setting OPTIGNOREMACROEVENTS
 */
static size_t MacroBufferCount = 0;
static size_t MacroBufferLen = 0;
static event_t *MacroEvents;

/* These are used in all other "normal" situations, and are not
 * ignored when setting OPTIGNOREMACROEVENTS
 */
static size_t UngetCount = 0;
static size_t UngetLen = 0;
static event_t *UngetKeyEvents;

mutt_window_t *MuttHelpWindow = NULL;
mutt_window_t *MuttIndexWindow = NULL;
mutt_window_t *MuttStatusWindow = NULL;
mutt_window_t *MuttMessageWindow = NULL;
#ifdef USE_SIDEBAR
mutt_window_t *MuttSidebarWindow = NULL;
#endif

static void reflow_message_window_rows(int mw_rows);

void mutt_refresh(void)
{
  function();
}

/* Make sure that the next refresh does a full refresh.  This could be
   optimized by not doing it at all if DISPLAY is set as this might
   indicate that a GUI based pinentry was used.  Having an option to
   customize this is of course the Mutt way.  */
void mutt_need_hard_redraw(void)
{
  function();
}

/* Assumes the cursor has already been positioned within the
 * window.
 */
void mutt_window_clrtoeol(mutt_window_t *win)
{
  function();
}

/* Assumes the cursor has already been positioned within the
 * window.
 */
void mutt_window_clrtoeol(mutt_window_t *win)
{
  function();
}

/* Assumes the current position is inside the window.
 * Otherwise it will happily return negative or values outside
 * the window boundaries
 */
void mutt_window_getyx(mutt_window_t *win, int *y, int *x)
{
  function();
}

/*
 * Adds the ch/op to the macro buffer.
 * This should be used for macros, push, and exec commands only.
 */
void mutt_push_macro_event(int ch, int op)
{
  function();
}

/* The argument can take 3 values:
 * -1: restore the value of the last call
 *  0: make the cursor invisible
 *  1: make the cursor visible
 */
void mutt_curs_set(int cursor)
{
  function();
}
#endif

int mutt_multi_choice(char *prompt, char *letters)
{
  function();
}

/*
 * addwch would be provided by an up-to-date curses library
 */
int mutt_addwch(wchar_t wc)
{
  function();
}

/*
 * This formats a string, a bit like
 * snprintf (dest, destlen, "%-*.*s", min_width, max_width, s),
 * except that the widths refer to the number of character cells
 * when printed.
 */
void mutt_format_string(char *dest, size_t destlen, int min_width, int max_width,
                        int justify, char m_pad_char, const char *s, size_t n, int arboreal)
{
  function();
}

/*
 * This formats a string rather like
 *   snprintf (fmt, sizeof (fmt), "%%%ss", prefix);
 *   snprintf (dest, destlen, fmt, s);
 * except that the numbers in the conversion specification refer to
 * the number of character cells when printed.
 */
static void format_s_x(char *dest, size_t destlen, const char *prefix,
                       const char *s, int arboreal)
{
  function();
}

/*
 * mutt_paddstr (n, s) is almost equivalent to
 * mutt_format_string (bigbuf, big, n, n, FMT_LEFT, ' ', s, big, 0), addstr (bigbuf)
 */
void mutt_paddstr(int n, const char *s)
{
  function();
}

/* See how many bytes to copy from string so it's at most maxlen bytes
 * long and maxwid columns wide */
size_t mutt_wstr_trunc(const char *src, size_t maxlen, size_t maxwid, size_t *width)
{
  function();
}

/*
 * returns the number of bytes the first (multibyte) character
 * of input consumes:
 *      < 0 ... conversion error
 *      = 0 ... end of input
 *      > 0 ... length (bytes)
 */
int mutt_charlen(const char *s, int *width)
{
  function();
}

/*
 * mutt_strwidth is like mutt_strlen except that it returns the width
 * referring to the number of character cells.
 */
int mutt_strwidth(const char *s)
{
  function();
}

/* Return the index of the first new message, or failing that, the first
 * unread message.
 */
static int ci_first_message(void)
{
  function();
}

/* This function handles the message index window as well as commands returned
 * from the pager (MENU_PAGER).
 */
int mutt_index_menu(void)
{
  function();
}

/* returns the seconds east of UTC given `g' and its corresponding gmtime()
   representation */
static time_t compute_tz(time_t g, struct tm *utc)
{
  function();
}

/* Returns the local timezone in seconds east of UTC for the time t,
 * or for the current time if t is zero.
 */
time_t mutt_local_tz(time_t t)
{
  function();
}

/* converts struct tm to time_t, but does not take the local timezone into
   account unless ``local'' is nonzero */
time_t mutt_mktime(struct tm *t, int local)
{
  function();
}

/*
 * SLcurses_waddnstr() can't take a "const char *", so this is only
 * declared "static" (sigh)
 */
static char *EditorHelp1 =
    N_("~~              insert a line beginning with a single ~\n"
       "~b users        add users to the Bcc: field\n"
       "~c users        add users to the Cc: field\n"
       "~f messages     include messages\n"
       "~F messages     same as ~f, except also include headers\n"
       "~h              edit the message header\n"
       "~m messages     include and quote messages\n"
       "~M messages     same as ~m, except include headers\n"
       "~p              print the message\n");

static char *EditorHelp2 =
    N_("~q              write file and quit editor\n"
       "~r file         read a file into the editor\n"
       "~t users        add users to the To: field\n"
       "~u              recall the previous line\n"
       "~v              edit message with the $visual editor\n"
       "~w file         write message to file\n"
       "~x              abort changes and quit editor\n"
       "~?              this message\n"
       ".               on a line by itself ends input\n");

static char **be_snarf_data(FILE *f, char **buf, int *bufmax, int *buflen,
                            LOFF_T offset, int bytes, int prefix)
{
  function();
}

/* args:
 *      force   override the $ask* vars (used for the ~h command)
 */
static void be_edit_header(ENVELOPE *e, int force)
{
  function();
}

/*
 * return value:
 *
 * 1    message not modified
 * 0    message edited successfully
 * -1   error
 */
static int edit_one_message(CONTEXT *ctx, HEADER *cur)
{
  function();
}

/*
 * Replace part of the wchar_t buffer, from FROM to CURPOS, by BUF.
 */
static void replace_part(ENTER_STATE *state, size_t from, char *buf)
{
  function();
}

/*
 * Return 1 if the character is not typically part of a pathname
 */
static inline int is_shell_char(wchar_t ch)
{
  function();
}

/* This function is for very basic input, currently used only by the
 * built-in editor.  It does not handle screen redrawing on resizes
 * well, because there is no active menu for the built-in editor.
 * Most callers should prefer mutt_get_field() instead.
 *
 * Returns:
 *      0 if input was given
 *      -1 if abort.
 */
int mutt_enter_string(char *buf, size_t buflen, int col, int flags)
{
  function();
}

/*
 * Returns:
 *      1 need to redraw the screen and call me again
 *      0 if input was given
 *      -1 if abort.
 */
int _mutt_enter_string(char *buf, size_t buflen, int col, int flags, int multiple,
                       char ***files, int *numfiles, ENTER_STATE *state)
{
  function();
}

/*
 * TODO:
 * very narrow screen might crash it
 * sort out the input side
 * unprintable chars
 */

/**
 * Copyright (C) 1999-2000 Thomas Roessler <roessler@does-not-exist.org>
 *
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Some simple dummies, so we can reuse the routines from
 * lib.c in external programs.
 */

#define WHERE
#define _EXTLIB_C

#include "dummy.h"
/* Invokes a command on a pipe and optionally connects its stdin and stdout
 * to the specified handles.
 */
pid_t mutt_create_filter_fd(const char *cmd, FILE **in, FILE **out, FILE **err,
                            int fdin, int fdout, int fderr)
{
  function();
}

/*
 * A valid message separator looks like:
 *
 * From [ <return-path> ] <weekday> <month> <day> <time> [ <timezone> ] <year>
 */
int is_from(const char *s, char *path, size_t pathlen, time_t *tp)
{
  function();
}

/****************
 * Read the GNUPG keys.  For now we read the complete keyring by
 * calling gnupg in a special mode.
 *
 * The output format of gpgm is colon delimited with these fields:
 *   - record type ("pub","uid","sig","rev" etc.)
 *   - trust info
 *   - key length
 *   - pubkey algo
 *   - 16 hex digits with the long keyid.
 *   - timestamp (1998-02-28)
 *   - Local id
 *   - ownertrust
 *   - name
 *   - signature class
 */

/* decode the backslash-escaped user ids. */

static char *_chs = NULL;

static void fix_uid(char *uid)
{
  function();
}

/*
 * Decode an attachment encoded with quoted-printable.
 *
 * Why doesn't this overflow any buffers?  First, it's guaranteed
 * that the length of a line grows when you _en_-code it to
 * quoted-printable.  That means that we always can store the
 * result in a buffer of at most the _same_ size.
 *
 * Now, we don't special-case if the line we read with fgets()
 * isn't terminated.  We don't care about this, since STRING > 78,
 * so corrupted input will just be corrupted a bit more.  That
 * implies that STRING+1 bytes are always sufficient to store the
 * result of qp_decode_line.
 *
 * Finally, at soft line breaks, some part of a multibyte character
 * may have been left over by convert_to_state().  This shouldn't
 * be more than 6 characters, so STRING + 7 should be sufficient
 * memory to store the decoded data.
 *
 * Just to make sure that I didn't make some off-by-one error
 * above, we just use STRING*2 for the target buffer's size.
 *
 */
static void decode_quoted(STATE *s, long len, int istext, iconv_t cd)
{
  function();
}

/* ----------------------------------------------------------------------------
 * A (not so) minimal implementation of RFC1563.
 */

#define IndentSize (4)

enum
{
  function();
}

/*
 * Returns:
 * 1    if the body part should be filtered by a mailcap entry prior to viewing inline.
 *
 * 0    otherwise
 */
static int is_autoview(BODY *b)
{
  function();
}

/* when generating format=flowed ($text_flowed is set) from format=fixed,
 * strip all trailing spaces to improve interoperability;
 * if $text_flowed is unset, simply verbatim copy input
 */
static int text_plain_handler(BODY *b, STATE *s)
{
  function();
}

/* table        hash table to update
 * key          key to hash on
 * data         data to associate with `key'
 * allow_dup    if nonzero, duplicate keys are allowed in the table
 */
static int union_hash_insert(HASH *table, union hash_key key, void *data)
{
  function();
}

/* ptr          pointer to the hash table to be freed
 * destroy()    function to call to free the ->data member (optional)
 */
void hash_destroy(HASH **ptr, void (*destroy)(void *))
{
  function();
}

/* This function transforms a header into a char so that it is useable by
 * db_store.
 */
static void *hcache_dump(header_cache_t *h, HEADER *header, int *off, unsigned int uidvalidity)
{
  function();
}

/* The maximum size of the database file (2GiB).
 * The file is mmap(2)'d into memory. */
const size_t LMDB_DB_SIZE = 2147483648;

enum mdb_txn_mode
{
  function();
}

/* Search for a mailing list in the list of addresses pointed to by adr.
 * If one is found, print pfx and the name of the list into buf, then
 * return 1.  Otherwise, simply return 0.
 */
static bool check_for_mailing_list(ADDRESS *adr, const char *pfx, char *buf, int buflen)
{
  function();
}

/* Search for a mailing list in the list of addresses pointed to by adr.
 * If one is found, print the address of the list into buf, then return 1.
 * Otherwise, simply return 0.
 */
static bool check_for_mailing_list_addr(ADDRESS *adr, char *buf, int buflen)
{
  function();
}

/* Return values:
 * 0: user is not in list
 * 1: user is unique recipient
 * 2: user is in the TO list
 * 3: user is in the CC list
 * 4: user is originator
 * 5: sent to a subscribed mailinglist
 */
static int user_is_recipient(HEADER *h)
{
  function();
}

/* %a = address of author
 * %A = reply-to address (if present; otherwise: address of author
 * %b = filename of the originating folder
 * %B = the list to which the letter was sent, or else the folder name (%b).
 * %c = size of message in bytes
 * %C = current message number
 * %d = date and time of message using $date_format and sender's timezone
 * %D = date and time of message using $date_format and local timezone
 * %e = current message number in thread
 * %E = number of messages in current thread
 * %f = entire from line
 * %F = like %n, unless from self
 * %g = newsgroup name (if compiled with NNTP support)
 * %g = message labels (e.g. notmuch tags)
 * %i = message-id
 * %I = initials of author
 * %K = the list to which the letter was sent (if any; otherwise: empty)
 * %l = number of lines in the message
 * %L = like %F, except `lists' are displayed first
 * %m = number of messages in the mailbox
 * %n = name of author
 * %N = score
 * %O = like %L, except using address instead of name
 * %P = progress indicator for builtin pager
 * %r = comma separated list of To: recipients
 * %R = comma separated list of Cc: recipients
 * %s = subject
 * %S = short message status (e.g., N/O/D/!/r/-)
 * %t = `to:' field (recipients)
 * %T = $to_chars
 * %u = user (login) name of author
 * %v = first name of author, unless from self
 * %W = where user is (organization)
 * %x = `x-comment-to:' field (if present and compiled with NNTP support)
 * %X = number of MIME attachments
 * %y = `x-label:' field (if present)
 * %Y = `x-label:' field (if present, tree unfolded, and != parent's x-label)
 * %Z = status flags    */
static const char *hdr_format_str(char *dest, size_t destlen, size_t col, int cols,
                                  char op, const char *src, const char *prefix,
                                  const char *ifstring, const char *elsestring,
                                  unsigned long data, format_flag flags)
{
  function();
}

/* %a = address of author
 * %A = reply-to address (if present; otherwise: address of author
 * %b = filename of the originating folder
 * %B = the list to which the letter was sent, or else the folder name (%b).
 * %c = size of message in bytes
 * %C = current message number
 * %d = date and time of message using $date_format and sender's timezone
 * %D = date and time of message using $date_format and local timezone
 * %e = current message number in thread
 * %E = number of messages in current thread
 * %f = entire from line
 * %F = like %n, unless from self
 * %g = newsgroup name (if compiled with NNTP support)
 * %g = message labels (e.g. notmuch tags)
 * %i = message-id
 * %I = initials of author
 * %K = the list to which the letter was sent (if any; otherwise: empty)
 * %l = number of lines in the message
 * %L = like %F, except `lists' are displayed first
 * %m = number of messages in the mailbox
 * %n = name of author
 * %N = score
 * %O = like %L, except using address instead of name
 * %P = progress indicator for builtin pager
 * %r = comma separated list of To: recipients
 * %R = comma separated list of Cc: recipients
 * %s = subject
 * %S = short message status (e.g., N/O/D/!/r/-)
 * %t = `to:' field (recipients)
 * %T = $to_chars
 * %u = user (login) name of author
 * %v = first name of author, unless from self
 * %W = where user is (organization)
 * %x = `x-comment-to:' field (if present and compiled with NNTP support)
 * %X = number of MIME attachments
 * %y = `x-label:' field (if present)
 * %Y = `x-label:' field (if present, tree unfolded, and != parent's x-label)
 * %Z = status flags    */
static const char *hdr_format_str(char *dest, size_t destlen, size_t col, int cols,
                                  char op, const char *src, const char *prefix,
                                  const char *ifstring, const char *elsestring,
                                  unsigned long data, format_flag flags)
{
  function();
}

/*
 * add an X-Label: field.
 */
static int label_message(CONTEXT *ctx, HEADER *hdr, char *new)
{
  function();
}

/* imap_logout_all: close all open connections. Quick and dirty until we can
 *   make sure we've got all the context we need. */
void imap_logout_all(void)
{
  function();
}

/* imap_read_literal: read bytes bytes from server into file. Not explicitly
 *   buffered, relies on FILE buffering. NOTE: strips \r from \r\n.
 *   Apparently even literals use \r\n-terminated strings ?! */
int imap_read_literal(FILE *fp, IMAP_DATA *idata, long bytes, progress_t *pbar)
{
  function();
}

/* imap_expunge_mailbox: Purge IMAP portion of expunged messages from the
 *   context. Must not be done while something has a handle on any headers
 *   (eg inside pager or editor). That is, check IMAP_REOPEN_ALLOW. */
void imap_expunge_mailbox(IMAP_DATA *idata)
{
  function();
}

/* imap_conn_find: Find an open IMAP connection matching account, or open
 *   a new one if none can be found. */
IMAP_DATA *imap_conn_find(const ACCOUNT *account, int flags)
{
  function();
}

/* imap_get_flags: Make a simple list out of a FLAGS response.
 *   return stream following FLAGS response */
static char *imap_get_flags(LIST **hflags, char *s)
{
  function();
}

/* imap_get_flags: Make a simple list out of a FLAGS response.
 *   return stream following FLAGS response */
static char *imap_get_flags(LIST **hflags, char *s)
{
  function();
}

/* imap_set_flag: append str to flags if we currently have permission
 *   according to aclbit */
static void imap_set_flag(IMAP_DATA *idata, int aclbit, int flag,
                          const char *str, char *flags, size_t flsize)
{
  function();
}

/* imap_has_flag: do a caseless comparison of the flag against a flag list,
*   return true if found or flag list has '\*', false otherwise */
bool imap_has_flag(LIST *flag_list, const char *flag)
{
  function();
}

/* Note: headers must be in SORT_ORDER. See imap_exec_msgset for args.
 * Pos is an opaque pointer a la strtok. It should be 0 at first call. */
static int imap_make_msg_set(IMAP_DATA *idata, BUFFER *buf, int flag,
                             int changed, int invert, int *pos)
{
  function();
}

/* Prepares commands for all messages matching conditions (must be flushed
 * with imap_exec)
 * Params:
 *   idata: IMAP_DATA containing context containing header set
 *   pre, post: commands are of the form "%s %s %s %s", tag,
 *     pre, message set, post
 *   flag: enum of flag type on which to filter
 *   changed: include only changed messages in message set
 *   invert: invert sense of flag, eg MUTT_READ matches unread messages
 * Returns: number of matched messages, or -1 on failure */
int imap_exec_msgset(IMAP_DATA *idata, const char *pre, const char *post,
                     int flag, int changed, int invert)
{
  function();
}

/* update the IMAP server to reflect message changes done within mutt.
 * Arguments
 *   ctx: the current context
 *   expunge: 0 or 1 - do expunge?
 */
int imap_sync_mailbox(CONTEXT *ctx, int expunge)
{
  function();
}

/* use the NOOP or IDLE command to poll for new mail
 *
 * return values:
 *      MUTT_REOPENED   mailbox has been externally modified
 *      MUTT_NEW_MAIL   new mail has arrived!
 *      0               no change
 *      -1              error
 */
int imap_check_mailbox(CONTEXT *ctx, int force)
{
  function();
}

/* check for new mail in any subscribed mailboxes. Given a list of mailboxes
 * rather than called once for each so that it can batch the commands and
 * save on round trips. Returns number of mailboxes with new mail. */
int imap_buffy_check(int force, int check_stats)
{
  function();
}

/* imap_status: returns count of messages in mailbox, or -1 on error.
 * if queue != 0, queue the command and expect it to have been run
 * on the next call (for pipelining the postponed count) */
int imap_status(char *path, int queue)
{
  function();
}

/* returns number of patterns in the search that should be done server-side
 * (eg are full-text) */
static int do_search(const pattern_t *search, int allpats)
{
  function();
}

/* convert mutt pattern_t to IMAP SEARCH command containing only elements
 * that require full-text search (mutt already has what it needs for most
 * match types, and does a better job (eg server doesn't support regexps). */
static int imap_compile_search(const pattern_t *pat, BUFFER *buf)
{
  function();
}

/* trim dest to the length of the longest prefix it shares with src,
 * returning the length of the trimmed string */
static int longest_common_prefix(char *dest, const char *src, int start, size_t dlen)
{
  function();
}

/* look for IMAP URLs to complete from defined mailboxes. Could be extended
 * to complete over open connections and account/folder hooks too. */
static int imap_complete_hosts(char *dest, size_t len)
{
  function();
}

/* imap_complete: given a partial IMAP folder path, return a string which
 *   adds as much to the path as is unique */
int imap_complete(char *dest, size_t dlen, char *path)
{
  function();
}

/* imap_fast_trash: use server COPY command to copy deleted
 * messages to the trash folder.
 *   Return codes:
 *      -1: error
 *       0: success
 *       1: non-fatal error - try fetch/append */
int imap_fast_trash(CONTEXT *ctx, char *dest)
{
  function();
}

/* Helper function for parse_setenv().
 * It's broken out because some other parts of mutt (filter.c) need
 * to set/overwrite environment variables in envlist before execing.
 *
 * @param name pointer to the name of the environment variable
 * @param value pointer to the value the envionment variable should have
 * @param overwrite whether the environment variable should be overwritten
 */
void mutt_envlist_set(const char *name, const char *value, bool overwrite)
{
  function();
}

/* Stack structure
 * FILO designed to contain the list of config files that have been sourced
 * and avoid cyclic sourcing */
static LIST *MuttrcStack;

/* Use POSIX functions to convert a path to absolute, relatively to another path
 * Args:
 *  - path: instance containing the relative path to the file we want the absolute
 *     path of. Should be at least of PATH_MAX length, will contain the full result.
 *  - reference: path to a file which directory will be set as reference for setting
 *      up the absolute path.
 * Returns: true (1) on success, false (0) otherwise.
 */
static int to_absolute_path(char *path, const char *reference)
{
  function();
}

/* Stack structure
 * FILO designed to contain the list of config files that have been sourced
 * and avoid cyclic sourcing */
static LIST *MuttrcStack;

/* Use POSIX functions to convert a path to absolute, relatively to another path
 * Args:
 *  - path: instance containing the relative path to the file we want the absolute
 *     path of. Should be at least of PATH_MAX length, will contain the full result.
 *  - reference: path to a file which directory will be set as reference for setting
 *      up the absolute path.
 * Returns: true (1) on success, false (0) otherwise.
 */
static int to_absolute_path(char *path, const char *reference)
{
  function();
}

/* reads the specified initialization file.  returns -1 if errors were found
   so that we can pause to let the user know...  */
static int source_rc(const char *rcfile_path, BUFFER *err)
{
  function();
}

/* line         command to execute

   token        scratch buffer to be used by parser.  caller should free
                token->data when finished.  the reason for this variable is
                to avoid having to allocate and deallocate a lot of memory
                if we are parsing many lines.  the caller can pass in the
                memory to use, which avoids having to create new space for
                every call to this function.

   err          where to write error messages */
int mutt_parse_rc_line(/* const */ char *line, BUFFER *token, BUFFER *err)
{
  function();
}

/* initial string that starts completion. No telling how much crap
 * the user has typed so far. Allocate LONG_STRING just to be sure! */
static char User_typed[LONG_STRING] = {0};

static int Num_matched = 0;          /* Number of matches for completion */
static char Completed[STRING] = {0}; /* completed string (command or variable) */
static const char **Matches;
/* this is a lie until mutt_init runs: */
static int Matches_listsize = MAX(NUMVARS, NUMCOMMANDS) + 10;

static void matches_ensure_morespace(int current)
{
  function();
}

/* helper function for completion.  Changes the dest buffer if
   necessary/possible to aid completion.
        dest == completion result gets here.
        src == candidate for completion.
        try == user entered data for completion.
        len == length of dest buffer.
*/
static void candidate(char *dest, char *try, const char *src, int len)
{
  function();
}

/* Fetch a list of all notmuch tags and insert them into the completion
 * machinery.
 */
static int complete_all_nm_tags(const char *pt)
{
  function();
}

/* Return the last instance of needle in the haystack, or NULL.
 * Like strstr(), only backwards, and for a limited haystack length.
 */
static const char *rstrnstr(const char *haystack, size_t haystack_length, const char *needle)
{
  function();
}

/*
 * This function parses the string <NNN> and uses the octal value as the key
 * to bind.
 */
static int parse_keycode(const char *s)
{
  function();
}

/* insert a key sequence into the specified map.  the map is sorted by ASCII
 * value (lowest to highest)
 */
void km_bind(char *s, int menu, int op, char *macro, char *descr)
{
  function();
}

/* Parses s for <function> syntax and adds the whole sequence to
 * either the macro or unget buffer.  This function is invoked by the next
 * two defines below.
 */
static void generic_tokenize_push_string(char *s, void (*generic_push)(int, int))
{
  function();
}

/* return values:
 *      >0              function to execute
 *      OP_NULL         no function bound to key sequence
 *      -1              error occurred while reading input
 */
int km_dokey(int menu)
{
  function();
}

/*
 * prompts the user to enter a keystroke, and displays the octal value back
 * to the user.
 */
void mutt_what_key(void)
{
  function();
}

/*
 * This function is supposed to do nfs-safe renaming of files.
 *
 * Warning: We don't check whether src and target are equal.
 */
int safe_rename(const char *src, const char *target)
{
  function();
}

/* when opening files for writing, make sure the file doesn't already exist
 * to avoid race conditions.
 */
FILE *safe_fopen(const char *path, const char *mode)
{
  function();
}

/* Read a line from ``fp'' into the dynamically allocated ``s'',
 * increasing ``s'' if necessary. The ending "\n" or "\r\n" is removed.
 * If a line ends with "\", this char and the linefeed is removed,
 * and the next line is read too.
 */
char *mutt_read_line(char *s, size_t *size, FILE *fp, int *line, int flags)
{
  function();
}

/* prepare a file name to survive the shell's quoting rules.
 * From the Unix programming FAQ by way of Liviu.
 */
size_t mutt_quote_filename(char *d, size_t l, const char *f)
{
  function();
}

/*
 * Write the concatenated pathname (dir + "/" + fname) into dst.
 * The slash is omitted when dir or fname is of 0 length.
 * Returns NULL on error or a pointer to dst otherwise.
 */
char *mutt_concatn_path(char *dst, size_t dstlen, const char *dir,
                        size_t dirlen, const char *fname, size_t fnamelen)
{
  function();
}

/* Note that this function is also called when new mail is appended to the
 * currently open folder, and NOT just when the mailbox is initially read.
 *
 * NOTE: it is assumed that the mailbox being read has been locked before
 * this routine gets called.  Strange things could happen if it's not!
 */
static int mbox_parse_mailbox(CONTEXT *ctx)
{
  function();
}

/* check to see if the mailbox has changed on disk.
 *
 * return values:
 *      MUTT_REOPENED   mailbox has been reopened
 *      MUTT_NEW_MAIL   new mail has arrived!
 *      MUTT_LOCKED     couldn't lock the file
 *      0               no change
 *      -1              error
 */
static int mbox_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
}

/*
 * Returns 1 if the mailbox has at least 1 new messages (not old)
 * otherwise returns 0.
 */
static bool mbox_has_new(CONTEXT *ctx)
{
  function();
}

/* if mailbox has at least 1 new message, sets mtime > atime of mailbox
 * so buffy check reports new mail */
void mbox_reset_atime(CONTEXT *ctx, struct stat *st)
{
  function();
}

/* return values:
 *      0       success
 *      -1      failure
 */
static int mbox_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
}

/*
 * Returns:
 * 1 if the mailbox is not empty
 * 0 if the mailbox is empty
 * -1 on error
 */
int mbox_check_empty(const char *path)
{
  function();
}

/*
 * For systems that don't have them, we provide here our own
 * implementations of wcrtomb(), mbrtowc(), iswprint() and wcwidth().
 * Instead of using the locale, as these functions normally would,
 * we use Mutt's Charset variable. We support 3 types of charset:
 * (1) For 8-bit charsets, wchar_t uses the same encoding as char.
 * (2) For UTF-8, wchar_t uses UCS.
 * (3) For stateless Japanese encodings, we use UCS and convert
 *     via UTF-8 using iconv.
 * Unfortunately, we can't handle non-stateless encodings.
 */
static size_t wcrtomb_iconv(char *s, wchar_t wc, iconv_t cd)
{
  function();
}

/*
 * l10n for Japanese:
 *   Symbols, Greek and Cyrillic in JIS X 0208, Japanese Kanji
 *   Character Set, have a column width of 2.
 */
static int wcwidth_ja(wchar_t ucs)
{
  function();
}

/* We need to keep the namespace clean so define the MD5 function
   protected using leading __ .  */
#define md5_init_ctx __md5_init_ctx
#define md5_process_block __md5_process_block
#define md5_process_bytes __md5_process_bytes
#define md5_finish_ctx __md5_finish_ctx
#define md5_read_ctx __md5_read_ctx
#define md5_stream __md5_stream
#define md5_buffer __md5_buffer
#endif

#ifdef WORDS_BIGENDIAN
#define SWAP(n)                                                                \
  (((n) << 24) | (((n) &0xff00) << 8) | (((n) >> 8) & 0xff00) | ((n) >> 24))
#else
#define SWAP(n) (n)
#endif

#define BLOCKSIZE 4096
#if ((BLOCKSIZE % 64) != 0)
#error "invalid BLOCKSIZE"
#endif

/* This array contains the bytes used to pad the buffer to the next
   64-byte boundary.  (RFC 1321, 3.1: Step 1)  */
static const unsigned char fillbuf[64] = {0x80, 0 /* , 0, 0, ...  */};

/* Initialize structure containing state of computation.
   (RFC 1321, 3.3: Step 3)  */
void md5_init_ctx(struct md5_ctx *ctx)
{
  function();
}

/* Copy the 4 byte value from v into the memory location pointed to by *cp,
   If your architecture allows unaligned access this is equivalent to
   * (md5_uint32 *) cp = v  */
static inline void set_uint32(char *cp, md5_uint32 v)
{
  function();
}

/* Put result from CTX in first 16 bytes following RESBUF.  The result
   must be in little endian byte order.  */
void *md5_read_ctx(const struct md5_ctx *ctx, void *resbuf)
{
  function();
}

/* Process the remaining bytes in the internal buffer and the usual
   prolog according to the standard and write the result to RESBUF.  */
void *md5_finish_ctx(struct md5_ctx *ctx, void *resbuf)
{
  function();
}

/* Compute MD5 message digest for bytes read from STREAM.  The
   resulting message digest number will be written into the 16 bytes
   beginning at RESBLOCK.  */
int md5_stream(FILE *stream, void *resblock)
{
  function();
}

/* Compute MD5 message digest for LEN bytes beginning at BUFFER.  The
   result is always in little endian byte order, so that a byte-wise
   output yields to the wanted ASCII representation of the message
   digest.  */
void *md5_buffer(const char *buffer, size_t len, void *resblock)
{
  function();
}

/* These are the four functions used in the four steps of the MD5 algorithm
   and defined in the RFC 1321.  The first function is a little bit optimized
   (as found in Colin Plumbs public domain implementation).  */
/* #define FF(b, c, d) ((b & c) | (~b & d)) */
#define FF(b, c, d) (d ^ (b & (c ^ d)))
#define FG(b, c, d) FF(d, b, c)
#define FH(b, c, d) (b ^ c ^ d)
#define FI(b, c, d) (c ^ (b | ~d))

/* Process LEN bytes of BUFFER, accumulating context into CTX.
   It is assumed that LEN % 64 == 0.  */
void md5_process_block(const void *buffer, size_t len, struct md5_ctx *ctx)
{
  function();
}

/* These are the four functions used in the four steps of the MD5 algorithm
   and defined in the RFC 1321.  The first function is a little bit optimized
   (as found in Colin Plumbs public domain implementation).  */
/* #define FF(b, c, d) ((b & c) | (~b & d)) */
#define FF(b, c, d) (d ^ (b & (c ^ d)))
#define FG(b, c, d) FF(d, b, c)
#define FH(b, c, d) (b ^ c ^ d)
#define FI(b, c, d) (c ^ (b | ~d))

/* Process LEN bytes of BUFFER, accumulating context into CTX.
   It is assumed that LEN % 64 == 0.  */
void md5_process_block(const void *buffer, size_t len, struct md5_ctx *ctx)
{
  function();
}

/*
 * pageup:   jumplen == -pagelen
 * pagedown: jumplen == pagelen
 * halfup:   jumplen == -pagelen/2
 * halfdown: jumplen == pagelen/2
 */
#define DIRECTION ((neg * 2) + 1)
static void menu_length_jump(MUTTMENU *menu, int jumplen)
{
  function();
}
#undef DIRECTION

void menu_next_page(MUTTMENU *menu)
{
  function();
}

/* msg_fetch_header: import IMAP FETCH response into an IMAP_HEADER.
 *   Expects string beginning with * n FETCH.
 *   Returns:
 *      0 on success
 *     -1 if the string is not a fetch response
 *     -2 if the string is a corrupt fetch response */
static int msg_fetch_header(CONTEXT *ctx, IMAP_HEADER *h, char *buf, FILE *fp)
{
  function();
}

/* imap_read_headers:
 * Changed to read many headers instead of just one. It will return the
 * msgno of the last message read. It will return a value other than
 * msgend if mail comes in while downloading headers (in theory).
 */
int imap_read_headers(IMAP_DATA *idata, int msgbegin, int msgend)
{
  function();
}

/* imap_copy_messages: use server COPY command to copy messages to another
 *   folder.
 *   Return codes:
 *      -1: error
 *       0: success
 *       1: non-fatal error - try fetch/append */
int imap_copy_messages(CONTEXT *ctx, HEADER *h, char *dest, int delete)
{
  function();
}

/* imap_add_keywords: concatenate custom IMAP tags to list, if they
 *   appear in the folder flags list. Why wouldn't they? */
void imap_add_keywords(char *s, HEADER *h, LIST *mailbox_flags, size_t slen)
{
  function();
}

/* imap_set_flags: fill out the message header according to the flags from
 *   the server. Expects a flags line of the form "FLAGS (flag flag ...)" */
char *imap_set_flags(IMAP_DATA *idata, HEADER *h, char *s)
{
  function();
}

/*
 * Returns 1 if the .mh_sequences last modification time is more recent than the last visit to this mailbox
 * Returns 0 if the modification time is older
 * Returns -1 on error
 */
static int mh_sequences_changed(BUFFY *b)
{
  function();
}

/*
 * Returns 1 if the modification time on the message file is older than the last visit to this mailbox
 * Returns 0 if the modtime is newer
 * Returns -1 on error
 */
static int mh_already_notified(BUFFY *b, int msgno)
{
  function();
}

/* Ignore the garbage files.  A valid MH message consists of only
 * digits.  Deleted message get moved to a filename with a comma before
 * it.
 */
static bool mh_valid_message(const char *s)
{
  function();
}

/* Checks new mail for a mh mailbox.
 * check_stats: if true, also count total, new, and flagged messages.
 * Returns 1 if the mailbox has new mail.
 */
int mh_buffy(BUFFY *mailbox, int check_stats)
{
  function();
}

/*
 * Actually parse a maildir message.  This may also be used to fill
 * out a fake header structure generated by lazy maildir parsing.
 */
HEADER *maildir_parse_stream(int magic, FILE *f, const char *fname, int is_old, HEADER *_h)
{
  function();
}

/*
 * Actually parse a maildir message.  This may also be used to fill
 * out a fake header structure generated by lazy maildir parsing.
 */
HEADER *maildir_parse_stream(int magic, FILE *f, const char *fname, int is_old, HEADER *_h)
{
  function();
}

/*
 * Actually parse a maildir message.  This may also be used to fill
 * out a fake header structure generated by lazy maildir parsing.
 */
HEADER *maildir_parse_message(int magic, const char *fname, int is_old, HEADER *h)
{
  function();
}

/*
 * Merge two maildir lists according to the inode numbers.
 */
static struct maildir *maildir_merge_lists(struct maildir *left, struct maildir *right,
                                           int (*cmp)(struct maildir *, struct maildir *))
{
  function();
}

/*
 * Sort maildir list according to inode.
 */
static struct maildir *maildir_sort(struct maildir *list, size_t len,
                                    int (*cmp)(struct maildir *, struct maildir *))
{
  function();
}

/* Sorts mailbox into its natural order.
 * Currently only defined for MH where files are numbered.
 */
static void mh_sort_natural(CONTEXT *ctx, struct maildir **md)
{
  function();
}

/* Read a MH/maildir style mailbox.
 *
 * args:
 *      ctx [IN/OUT]    context for this mailbox
 *      subdir [IN]     NULL for MH mailboxes, otherwise the subdir of the
 *                      maildir mailbox to read from
 */
static int mh_read_dir(CONTEXT *ctx, const char *subdir)
{
  function();
}

/*
 * Open a new (temporary) message in an MH folder.
 */

static int mh_open_new_message(MESSAGE *msg, CONTEXT *dest, HEADER *hdr)
{
  function();
}

/*
 * Open a new (temporary) message in a maildir folder.
 *
 * Note that this uses _almost_ the maildir file name format, but
 * with a {cur,new} prefix.
 *
 */
static int maildir_open_new_message(MESSAGE *msg, CONTEXT *dest, HEADER *hdr)
{
  function();
}

/*
 * Commit a message to a maildir folder.
 *
 * msg->path contains the file name of a file in tmp/. We take the
 * flags from this file's name.
 *
 * ctx is the mail folder we commit to.
 *
 * hdr is a header structure to which we write the message's new
 * file name.  This is used in the mh and maildir folder synch
 * routines.  When this routine is invoked from mx_commit_message,
 * hdr is NULL.
 *
 * msg->path looks like this:
 *
 *    tmp/{cur,new}.mutt-HOSTNAME-PID-COUNTER:flags
 *
 * See also maildir_open_new_message().
 *
 */
static int _maildir_commit_message(CONTEXT *ctx, MESSAGE *msg, HEADER *hdr)
{
  function();
}

/*
 * commit a message to an MH folder.
 *
 */

static int _mh_commit_message(CONTEXT *ctx, MESSAGE *msg, HEADER *hdr, short updseq)
{
  function();
}

/* Sync a message in an MH folder.
 *
 * This code is also used for attachment deletion in maildir
 * folders.
 */
static int mh_rewrite_message(CONTEXT *ctx, int msgno)
{
  function();
}

/* This function handles arrival of new mail and reopening of
 * maildir folders.  The basic idea here is we check to see if either
 * the new or cur subdirectories have changed, and if so, we scan them
 * for the list of files.  We check for newly added messages, and
 * then merge the flags messages we already knew about.  We don't treat
 * either subdirectory differently, as mail could be copied directly into
 * the cur directory from another agent.
 */
static int maildir_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
}

/*
 * This function handles arrival of new mail and reopening of
 * mh/maildir folders. Things are getting rather complex because we
 * don't have a well-defined "mailbox order", so the tricks from
 * mbox.c and mx.c won't work here.
 *
 * Don't change this code unless you _really_ understand what
 * happens.
 *
 */
static int mh_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
}

/*
 * These functions try to find a message in a maildir folder when it
 * has moved under our feet.  Note that this code is rather expensive, but
 * then again, it's called rarely.
 */
static FILE *_maildir_open_find_message(const char *folder, const char *unique,
                                        const char *subfolder, char **newname)
{
  function();
}

/*
 * Returns:
 * 1 if there are no messages in the mailbox
 * 0 if there are messages in the mailbox
 * -1 on error
 */
int maildir_check_empty(const char *path)
{
  function();
}

/*
 * Returns:
 * 1 if there are no messages in the mailbox
 * 0 if there are messages in the mailbox
 * -1 on error
 */
int mh_check_empty(const char *path)
{
  function();
}

/* Note that `a' in the `env->a' expression is macro argument, not
 * "real" name of an `env' compound member.  Real name will be substituted
 * by preprocessor at the macro-expansion time.
 * Note that #a escapes and double quotes the argument.
 */
#define H_TO_INTL(a)                                                           \
  if (mutt_addrlist_to_intl(env->a, err) && !e)                                \
  {                                                                            \
    if (tag)                                                                   \
      *tag = #a;                                                               \
    e = 1;                                                                     \
    err = NULL;                                                                \
  }

/* Modified by blong to accept a "suggestion" for file name.  If
 * that file exists, then construct one with unique name but
 * keep any extension.  This might fail, I guess.
 * Renamed to mutt_adv_mktemp so I only have to change where it's
 * called, and not all possible cases.
 */
void mutt_adv_mktemp(char *s, size_t l)
{
  function();
}

/* Extract the real name from /etc/passwd's GECOS field.
 * When set, honor the regular expression in GecosMask,
 * otherwise assume that the GECOS field is a
 * comma-separated list.
 * Replace "&" by a capitalized version of the user's login
 * name.
 */
char *mutt_gecos_name(char *dest, size_t destlen, struct passwd *pw)
{
  function();
}

/* Note this function uses a fixed size buffer of LONG_STRING and so
 * should only be used for visual modifications, such as disp_subj. */
char *mutt_apply_replace(char *dbuf, size_t dlen, char *sbuf, REPLACE_LIST *rlist)
{
  function();
}

/* This function allows the user to specify a command to read stdout from in
   place of a normal file.  If the last character in the string is a pipe (|),
   then we assume it is a command to run instead of a normal file. */
FILE *mutt_open_read(const char *path, pid_t *thepid)
{
  function();
}

/* set atime to current time, just as read() would do on !noatime.
 * Silently ignored if unsupported. */
void mutt_touch_atime(int f)
{
  function();
}

/* Match a string against the patterns defined by the 'spam' command and output
 * the expanded format into `text` when there is a match.  If textsize<=0, the
 * match is performed but the format is not expanded and no assumptions are made
 * about the value of `text` so it may be NULL.
 *
 * Returns true if the argument `s` matches a pattern in the spam list, otherwise
 * false. */
bool mutt_match_spam_list(const char *s, REPLACE_LIST *l, char *text, int textsize)
{
  function();
}

/*
 * Process an XDG environment variable or its fallback.
 *
 * Return 1 if an entry was found that actually exists on disk and 0 otherwise.
 */
int mutt_set_xdg_path(const XDGType type, char *buf, size_t bufsize)
{
  function();
}

/*
 * Process an XDG environment variable or its fallback.
 *
 * Return 1 if an entry was found that actually exists on disk and 0 otherwise.
 */
int mutt_set_xdg_path(const XDGType type, char *buf, size_t bufsize)
{
  function();
}

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

#include "dummy.h"
/* arbitrary. SASL will probably use a smaller buffer anyway. OTOH it's
 * been a while since I've had access to an SASL server which negotiated
 * a protection buffer. */
#define MUTT_SASL_MAXBUF 65536

#define IP_PORT_BUFLEN 1024

static sasl_callback_t mutt_sasl_callbacks[5];

static sasl_secret_t *secret_ptr = NULL;

/* utility function, stolen from sasl2 sample code */
static int iptostring(const struct sockaddr *addr, socklen_t addrlen, char *out, unsigned outlen)
{
  function();
}

/* mutt_sasl_start: called before doing a SASL exchange - initialises library
 *   (if necessary). */
static int mutt_sasl_start(void)
{
  function();
}

/* mutt_sasl_client_new: wrapper for sasl_client_new which also sets various
 * security properties. If this turns out to be fine for POP too we can
 * probably stop exporting mutt_sasl_get_callbacks(). */
int mutt_sasl_client_new(CONNECTION *conn, sasl_conn_t **saslconn)
{
  function();
}

/* mutt_sasl_conn_open: empty wrapper for underlying open function. We
 *   don't know in advance that a connection will use SASL, so we
 *   replace conn's methods with sasl methods when authentication
 *   is successful, using mutt_sasl_setup_conn */
static int mutt_sasl_conn_open(CONNECTION *conn)
{
  function();
}

/* mutt_sasl_conn_close: calls underlying close function and disposes of
 *   the sasl_conn_t object, then restores connection to pre-sasl state */
static int mutt_sasl_conn_close(CONNECTION *conn)
{
  function();
}

/* poll whether reads would block.
 *   Returns: >0 if there is data to read,
 *            0 if a read would block,
 *            -1 if this connection doesn't support polling */
int mutt_socket_poll(CONNECTION *conn)
{
  function();
}

/* mutt_conn_find: find a connection off the list of connections whose
 *   account matches account. If start is not null, only search for
 *   connections after the given connection (allows higher level socket code
 *   to make more fine-grained searches than account info - eg in IMAP we may
 *   wish to find a connection which is not in IMAP_SELECTED state) */
CONNECTION *mutt_conn_find(const CONNECTION *start, const ACCOUNT *account)
{
  function();
}

/* This is ugly, but as RAND_status came in on OpenSSL version 0.9.5
 * and the code has to support older versions too, this is seemed to
 * be cleaner way compared to having even uglier #ifdefs all around.
 */
#ifdef HAVE_RAND_STATUS
#define HAVE_ENTROPY() (RAND_status() == 1)
#else
static int entropy_byte_count = 0;
/* OpenSSL fills the entropy pool from /dev/urandom if it exists */
#define HAVE_ENTROPY() (!access(DEVRANDOM, R_OK) || entropy_byte_count >= 16)
#endif

/* index for storing hostname as application specific data in SSL structure */
static int HostExDataIndex = -1;

/* Index for storing the "skip mode" state in SSL structure.  When the
 * user skips a certificate in the chain, the stored value will be
 * non-null. */
static int SkipModeExDataIndex = -1;

/* keep a handle on accepted certificates in case we want to
 * open up another connection to the same server in this session */
static STACK_OF(X509) *SslSessionCerts = NULL;

typedef struct
{
  function();
}

/*
 * OpenSSL library needs to be fed with sufficient entropy. On systems
 * with /dev/urandom, this is done transparently by the library itself,
 * on other systems we need to fill the entropy pool ourselves.
 *
 * Even though only OpenSSL 0.9.5 and later will complain about the
 * lack of entropy, we try to our best and fill the pool with older
 * versions also. (That's the reason for the ugly #ifdefs and macros,
 * otherwise I could have simply #ifdef'd the whole ssl_init funcion)
 */
static int ssl_init(void)
{
  function();
}

/* certificate verification callback, called for each certificate in the chain
 * sent by the peer, starting from the root; returning 1 means that the given
 * certificate is trusted, returning 0 immediately aborts the SSL connection */
static int ssl_verify_callback(int preverify_ok, X509_STORE_CTX *ctx)
{
  function();
}

/* ssl_negotiate: After SSL state has been initialized, attempt to negotiate
 *   SSL over the wire, including certificate checks. */
static int ssl_negotiate(CONNECTION *conn, sslsockdata *ssldata)
{
  function();
}

/* mutt_ssl_starttls: Negotiate TLS over an already opened connection.
 *   TODO: Merge this code better with ssl_socket_open. */
int mutt_ssl_starttls(CONNECTION *conn)
{
  function();
}

/*
 * Returns 0 on failure, nonzero on success.
 */
static int tls_check_one_certificate(const gnutls_datum_t *certdata,
                                     gnutls_certificate_status_t certstat,
                                     const char *hostname, int idx, int len)
{
  function();
}

/* parameters:
 * path - file to lock
 * retry - should retry if unable to lock?
 */

#ifdef DL_STANDALONE

static int invoke_dotlock(const char *path, int dummy, int flags, int retry)
{
  function();
}

/* Args:
 *      excl            if excl != 0, request an exclusive lock
 *      dot             if dot != 0, try to dotlock the file
 *      timeout         should retry locking?
 */
int mx_lock_file(const char *path, int fd, int excl, int dot, int timeout)
{
  function();
}

/* try to figure out what type of mailbox ``path'' is
 *
 * return values:
 *      MUTT_*  mailbox type
 *      0       not a mailbox
 *      -1      error
 */

#ifdef USE_IMAP

bool mx_is_imap(const char *p)
{
  function();
}

/*
 * set DefaultMagic to the given value
 */
int mx_set_magic(const char *s)
{
  function();
}

/* mx_access: Wrapper for access, checks permissions on a given mailbox.
 *   We may be interested in using ACL-style flags at some point, currently
 *   we use the normal access() flags. */
int mx_access(const char *path, int flags)
{
  function();
}

/*
 * open a mailbox and parse it
 *
 * Args:
 *      flags   MUTT_NOSORT     do not sort mailbox
 *              MUTT_APPEND     open mailbox for appending
 *              MUTT_READONLY   open mailbox in read-only mode
 *              MUTT_QUIET              only print error messages
 *              MUTT_PEEK               revert atime where applicable
 *      ctx     if non-null, context struct to use
 */
CONTEXT *mx_open_mailbox(const char *path, int flags, CONTEXT *pctx)
{
  function();
}

/* save changes to mailbox
 *
 * return values:
 *      0               success
 *      -1              error
 */
int mx_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
}

/* args:
 *      dest    destination mailbox
 *      hdr     message being copied (required for maildir support, because
 *              the filename depends on the message flags)
 */
MESSAGE *mx_open_new_message(CONTEXT *dest, HEADER *hdr, int flags)
{
  function();
}

/* this routine is called to update the counts in the context structure for
 * the last message header parsed.
 */
void mx_update_context(CONTEXT *ctx, int new_messages)
{
  function();
}

/*
 * Return:
 * 1 if the specified mailbox contains 0 messages.
 * 0 if the mailbox contains messages
 * -1 on error
 */
int mx_check_empty(const char *path)
{
  function();
}

/* Parse .newsrc file:
 *  0 - not changed
 *  1 - parsed
 * -1 - error */
int nntp_newsrc_parse(NNTP_SERVER *nserv)
{
  function();
}

/* %a = account url
 * %p = port
 * %P = port if specified
 * %s = news server name
 * %S = url schema
 * %u = username */
const char *nntp_format_str(char *dest, size_t destlen, size_t col, int cols, char op,
                            const char *src, const char *fmt, const char *ifstring,
                            const char *elsestring, unsigned long data, format_flag flags)
{
  function();
}

/* Automatically loads a newsrc into memory, if necessary.
 * Checks the size/mtime of a newsrc file, if it doesn't match, load
 * again.  Hmm, if a system has broken mtimes, this might mean the file
 * is reloaded every time, which we'd have to fix. */
NNTP_SERVER *nntp_select_server(char *server, int leave_lock)
{
  function();
}

/* Full status flags are not supported by nntp, but we can fake some of them:
 * Read = a read message number is in the .newsrc
 * New = not read and not cached
 * Old = not read but cached */
void nntp_article_status(CONTEXT *ctx, HEADER *hdr, char *group, anum_t anum)
{
  function();
}

/* Get capabilities:
 * -1 - error, connection is closed
 *  0 - mode is reader, capabilities setted up
 *  1 - need to switch to reader mode */
static int nntp_capabilities(NNTP_SERVER *nserv)
{
  function();
}

/* This function calls funct(*line, *data) for each received line,
 * funct(NULL, *data) if rewind(*data) needs, exits when fail or done:
 *  0 - success
 *  1 - bad response (answer in query buffer)
 * -1 - connection lost
 * -2 - error in funct(*line, *data) */
static int nntp_fetch_lines(NNTP_DATA *nntp_data, char *query, size_t qlen,
                            char *msg, int (*funct)(char *, void *), void *data)
{
  function();
}

/* Fetch newsgroups descriptions.
 * Returns the same code as nntp_fetch_lines() */
static int get_description(NNTP_DATA *nntp_data, char *wildmat, char *msg)
{
  function();
}

/* Check newsgroup for new articles:
 *  1 - new articles found
 *  0 - no change
 * -1 - lost connection */
static int nntp_group_poll(NNTP_DATA *nntp_data, int update_stat)
{
  function();
}

/* Check current newsgroup for new articles:
 *  MUTT_REOPENED       - articles have been renumbered or removed from server
 *  MUTT_NEW_MAIL       - new articles found
 *  0           - no change
 * -1           - lost connection */
static int nntp_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
}

/* Check for new groups and new articles in subscribed groups:
 *  1 - new groups found
 *  0 - no new groups
 * -1 - error */
int nntp_check_new_groups(NNTP_SERVER *nserv)
{
  function();
}

/* Fetch article by Message-ID:
 *  0 - success
 *  1 - no such article
 * -1 - error */
int nntp_check_msgid(CONTEXT *ctx, const char *msgid)
{
  function();
}

/*
 * Args:
 *      flags   MUTT_SHOWFLAT, show characters (used for displaying help)
 *              MUTT_SHOWCOLOR, show characters in color
 *                      otherwise don't show characters
 *              MUTT_HIDE, don't show quoted text
 *              MUTT_SEARCH, resolve search patterns
 *              MUTT_TYPES, compute line's type
 *              MUTT_PAGER_NSKIP, keeps leading whitespace
 *              MUTT_PAGER_MARKER, eventually show markers
 *
 * Return values:
 *      -1      EOF was reached
 *      0       normal exit, line was not displayed
 *      >0      normal exit, line was displayed
 */
static int display_line(FILE *f, LOFF_T *last_pos, struct line_t **lineInfo,
                        int n, int *last, int *max, int flags,
                        struct q_class_t **QuoteList, int *q_level, int *force_redraw,
                        regex_t *SearchRE, mutt_window_t *pager_window)
{
  function();
}

/* This pager is actually not so simple as it once was.  It now operates in
   two modes: one for viewing messages and the other for viewing help.  These
   can be distinguished by whether or not ``hdr'' is NULL.  The ``hdr'' arg
   is there so that we can do operations on the current message without the
   need to pop back out to the main-menu.  */
int mutt_pager(const char *banner, const char *fname, int flags, pager_t *extra)
{
  function();
}

/* Reads an arbitrarily long header field, and looks ahead for continuation
 * lines.  ``line'' must point to a dynamically allocated string; it is
 * increased if more space is required to fit the whole line.
 */
char *mutt_read_rfc822_line(FILE *f, char *line, size_t *linelen)
{
  function();
}

/* args:
 *      fp      stream to read from
 *
 *      digest  1 if reading subparts of a multipart/digest, 0
 *              otherwise
 */
BODY *mutt_read_mime_header(FILE *fp, int digest)
{
  function();
}

/* parse a MESSAGE/RFC822 body
 *
 * args:
 *      fp              stream to read from
 *
 *      parent          structure which contains info about the message/rfc822
 *                      body part
 *
 * NOTE: this assumes that `parent->length' has been set!
 */
BODY *mutt_parse_message_rfc822(FILE *fp, BODY *parent)
{
  function();
}

/* parse a multipart structure
 *
 * args:
 *      fp              stream to read from
 *
 *      boundary        body separator
 *
 *      end_off         length of the multipart body (used when the final
 *                      boundary is missing to avoid reading too far)
 *
 *      digest          1 if reading a multipart/digest, 0 otherwise
 */
BODY *mutt_parse_multipart(FILE *fp, const char *boundary, LOFF_T end_off, int digest)
{
  function();
}

/* extract the first substring that looks like a message-id.
 * call back with NULL for more (like strtok).
 */
char *mutt_extract_message_id(const char *s, const char **saveptr)
{
  function();
}

/* mutt_read_rfc822_header() -- parses a RFC822 header
 *
 * Args:
 *
 * f            stream to read from
 *
 * hdr          header structure of current message (optional).
 *
 * user_hdrs    If set, store user headers.  Used for recall-message and
 *              postpone modes.
 *
 * weed         If this parameter is set and the user has activated the
 *              $weed option, honor the header weed list for user headers.
 *              Used for recall-message.
 *
 * Returns:     newly allocated envelope structure.  You should free it by
 *              mutt_free_envelope() when envelope stay unneeded.
 */
ENVELOPE *mutt_read_rfc822_header(FILE *f, HEADER *hdr, short user_hdrs, short weed)
{
  function();
}

/* Ny   years
   Nm   months
   Nw   weeks
   Nd   days */
static const char *get_offset(struct tm *tm, const char *s, int sign)
{
  function();
}

/*
 * Matches subscribed mailing lists
 */
int mutt_is_list_recipient(int alladdr, ADDRESS *a1, ADDRESS *a2)
{
  function();
}

/*
 * Matches known mailing lists
 * The function name may seem a little bit misleading: It checks all
 * recipients in To and Cc for known mailing lists, subscribed or not.
 */
int mutt_is_list_cc(int alladdr, ADDRESS *a1, ADDRESS *a2)
{
  function();
}

/*
 * Matches known mailing lists
 * The function name may seem a little bit misleading: It checks all
 * recipients in To and Cc for known mailing lists, subscribed or not.
 */
int mutt_is_list_cc(int alladdr, ADDRESS *a1, ADDRESS *a2)
{
  function();
}

/* Sets a value in the pattern_cache_t cache entry.
 * Normalizes the "true" value to 2. */
static void set_pattern_cache_value(int *cache_entry, int value)
{
  function();
}

/* Returns 1 if the cache value is set and has a true value.
 * 0 otherwise (even if unset!) */
static int get_pattern_cache_value(int cache_entry)
{
  function();
}

/*
 * flags: MUTT_MATCH_FULL_ADDRESS - match both personal and machine address
 * cache: For repeated matches against the same HEADER, passing in non-NULL will
 *        store some of the cacheable pattern matches in this structure. */
int mutt_pattern_exec(struct pattern_t *pat, pattern_exec_flag flags,
                      CONTEXT *ctx, HEADER *h, pattern_cache_t *cache)
{
  function();
}

/* Grab the longest key identifier available: fingerprint or else
 * the long keyid.
 *
 * The longest available should be used for internally identifying
 * the key and for invoking pgp commands.
 */
char *pgp_fpr_or_lkeyid(pgp_key_t k)
{
  function();
}

/* ----------------------------------------------------------------------------
 * Routines for handing PGP input.
 */

/* Copy PGP output messages and look for signs of a good signature */
static int pgp_copy_checksig(FILE *fpin, FILE *fpout)
{
  function();
}

/* Checks PGP output messages to look for the $pgp_decryption_okay message.
 * This protects against messages with multipart/encrypted headers
 * but which aren't actually encrypted.  See ticket #3770
 */
static int pgp_check_decryption_okay(FILE *fpin)
{
  function();
}

/*
 * Copy a clearsigned message, and strip the signature and PGP's
 * dash-escaping.
 *
 * XXX - charset handling: We assume that it is safe to do
 * character set decoding first, dash decoding second here, while
 * we do it the other way around in the main handler.
 *
 * (Note that we aren't worse than Outlook &c in this, and also
 * note that we can successfully handle anything produced by any
 * existing versions of mutt.)
 */
static void pgp_copy_clearsigned(FILE *fpin, STATE *s, char *charset)
{
  function();
}

/*
 * This handler is passed the application/octet-stream directly.
 * The caller must propagate a->goodsig to its parent.
 */
int pgp_encrypted_handler(BODY *a, STATE *s)
{
  function();
}

/* ----------------------------------------------------------------------------
 * Routines for sending PGP/MIME messages.
 */

BODY *pgp_sign_message(BODY *a)
{
  function();
}

/* This routine attempts to find the keyids of the recipients of a message.
 * It returns NULL if any of the keys can not be found.
 * If oppenc_mode is true, only keys that can be determined without
 * prompting will be used.
 */
char *pgp_find_keys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
}

/* Warning: "a" is no longer freed in this routine, you need
 * to free it later.  This is necessary for $fcc_attach. */
BODY *pgp_encrypt_message(BODY *a, char *keylist, int sign)
{
  function();
}

/*
 * The actual command line formatter.
 */

struct pgp_command_context
{
  function();
}

/*
 * Glue.
 */

static pid_t pgp_invoke(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                        int pgpoutfd, int pgperrfd, short need_passphrase,
                        const char *fname, const char *sig_fname,
                        const char *signas, const char *ids, const char *format)
{
  function();
}

/*
 * The exported interface.
 *
 * This is historic and may be removed at some point.
 *
 */

pid_t pgp_invoke_decode(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                        int pgpoutfd, int pgperrfd, const char *fname, short need_passphrase)
{
  function();
}

/*
 * Format an entry on the PGP key selection menu.
 *
 * %n   number
 * %k   key id          %K      key id of the principal key
 * %u   user id
 * %a   algorithm       %A      algorithm of the princ. key
 * %l   length          %L      length of the princ. key
 * %f   flags           %F      flags of the princ. key
 * %c   capabilities    %C      capabilities of the princ. key
 * %t   trust/validity of the key-uid association
 * %[...] date of key using strftime(3)
 */

typedef struct pgp_entry
{
  function();
}

/* return values:

 * 1 = sign only
 * 2 = encrypt only
 * 3 = both
 */

short pgp_get_abilities(unsigned char type)
{
  function();
}

/*
 * Read header
 * returns:
 *  0 on success
 * -1 - connection lost,
 * -2 - invalid command or execution error,
 * -3 - error writing to tempfile
 */
static int pop_read_header(POP_DATA *pop_data, HEADER *h)
{
  function();
}

/*
 * Get capabilities
 *  0 - successful,
 * -1 - connection lost,
 * -2 - execution error.
*/
static int pop_capabilities(POP_DATA *pop_data, int mode)
{
  function();
}

/*
 * Open connection
 *  0 - successful,
 * -1 - connection lost,
 * -2 - invalid response.
*/
int pop_connect(POP_DATA *pop_data)
{
  function();
}

/*
 * Open connection and authenticate
 *  0 - successful,
 * -1 - connection lost,
 * -2 - invalid command or execution error,
 * -3 - authentication canceled.
*/
int pop_open_connection(POP_DATA *pop_data)
{
  function();
}

/*
 * Send data from buffer and receive answer to the same buffer
 *  0 - successful,
 * -1 - connection lost,
 * -2 - invalid command or execution error.
*/
int pop_query_d(POP_DATA *pop_data, char *buf, size_t buflen, char *msg)
{
  function();
}

/*
 * This function calls  funct(*line, *data)  for each received line,
 * funct(NULL, *data)  if  rewind(*data)  needs, exits when fail or done.
 * Returned codes:
 *  0 - successful,
 * -1 - connection lost,
 * -2 - invalid command or execution error,
 * -3 - error in funct(*line, *data)
 */
int pop_fetch_data(POP_DATA *pop_data, char *query, progress_t *progressbar,
                   int (*funct)(char *, void *), void *data)
{
  function();
}

/* Return the number of postponed messages.
 * if force is 0, use a cached value if it is costly to get a fresh
 * count (IMAP) - else check.
 */
int mutt_num_postponed(int force)
{
  function();
}

/* args:
 *      ctx     Context info, used when recalling a message to which
 *              we reply.
 *      hdr     envelope/attachment info for recalled message
 *      cur     if message was a reply, `cur' is set to the message which
 *              `hdr' is in reply to
 *      fcc     fcc for the recalled message
 *      fcclen  max length of fcc
 *
 * return vals:
 *      -1              error/no messages
 *      0               normal exit
 *      SENDREPLY       recalled message is a reply
 */
int mutt_get_postponed(CONTEXT *ctx, HEADER *hdr, HEADER **cur, char *fcc, size_t fcclen)
{
  function();
}

/* args:
 *     fp      If not NULL, file containing the template
 *     ctx     If fp is NULL, the context containing the header with the template
 *     newhdr  The template is read into this HEADER
 *     hdr     The message to recall/resend
 *     resend  Set if resending (as opposed to recalling a postponed msg).
 *             Resent messages enable header weeding, and also
 *             discard any existing Message-ID and Mail-Followup-To.
 */
int mutt_prepare_template(FILE *fp, CONTEXT *ctx, HEADER *newhdr, HEADER *hdr, short resend)
{
  function();
}

/* %c = character set: convert?
 * %C = character set
 * %D = deleted flag
 * %d = description
 * %e = MIME content-transfer-encoding
 * %F = filename for content-disposition header
 * %f = filename
 * %I = content-disposition, either I (inline) or A (attachment)
 * %t = tagged flag
 * %T = tree chars
 * %m = major MIME type
 * %M = MIME subtype
 * %n = attachment number
 * %s = size
 * %u = unlink
 */
const char *mutt_attach_fmt(char *dest, size_t destlen, size_t col, int cols,
                            char op, const char *src, const char *prefix,
                            const char *ifstring, const char *elsestring,
                            unsigned long data, format_flag flags)
{
  function();
}

/* some helper functions to verify that we are exclusively operating
 * on message/rfc822 attachments
 */
static bool check_msg(BODY *b, bool err)
{
  function();
}

/* count the number of tagged children below a multipart or message
 * attachment.
 */
static short count_tagged_children(ATTACHPTR **idx, short idxlen, short i)
{
  function();
}

/*
 * check whether attachment #i is a parent of the attachment
 * pointed to by cur
 *
 * Note: This and the calling procedure could be optimized quite a
 * bit.  For now, it's not worth the effort.
 */
static bool is_parent(short i, ATTACHPTR **idx, short idxlen, BODY *cur)
{
  function();
}

/* Attach all the body parts which can't be decoded.
 * This code is shared by forwarding and replying. */
static BODY **copy_problematic_attachments(FILE *fp, BODY **last, ATTACHPTR **idx,
                                           short idxlen, short force)
{
  function();
}

/*
 * forward one or several MIME bodies
 * (non-message types)
 */
static void attach_forward_bodies(FILE *fp, HEADER *hdr, ATTACHPTR **idx,
                                  short idxlen, BODY *cur, short nattach, int flags)
{
  function();
}

/*
 * Forward one or several message-type attachments. This
 * is different from the previous function
 * since we want to mimic the index menu's behavior.
 *
 * Code reuse from ci_send_message is not possible here -
 * ci_send_message relies on a context structure to find messages,
 * while, on the attachment menu, messages are referenced through
 * the attachment index.
 */
static void attach_forward_msgs(FILE *fp, HEADER *hdr, ATTACHPTR **idx,
                                short idxlen, BODY *cur, int flags)
{
  function();
}

/*
 * Format an entry for the remailer menu.
 *
 * %n   number
 * %c   capabilities
 * %s   short name
 * %a   address
 *
 */
static const char *mix_entry_fmt(char *dest, size_t destlen, size_t col, int cols,
                                 char op, const char *src, const char *prefix,
                                 const char *ifstring, const char *elsestring,
                                 unsigned long data, format_flag flags)
{
  function();
}

/* The command semantics include the following:
 * %s is the filename that contains the mail body data
 * %t is the content type, like text/plain
 * %{parameter} is replaced by the parameter value from the content-type field
 * \% is %
 * Unsupported rfc1524 parameters: these would probably require some doing
 * by mutt, and can probably just be done by piping the message to metamail
 * %n is the integer number of sub-parts in the multipart
 * %F is "content-type filename" repeated for each sub-part
 *
 * In addition, this function returns a 0 if the command works on a file,
 * and 1 if the command works on a pipe.
 */
int rfc1524_expand_command(BODY *a, char *filename, char *_type, char *command, int clen)
{
  function();
}

/* NUL terminates a rfc 1524 field,
 * returns start of next field or NULL */
static char *get_field(char *s)
{
  function();
}

/*
 * rfc1524_mailcap_lookup attempts to find the given type in the
 * list of mailcap files.  On success, this returns the entry information
 * in *entry, and returns 1.  On failure (not found), returns 0.
 * If entry == NULL just return 1 if the given type is found.
 */
int rfc1524_mailcap_lookup(BODY *a, char *type, rfc1524_entry *entry, int opt)
{
  function();
}

/* This routine will create a _temporary_ filename matching the
 * name template given if this needs to be done.
 *
 * Please note that only the last path element of the
 * template and/or the old file name will be used for the
 * comparison and the temporary file name.
 *
 * Returns 0 if oldfile is fine as is.
 * Returns 1 if newfile specified
 */
static void strnfcpy(char *d, char *s, size_t siz, size_t len)
{
  function();
}

/* If rfc1524_expand_command() is used on a recv'd message, then
 * the filename doesn't exist yet, but if it's used while sending a message,
 * then we need to rename the existing file.
 *
 * This function returns 0 on successful move, 1 on old file doesn't exist,
 * 2 on new file already exists, and 3 on other failure.
 */

/* note on access(2) use: No dangling symlink problems here due to
 * safe_fopen().
 */

int mutt_rename_file(char *oldfile, char *newfile)
{
  function();
}

/*
 * Return 0 if and set *encoder and *wlen if the data (d, dlen) could
 * be converted to an encoded word of length *wlen using *encoder.
 * Otherwise return an upper bound on the maximum length of the data
 * which could be converted.
 * The data is converted from fromcode (which must be stateless) to
 * tocode, unless fromcode is 0, in which case the data is assumed to
 * be already in tocode, which should be 8-bit and stateless.
 */
static size_t try_block(ICONV_CONST char *d, size_t dlen, const char *fromcode,
                        const char *tocode, encoder_t *encoder, size_t *wlen)
{
  function();
}

/*
 * Encode the data (d, dlen) into s using the encoder.
 * Return the length of the encoded word.
 */
static size_t encode_block(char *s, char *d, size_t dlen, const char *fromcode,
                           const char *tocode, encoder_t encoder)
{
  function();
}

/*
 * Discover how much of the data (d, dlen) can be converted into
 * a single encoded word. Return how much data can be converted,
 * and set the length *wlen of the encoded word and *encoder.
 * We start in column col, which limits the length of the word.
 */
static size_t choose_block(char *d, size_t dlen, int col, const char *fromcode,
                           const char *tocode, encoder_t *encoder, size_t *wlen)
{
  function();
}

/*
 * Place the result of RFC-2047-encoding (d, dlen) into the dynamically
 * allocated buffer (e, elen). The input data is in charset fromcode
 * and is converted into a charset chosen from charsets.
 * Return 1 if the conversion to UTF-8 failed, 2 if conversion from UTF-8
 * failed, otherwise 0. If conversion failed, fromcode is assumed to be
 * compatible with us-ascii and the original data is used.
 * The input data is assumed to be a single line starting at column col;
 * if col is non-zero, the preceding character was a space.
 */
static int rfc2047_encode(ICONV_CONST char *d, size_t dlen, int col, const char *fromcode,
                          const char *charsets, char **e, size_t *elen, char *specials)
{
  function();
}

/*
 * Find the start and end of the first encoded word in the string.
 * We use the grammar in section 2 of RFC 2047, but the "encoding"
 * must be B or Q. Also, we don't require the encoded word to be
 * separated by linear-white-space (section 5(1)).
 */
static const char *find_encoded_word(const char *s, const char **x)
{
  function();
}

/* try to decode anything that looks like a valid RFC2047 encoded
 * header field, ignoring RFC822 parsing rules
 */
void rfc2047_decode(char **pd)
{
  function();
}

/* insert parameter into an ordered list.
 *
 * Primary sorting key: attribute
 * Secondary sorting key: index
 */
static void rfc2231_list_insert(struct rfc2231_parameter **list, struct rfc2231_parameter *par)
{
  function();
}

/* Determines whether to add spacing between/after each quote level:
 *    >>>foo
 * becomes
 *    > > > foo
 */
static int space_quotes(STATE *s)
{
  function();
}

/* Determines whether to add a trailing space to quotes:
 *    >>> foo
 * as opposed to
 *    >>>foo
 */
static bool add_quote_suffix(STATE *s, int ql)
{
  function();
}

/* Calculate the paragraph width based upon the current quote level. The start
 * of a quoted line will be ">>> ", so we need to subtract the space required
 * for the prefix from the terminal width. */
static int quote_width(STATE *s, int ql)
{
  function();
}

/*
 * This routine does RfC3676 space stuffing since it's a MUST.
 * Space stuffing means that we have to add leading spaces to
 * certain lines:
 *   - lines starting with a space
 *   - lines starting with 'From '
 * This routine is only called once right after editing the
 * initial message so it's up to the user to take care of stuffing
 * when editing the message several times before actually sending it
 *
 * This is more or less a hack as it replaces the message's content with
 * a freshly created copy in a tempfile and modifies the file's mtime
 * so we don't trigger code paths watching for mtime changes
 */
void rfc3676_space_stuff(HEADER *hdr)
{
  function();
}

/* NOTE: Currently there is no check in configure.ac for vasprintf(3).  the
 * undefined behavior of the error condition makes it difficult to write a safe
 * version using it.
 */

#ifdef HAVE_VASPRINTF
int safe_asprintf(char **strp, const char *fmt, ...)
{
  function();
}
#else
/* Allocate a C-string large enough to contain the formatted string.
 * This is essentially malloc+sprintf in one.
 */
int safe_asprintf(char **strp, const char *fmt, ...)
{
  function();
}
#endif /* HAVE_ASPRINTF */

/**
 * Copyright (C) 1996-2000 Michael R. Elkins <me@mutt.org>
 *
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "dummy.h"
/* remove any address which matches the current user.  if `leave_only' is
 * nonzero, don't remove the user's address if it is the only one in the list
 */
static ADDRESS *remove_user(ADDRESS *a, int leave_only)
{
  function();
}

/* look through the recipients of the message we are replying to, and if
   we find an address that matches $alternates, we use that as the default
   from field */
static ADDRESS *set_reverse_name(ENVELOPE *env)
{
  function();
}

/*
 * Returns 0 if the message was successfully sent
 *        -1 if the message was aborted or an error occurred
 *         1 if the message was postponed
 */
int ci_send_message(int flags,      /* send mode */
                    HEADER *msg,    /* template to use for new message */
                    char *tempfile, /* file specified by -i or -H */
                    CONTEXT *ctx,   /* current mailbox */
                    HEADER *cur)    /* current message */
{
  function();
}

/*
 * Find the best charset conversion of the file from fromcode into one
 * of the tocodes. If successful, set *tocode and CONTENT *info and
 * return the number of characters converted inexactly. If no
 * conversion was possible, return -1.
 *
 * We convert via UTF-8 in order to avoid the condition -1(EINVAL),
 * which would otherwise prevent us from knowing the number of inexact
 * conversions. Where the candidate target charset is UTF-8 we avoid
 * doing the second conversion because iconv_open("UTF-8", "UTF-8")
 * fails with some libraries.
 *
 * We assume that the output from iconv is never more than 4 times as
 * long as the input for any pair of charsets we might be interested
 * in.
 */
static size_t convert_file_to(FILE *file, const char *fromcode, int ncodes,
                              const char **tocodes, int *tocode, CONTENT *info)
{
  function();
}

/*
 * Find the first of the fromcodes that gives a valid conversion and
 * the best charset conversion of the file into one of the tocodes. If
 * successful, set *fromcode and *tocode to dynamically allocated
 * strings, set CONTENT *info, and return the number of characters
 * converted inexactly. If no conversion was possible, return -1.
 *
 * Both fromcodes and tocodes may be colon-separated lists of charsets.
 * However, if fromcode is zero then fromcodes is assumed to be the
 * name of a single charset even if it contains a colon.
 */
static size_t convert_file_from_to(FILE *file, const char *fromcodes, const char *tocodes,
                                   char **fromcode, char **tocode, CONTENT *info)
{
  function();
}

/*
 * Analyze the contents of a file to determine which MIME encoding to use.
 * Also set the body charset, sometimes, or not.
 */
CONTENT *mutt_get_content_info(const char *fname, BODY *b)
{
  function();
}

/* Given a file with path ``s'', see if there is a registered MIME type.
 * returns the major MIME type, and copies the subtype to ``d''.  First look
 * for ~/.mime.types, then look in a system mime.types if we can find one.
 * The longest match is used so that we can match `ps.gz' when `gz' also
 * exists.
 */
int mutt_lookup_mime_type(BODY *att, const char *path)
{
  function();
}

/* wrapper around mutt_write_address() so we can handle very large
   recipient lists without needing a huge temporary buffer in memory */
void mutt_write_address_list(ADDRESS *adr, FILE *fp, int linelen, int display)
{
  function();
}

/* need to write the list in reverse because they are stored in reverse order
 * when parsed to speed up threading
 */
void mutt_write_references(LIST *r, FILE *f, int trim)
{
  function();
}

/* split several headers into individual ones and call write_one_header
 * for each one */
int mutt_write_one_header(FILE *fp, const char *tag, const char *value,
                          const char *pfx, int wraplen, int flags)
{
  function();
}

/* Note: all RFC2047 encoding should be done outside of this routine, except
 * for the "real name."  This will allow this routine to be used more than
 * once, if necessary.
 *
 * Likewise, all IDN processing should happen outside of this routine.
 *
 * mode == 1  => "lite" mode (used for edit_hdrs)
 * mode == 0  => normal mode.  write full header + MIME headers
 * mode == -1 => write just the envelope info (used for postponing messages)
 *
 * privacy != 0 => will omit any headers which may identify the user.
 *               Output generated is suitable for being sent through
 *               anonymous remailer chains.
 *
 */

int mutt_write_rfc822_header(FILE *fp, ENVELOPE *env, BODY *attach, int mode, int privacy)
{
  function();
}

/* invoke sendmail in a subshell
   path (in)            path to program to execute
   args (in)            arguments to pass to program
   msg (in)             temp file containing message to send
   tempfile (out)       if sendmail is put in the background, this points
                        to the temporary file containing the stdout of the
                        child process. If it is NULL, stderr and stdout
                        are not redirected. */
static int send_msg(const char *path, char **args, const char *msg, char **tempfile)
{
  function();
}

/*
 *     Queries and passphrase handling.
 */

/* these are copies from pgp.c */

void smime_void_passphrase(void)
{
  function();
}

/*
 *     The OpenSSL interface
 */

/* This is almost identical to ppgp's invoking interface. */
static const char *_mutt_fmt_smime_command(char *dest, size_t destlen, size_t col,
                                           int cols, char op, const char *src,
                                           const char *prefix, const char *ifstring,
                                           const char *elsestring,
                                           unsigned long data, format_flag flags)
{
  function();
}

/*
 *    Key and certificate handling.
 */

static char *smime_key_flags(int flags)
{
  function();
}

/* Returns the first matching key record, without prompting or checking of
 * abilities or trust.
 */
static smime_key_t *smime_get_key_by_hash(char *hash, short public)
{
  function();
}

/*
   This sets the '*ToUse' variables for an upcoming decryption, where
   the required key is different from SmimeDefaultKey.
*/
static void _smime_getkeys(char *mailbox)
{
  function();
}

/* This routine attempts to find the keyids of the recipients of a message.
 * It returns NULL if any of the keys can not be found.
 * If oppenc_mode is true, only keys that can be determined without
 * prompting will be used.
 */
char *smime_find_keys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
}

/*
 *    Creating S/MIME - bodies.
 */

static pid_t smime_invoke_encrypt(FILE **smimein, FILE **smimeout, FILE **smimeerr,
                                  int smimeinfd, int smimeoutfd, int smimeerrfd,
                                  const char *fname, const char *uids)
{
  function();
}

/* The openssl -md doesn't want hyphens:
 *   md5, sha1,  sha224,  sha256,  sha384,  sha512
 * However, the micalg does:
 *   md5, sha-1, sha-224, sha-256, sha-384, sha-512
 */
static char *openssl_md_to_smime_micalg(char *md)
{
  function();
}

/*
 *    Handling S/MIME - bodies.
 */

static pid_t smime_invoke_verify(FILE **smimein, FILE **smimeout, FILE **smimeerr,
                                 int smimeinfd, int smimeoutfd, int smimeerrfd,
                                 const char *fname, const char *sig_fname, int opaque)
{
  function();
}

/*
  This handles application/pkcs7-mime which can either be a signed
  or an encrypted message.
*/
static BODY *smime_handle_entity(BODY *m, STATE *s, FILE *outFile)
{
  function();
}

/* Reads a command response from the SMTP server.
 * Returns:
 * 0    on success (2xx code) or continue (354 code)
 * -1   write error, or any other response code
 */
static int smtp_get_resp(CONNECTION *conn)
{
  function();
}

/* Returns true if a contains at least one 8-bit character, false if none do.
 */
static bool address_uses_unicode(const char *a)
{
  function();
}

/* Returns 1 if any address in a contains at least one 8-bit
 * character, 0 if none do.
 */
static bool addresses_use_unicode(const ADDRESS *a)
{
  function();
}

/* %b = number of incoming folders with unread messages [option]
 * %d = number of deleted messages [option]
 * %f = full mailbox path
 * %F = number of flagged messages [option]
 * %h = hostname
 * %l = length of mailbox (in bytes) [option]
 * %m = total number of messages [option]
 * %M = number of messages shown (virtual message count when limiting) [option]
 * %n = number of new messages [option]
 * %o = number of old unread messages [option]
 * %p = number of postponed messages [option]
 * %P = percent of way through index
 * %r = readonly/wontwrite/changed flag
 * %s = current sorting method ($sort)
 * %S = current aux sorting method ($sort_aux)
 * %t = # of tagged messages [option]
 * %u = number of unread messages [option]
 * %v = Mutt version
 * %V = currently active limit pattern [option] */
static const char *status_format_str(char *buf, size_t buflen, size_t col, int cols,
                                     char op, const char *src, const char *prefix,
                                     const char *ifstring, const char *elsestring,
                                     unsigned long data, format_flag flags)
{
  function();
}

/* this calculates whether a node is the root of a subtree that has visible
 * nodes, whether a node itself is visible, whether, if invisible, it has
 * depth anyway, and whether any of its later siblings are roots of visible
 * subtrees.  while it's at it, it frees the old thread display, so we can
 * skip parts of the tree in mutt_draw_tree() if we've decided here that we
 * don't care about them any more.
 */
static void calculate_visibility(CONTEXT *ctx, int *max_depth)
{
  function();
}

/* Since the graphics characters have a value >255, I have to resort to
 * using escape sequences to pass the information to print_enriched_string().
 * These are the macros MUTT_TREE_* defined in mutt.h.
 *
 * ncurses should automatically use the default ASCII characters instead of
 * graphics chars on terminals which don't support them (see the man page
 * for curs_addch).
 */
void mutt_draw_tree(CONTEXT *ctx)
{
  function();
}

/* since we may be trying to attach as a pseudo-thread a THREAD that
 * has no message, we have to make a list of all the subjects of its
 * most immediate existing descendants.  we also note the earliest
 * date on any of the parents and put it in *dateptr. */
static LIST *make_subject_list(THREAD *cur, time_t *dateptr)
{
  function();
}

/* find the best possible match for a parent message based upon subject.
 * if there are multiple matches, the one which was sent the latest, but
 * before the current message, is used.
 */
static THREAD *find_subject(CONTEXT *ctx, THREAD *cur)
{
  function();
}

/* remove cur and its descendants from their current location.
 * also make sure ancestors of cur no longer are sorted by the
 * fact that cur is their descendant. */
static void unlink_message(THREAD **old, THREAD *cur)
{
  function();
}

/* dir => true when moving forward, false when moving in reverse
 * subthreads => false when moving to next thread, true when moving to next subthread
 */
int _mutt_aside_thread(HEADER *hdr, short dir, short subthreads)
{
  function();
}

/* if flag is 0, we want to know how many messages
 * are in the thread.  if flag is 1, we want to know
 * our position in the thread. */
int mutt_messages_in_thread(CONTEXT *ctx, HEADER *hdr, int flag)
{
  function();
}

/* ciss_parse_userhost: fill in components of ciss with info from src. Note
 *   these are pointers into src, which is altered with '\0's. Port of 0
 *   means no port given. */
static int ciss_parse_userhost(ciss_url_t *ciss, char *src)
{
  function();
}

/* url_parse_ciss: Fill in ciss_url_t. char* elements are pointers into src,
 *   which is modified by this call (duplicate it first if you need to). */
int url_parse_ciss(ciss_url_t *ciss, char *src)
{
  function();
}

/*
 * Convert the data (u8,u8len) from UTF-8 to RFC 2060's UTF-7.
 * The result is null-terminated and returned, and also stored
 * in (*u7,*u7len) if u7 or u7len is non-zero.
 * Unicode characters above U+FFFF are replaced by U+FFFE.
 * If input data is invalid, return 0 and don't store anything.
 */
static char *utf8_to_utf7(const char *u8, size_t u8len, char **u7, size_t *u7len)
{
  function();
}

/* imap_expand_path: IMAP implementation of mutt_expand_path. Rewrite
 *   an IMAP path in canonical and absolute form.
 * Inputs: a buffer containing an IMAP path, and the number of bytes in
 *   that buffer.
 * Outputs: The buffer is rewritten in place with the canonical IMAP path.
 * Returns 0 on success, or -1 if imap_parse_path chokes or url_ciss_tostring
 *   fails, which it might if there isn't enough room in the buffer. */
int imap_expand_path(char *path, size_t len)
{
  function();
}

/* Public function
 *
 * Provided an imap mbox name and a delimiter, returns the mbox parent
 * name.
 *
 * Could be static with a prototype in imap_private.h, but could be useful
 * as a public function.
 */
void imap_get_parent(char *output, const char *mbox, size_t olen, char delim)
{
  function();
}

/* Public function
 * Provided an imap path, returns in output the parent directory if
 * existent. Else returns the same path.
 */
void imap_get_parent_path(char *output, const char *path, size_t olen)
{
  function();
}

/* Public function
 *
 * Cleans an IMAP path using imap_fix_path. Does it in place.
 */
void imap_clean_path(char *path, size_t plen)
{
  function();
}

/* imap_pretty_mailbox: called by mutt_pretty_mailbox to make IMAP paths
 *   look nice. */
void imap_pretty_mailbox(char *path)
{
  function();
}

/* imap_continue: display a message and ask the user if she wants to
 *   go on. */
int imap_continue(const char *msg, const char *resp)
{
  function();
}

/* imap_new_idata: Allocate and initialise a new IMAP_DATA structure.
 *   Returns NULL on failure (no mem) */
IMAP_DATA *imap_new_idata(void)
{
  function();
}

/*
 * Fix up the imap path.  This is necessary because the rest of mutt
 * assumes a hierarchy delimiter of '/', which is not necessarily true
 * in IMAP.  Additionally, the filesystem converts multiple hierarchy
 * delimiters into a single one, ie "///" is equal to "/".  IMAP servers
 * are not required to do this.
 * Moreover, IMAP servers may dislike the path ending with the delimiter.
 */
char *imap_fix_path(IMAP_DATA *idata, const char *mailbox, char *path, size_t plen)
{
  function();
}

/* imap_get_literal_count: write number of bytes in an IMAP literal into
 *   bytes, return 0 on success, -1 on failure. */
int imap_get_literal_count(const char *buf, long *bytes)
{
  function();
}

/* imap_get_qualifier: in a tagged response, skip tag and status for
 *   the qualifier message. Used by imap_copy_message for TRYCREATE */
char *imap_get_qualifier(char *buf)
{
  function();
}

/* format date in IMAP style: DD-MMM-YYYY HH:MM:SS +ZZzz.
 * Caller should provide a buffer of IMAP_DATELEN bytes */
void imap_make_date(char *buf, time_t timestamp)
{
  function();
}

/* imap_qualify_path: make an absolute IMAP folder target, given IMAP_MBOX
 *   and relative path. */
void imap_qualify_path(char *dest, size_t len, IMAP_MBOX *mx, char *path)
{
  function();
}

/* imap_quote_string: quote string according to IMAP rules:
 *   surround string with quotes, escape " and \ with \ */
void imap_quote_string(char *dest, size_t dlen, const char *src)
{
  function();
}

/*
 * Quoting and UTF-7 conversion
 */
void imap_munge_mbox_name(IMAP_DATA *idata, char *dest, size_t dlen, const char *src)
{
  function();
}

/*
 * Imap keepalive: poll the current folder to keep the
 * connection alive.
 *
 */

static void alrm_handler(int sig)
{
  function();
}

/* #include "dummy.h"
const char *mutt_make_version(void);
void mutt_print_patchlist(void);
/* #include "dummy.h"
const char *mutt_hcache_backend_list(void);

const int SCREEN_WIDTH = 80;

extern unsigned char cc_version[];
extern unsigned char cc_cflags[];
extern unsigned char configure_options[];

static const char *Copyright =
    N_("Copyright (C) 1996-2016 Michael R. Elkins <me@mutt.org>\n"
       "Copyright (C) 1996-2002 Brandon Long <blong@fiction.net>\n"
       "Copyright (C) 1997-2009 Thomas Roessler <roessler@does-not-exist.org>\n"
       "Copyright (C) 1998-2005 Werner Koch <wk@isil.d.shuttle.de>\n"
       "Copyright (C) 1999-2014 Brendan Cully <brendan@kublai.com>\n"
       "Copyright (C) 1999-2002 Tommi Komulainen <Tommi.Komulainen@iki.fi>\n"
       "Copyright (C) 2000-2004 Edmund Grimley Evans <edmundo@rano.org>\n"
       "Copyright (C) 2006-2009 Rocco Rutte <pdmef@gmx.net>\n"
       "Copyright (C) 2014-2016 Kevin J. McCarthy <kevin@8t8.us>\n"
       "Copyright (C) 2015-2017 Richard Russon <rich@flatcap.org>\n"
       "\n"
       "Many others not mentioned here contributed code, fixes,\n"
       "and suggestions.\n");

static const char *License = N_(
    "    This program is free software; you can redistribute it and/or modify\n"
    "    it under the terms of the GNU General Public License as published by\n"
    "    the Free Software Foundation; either version 2 of the License, or\n"
    "    (at your option) any later version.\n"
    "\n"
    "    This program is distributed in the hope that it will be useful,\n"
    "    but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
    "    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
    "    GNU General Public License for more details.\n");

static const char *Obtaining =
    N_("    You should have received a copy of the GNU General Public License\n"
       "    along with this program; if not, write to the Free Software\n"
       "    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  "
       "02110-1301, USA.\n");

static const char *ReachingUs =
    N_("To learn more about NeoMutt, visit: http://www.neomutt.org/\n"
       "If you find a bug in NeoMutt, please raise an issue at:\n"
       "    https://github.com/neomutt/neomutt/issues\n"
       "or send an email to: <neomutt-devel@neomutt.org>\n");

static const char *Notice =
    N_("Copyright (C) 1996-2016 Michael R. Elkins and others.\n"
       "Mutt comes with ABSOLUTELY NO WARRANTY; for details type `mutt -vv'.\n"
       "Mutt is free software, and you are welcome to redistribute it\n"
       "under certain conditions; type `mutt -vv' for details.\n");

struct compile_options
{
  function();
}

/* The following two functions define the column width of an ISO 10646
 * character as follows:
 *
 *    - The null character (U+0000) has a column width of 0.
 *
 *    - Other C0/C1 control characters and DEL will lead to a return
 *      value of -1.
 *
 *    - Non-spacing and enclosing combining characters (general
 *      category code Mn or Me in the Unicode database) have a
 *      column width of 0.
 *
 *    - SOFT HYPHEN (U+00AD) has a column width of 1.
 *
 *    - Other format characters (general category code Cf in the Unicode
 *      database) and ZERO WIDTH SPACE (U+200B) have a column width of 0.
 *
 *    - Hangul Jamo medial vowels and final consonants (U+1160-U+11FF)
 *      have a column width of 0.
 *
 *    - Spacing characters in the East Asian Wide (W) or East Asian
 *      Full-width (F) category as defined in Unicode Technical
 *      Report #11 have a column width of 2.
 *
 *    - All remaining characters (including all printable
 *      ISO 8859-1 and WGL4 characters, Unicode control characters,
 *      etc.) have a column width of 1.
 *
 * This implementation assumes that wchar_t characters are encoded
 * in ISO 10646.
 */

int wcwidth_ucs(wchar_t ucs)
{
  function();
}

