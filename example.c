
int mutt_account_match(const ACCOUNT *a1, const ACCOUNT *a2)
{
  function();
  another();
}

int mutt_account_fromurl(ACCOUNT *account, ciss_url_t *url)
{
  function();
  another();
}

void mutt_account_tourl(ACCOUNT *account, ciss_url_t *url)
{
  function();
  another();
}

int mutt_account_getuser(ACCOUNT *account)
{
  function();
  another();
}

int mutt_account_getlogin(ACCOUNT *account)
{
  function();
  another();
}

int mutt_account_getpass(ACCOUNT *account)
{
  function();
  another();
}

void mutt_account_unsetpass(ACCOUNT *account)
{
  function();
  another();
}

static const char *alias_format_str(char *dest, size_t destlen, size_t col, int cols,
                                    char op, const char *src, const char *fmt,
                                    const char *ifstring, const char *elsestring,
                                    unsigned long data, format_flag flags)
{
  function();
  another();
}

static void alias_entry(char *s, size_t slen, MUTTMENU *m, int num)
{
  function();
  another();
}

static int alias_tag(MUTTMENU *menu, int n, int m)
{
  function();
  another();
}

static int alias_sort_alias(const void *a, const void *b)
{
  function();
  another();
}

static int alias_sort_address(const void *a, const void *b)
{
  function();
  another();
}

void mutt_alias_menu(char *buf, size_t buflen, ALIAS *aliases)
{
  function();
  another();
}

static ADDRESS *expand_aliases_r(ADDRESS *a, LIST **expn)
{
  function();
  another();
}

void mutt_expand_aliases_env(ENVELOPE *env)
{
  function();
  another();
}

static void write_safe_address(FILE *fp, char *s)
{
  function();
  another();
}

static void recode_buf(char *buf, size_t buflen)
{
  function();
  another();
}

void mutt_create_alias(ENVELOPE *cur, ADDRESS *iadr)
{
  function();
  another();
}

int mutt_check_alias_name(const char *s, char *dest, size_t destlen)
{
  function();
  another();
}

void mutt_alias_add_reverse(ALIAS *t)
{
  function();
  another();
}

void mutt_alias_delete_reverse(ALIAS *t)
{
  function();
  another();
}

int mutt_alias_complete(char *s, size_t buflen)
{
  function();
  another();
}

static bool string_is_address(const char *str, const char *u, const char *d)
{
  function();
  another();
}

bool mutt_addr_is_user(ADDRESS *addr)
{
  function();
  another();
}

int ascii_strcasecmp(const char *a, const char *b)
{
  function();
  another();
}

int ascii_strncasecmp(const char *a, const char *b, int n)
{
  function();
  another();
}

int mutt_get_tmp_attachment(BODY *a)
{
  function();
  another();
}

int mutt_compose_attachment(BODY *a)
{
  function();
  another();
}

int mutt_edit_attachment(BODY *a)
{
  function();
  another();
}

void mutt_check_lookup_list(BODY *b, char *type, int len)
{
  function();
  another();
}

int mutt_view_attachment(FILE *fp, BODY *a, int flag, HEADER *hdr, ATTACHPTR **idx, short idxlen)
{
  function();
  another();
}

int mutt_pipe_attachment(FILE *fp, BODY *b, const char *path, char *outfile)
{
  function();
  another();
}

static FILE *save_attachment_open(char *path, int flags)
{
  function();
  another();
}

int mutt_save_attachment(FILE *fp, BODY *m, char *path, int flags, HEADER *hdr)
{
  function();
  another();
}

int mutt_decode_save_attachment(FILE *fp, BODY *m, char *path, int displaying, int flags)
{
  function();
  another();
}

int mutt_print_attachment(FILE *fp, BODY *a)
{
  function();
  another();
}

size_t mutt_to_base64(char *out, const char *cin, size_t len, size_t olen)
{
  function();
  another();
}

int mutt_from_base64(char *out, const char *in)
{
  function();
  another();
}

static int bcache_path(ACCOUNT *account, const char *mailbox, char *dst, size_t dstlen)
{
  function();
  another();
}

body_cache_t *mutt_bcache_open(ACCOUNT *account, const char *mailbox)
{
  function();
  another();
}

void mutt_bcache_close(body_cache_t **bcache)
{
  function();
  another();
}

int mutt_bcache_commit(body_cache_t *bcache, const char *id)
{
  function();
  another();
}

static int mutt_bcache_move(body_cache_t *bcache, const char *id, const char *newid)
{
  function();
  another();
}

int mutt_bcache_del(body_cache_t *bcache, const char *id)
{
  function();
  another();
}

int mutt_bcache_exists(body_cache_t *bcache, const char *id)
{
  function();
  another();
}

int mutt_bcache_list(body_cache_t *bcache,
                     int (*want_id)(const char *id, body_cache_t *bcache, void *data),
                     void *data)
{
  function();
  another();
}

static void destroy_state(struct browser_state *state)
{
  function();
  another();
}

static int browser_compare_subject(const void *a, const void *b)
{
  function();
  another();
}

static int browser_compare_desc(const void *a, const void *b)
{
  function();
  another();
}

static int browser_compare_date(const void *a, const void *b)
{
  function();
  another();
}

static int browser_compare_size(const void *a, const void *b)
{
  function();
  another();
}

static int browser_compare_count(const void *a, const void *b)
{
  function();
  another();
}

static int browser_compare_count_new(const void *a, const void *b)
{
  function();
  another();
}

static int browser_compare(const void *a, const void *b)
{
  function();
  another();
}

static void browser_sort(struct browser_state *state)
{
  function();
  another();
}

static int link_is_dir(const char *folder, const char *path)
{
  function();
  another();
}

static const char *folder_format_str(char *dest, size_t destlen, size_t col, int cols,
                                     char op, const char *src, const char *fmt,
                                     const char *ifstring, const char *elsestring,
                                     unsigned long data, format_flag flags)
{
  function();
  another();
}

static const char *newsgroup_format_str(char *dest, size_t destlen, size_t col, int cols,
                                        char op, const char *src, const char *fmt,
                                        const char *ifstring, const char *elsestring,
                                        unsigned long data, format_flag flags)
{
  function();
  another();
}

static void add_folder(MUTTMENU *m, struct browser_state *state, const char *name,
                       const char *desc, const struct stat *s, BUFFY *b, void *data)
{
  function();
  another();
}

static void init_state(struct browser_state *state, MUTTMENU *menu)
{
  function();
  another();
}

static int examine_directory(MUTTMENU *menu, struct browser_state *state,
                             char *d, const char *prefix)
{
  function();
  another();
}

static int examine_vfolders(MUTTMENU *menu, struct browser_state *state)
{
  function();
  another();
}

static int examine_mailboxes(MUTTMENU *menu, struct browser_state *state)
{
  function();
  another();
}

static int select_file_search(MUTTMENU *menu, regex_t *re, int n)
{
  function();
  another();
}

static int select_vfolder_search(MUTTMENU *menu, regex_t *re, int n)
{
  function();
  another();
}

static void folder_entry(char *s, size_t slen, MUTTMENU *menu, int num)
{
  function();
  another();
}

static void vfolder_entry(char *s, size_t slen, MUTTMENU *menu, int num)
{
  function();
  another();
}

static void browser_highlight_default(struct browser_state *state, MUTTMENU *menu)
{
  function();
  another();
}

static void init_menu(struct browser_state *state, MUTTMENU *menu, char *title,
                      size_t titlelen, int buffy)
{
  function();
  another();
}

static int file_tag(MUTTMENU *menu, int n, int m)
{
  function();
  another();
}

void mutt_browser_select_dir(char *f)
{
  function();
  another();
}

void _mutt_select_file(char *f, size_t flen, int flags, char ***files, int *numfiles)
{
  function();
  another();
}

void mutt_buffer_free(BUFFER **p)
{
  function();
  another();
}

int mutt_buffer_printf(BUFFER *buf, const char *fmt, ...)
{
  function();
  another();
}

static void mutt_buffer_add(BUFFER *buf, const char *s, size_t len)
{
  function();
  another();
}

void mutt_buffer_addstr(BUFFER *buf, const char *s)
{
  function();
  another();
}

void mutt_buffer_addch(BUFFER *buf, char c)
{
  function();
  another();
}

int mutt_extract_token(BUFFER *dest, BUFFER *tok, int flags)
{
  function();
  another();
}

static int fseek_last_message(FILE *f)
{
  function();
  another();
}

static int test_last_status_new(FILE *f)
{
  function();
  another();
}

static int test_new_folder(const char *path)
{
  function();
  another();
}

static BUFFY *buffy_new(const char *path)
{
  function();
  another();
}

static void buffy_free(BUFFY **mailbox)
{
  function();
  another();
}

static int buffy_maildir_check_dir(BUFFY *mailbox, const char *dir_name,
                                   int check_new, int check_stats)
{
  function();
  another();
}

static int buffy_maildir_check(BUFFY *mailbox, int check_stats)
{
  function();
  another();
}

static int buffy_mbox_check(BUFFY *mailbox, struct stat *sb, int check_stats)
{
  function();
  another();
}

static void buffy_check(BUFFY *tmp, struct stat *contex_sb, int check_stats)
{
  function();
  another();
}

static BUFFY *buffy_get(const char *path)
{
  function();
  another();
}

void mutt_buffy_cleanup(const char *buf, struct stat *st)
{
  function();
  another();
}

void mutt_update_mailbox(BUFFY *b)
{
  function();
  another();
}

int mutt_parse_mailboxes(BUFFER *path, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_parse_virtual_mailboxes(BUFFER *path, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_parse_unvirtual_mailboxes(BUFFER *path, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_buffy_check(int force)
{
  function();
  another();
}

int mutt_buffy_list(void)
{
  function();
  another();
}

void mutt_buffy_setnotified(const char *path)
{
  function();
  another();
}

int mutt_buffy_notify(void)
{
  function();
  another();
}

void mutt_buffy(char *s, size_t slen)
{
  function();
  another();
}

void mutt_buffy_vfolder(char *s, size_t slen)
{
  function();
  another();
}

void mutt_set_langinfo_charset(void)
{
  function();
  another();
}

void mutt_set_langinfo_charset(void)
{
  function();
  another();
}

void mutt_canonical_charset(char *dest, size_t dlen, const char *name)
{
  function();
  another();
}

int mutt_chscmp(const char *s, const char *chs)
{
  function();
  another();
}

char *mutt_get_default_charset(void)
{
  function();
  another();
}

iconv_t mutt_iconv_open(const char *tocode, const char *fromcode, int flags)
{
  function();
  another();
}

size_t mutt_iconv(iconv_t cd, ICONV_CONST char **inbuf, size_t *inbytesleft,
                  char **outbuf, size_t *outbytesleft,
                  ICONV_CONST char **inrepls, const char *outrepl)
{
  function();
  another();
}

int mutt_convert_string(char **ps, const char *from, const char *to, int flags)
{
  function();
  another();
}

char *fgetconvs(char *buf, size_t l, FGETCONV *_fc)
{
  function();
  another();
}

int fgetconv(FGETCONV *_fc)
{
  function();
  another();
}

void fgetconv_close(FGETCONV **_fc)
{
  function();
  another();
}

bool mutt_check_charset(const char *s, bool strict)
{
  function();
  another();
}

static COLOR_LINE *new_color_line(void)
{
  function();
  another();
}

static void free_color_line(COLOR_LINE **l, int free_colors)
{
  function();
  another();
}

void ci_start_color(void)
{
  function();
  another();
}

static char *get_color_name(char *dest, size_t destlen, int val)
{
  function();
  another();
}

int mutt_alloc_color(int fg, int bg)
{
  function();
  another();
}

void mutt_free_color(int fg, int bg)
{
  function();
  another();
}

static int parse_color_name(const char *s, int *col, int *attr, int is_fg, BUFFER *err)
{
  function();
  another();
}

static void do_uncolor(BUFFER *buf, BUFFER *s, COLOR_LINE **cl, int *do_cache, int parse_uncolor)
{
  function();
  another();
}

static int _mutt_parse_uncolor(BUFFER *buf, BUFFER *s, unsigned long data,
                               BUFFER *err, short parse_uncolor)
{
  function();
  another();
}

int mutt_parse_uncolor(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_parse_unmono(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int add_pattern(COLOR_LINE **top, const char *s, int sensitive, int fg,
                       int bg, int attr, BUFFER *err, int is_index, int match)
{
  function();
  another();
}

static int parse_object(BUFFER *buf, BUFFER *s, int *o, int *ql, BUFFER *err)
{
  function();
  another();
}

static int parse_color_pair(BUFFER *buf, BUFFER *s, int *fg, int *bg, int *attr, BUFFER *err)
{
  function();
  another();
}

static int parse_attr_spec(BUFFER *buf, BUFFER *s, int *fg, int *bg, int *attr, BUFFER *err)
{
  function();
  another();
}

static int fgbgattr_to_color(int fg, int bg, int attr)
{
  function();
  another();
}

static int _mutt_parse_color(BUFFER *buf, BUFFER *s, BUFFER *err,
                             parser_callback_t callback, short dry_run)
{
  function();
  another();
}

int mutt_parse_color(BUFFER *buff, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_parse_mono(BUFFER *buff, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_display_message(HEADER *cur)
{
  function();
  another();
}

void ci_bounce_message(HEADER *h)
{
  function();
  another();
}

static void pipe_set_flags(int decode, int print, int *cmflags, int *chflags)
{
  function();
  another();
}

static void pipe_msg(HEADER *h, FILE *fp, int decode, int print)
{
  function();
  another();
}

static int _mutt_pipe_message(HEADER *h, char *cmd, int decode, int print,
                              int split, char *sep)
{
  function();
  another();
}

void mutt_pipe_message(HEADER *h)
{
  function();
  another();
}

void mutt_print_message(HEADER *h)
{
  function();
  another();
}

int mutt_select_sort(int reverse)
{
  function();
  another();
}

void mutt_shell_escape(void)
{
  function();
  another();
}

void mutt_enter_command(void)
{
  function();
  another();
}

void mutt_display_address(ENVELOPE *env)
{
  function();
  another();
}

static void set_copy_flags(HEADER *hdr, int decode, int decrypt, int *cmflags, int *chflags)
{
  function();
  another();
}

int _mutt_save_message(HEADER *h, CONTEXT *ctx, int delete, int decode, int decrypt)
{
  function();
  another();
}

int mutt_save_message(HEADER *h, int delete, int decode, int decrypt)
{
  function();
  another();
}

void mutt_version(void)
{
  function();
  another();
}

void mutt_edit_content_type(HEADER *h, BODY *b, FILE *fp)
{
  function();
  another();
}

static int _mutt_check_traditional_pgp(HEADER *h, int *redraw)
{
  function();
  another();
}

int mutt_check_traditional_pgp(HEADER *h, int *redraw)
{
  function();
  another();
}

int mutt_complete(char *s, size_t slen)
{
  function();
  another();
}

static void snd_entry(char *b, size_t blen, MUTTMENU *menu, int num)
{
  function();
  another();
}

static void redraw_crypt_lines(HEADER *msg)
{
  function();
  another();
}

static void redraw_mix_line(LIST *chain)
{
  function();
  another();
}

static int check_attachments(ATTACHPTR **idx, short idxlen)
{
  function();
  another();
}

static void draw_envelope_addr(int line, ADDRESS *addr)
{
  function();
  another();
}

static void draw_envelope(HEADER *msg, char *fcc)
{
  function();
  another();
}

static void edit_address_list(int line, ADDRESS **addr)
{
  function();
  another();
}

static int delete_attachment(MUTTMENU *menu, short *idxlen, int x)
{
  function();
  another();
}

static void update_idx(MUTTMENU *menu, ATTACHPTR **idx, short idxlen)
{
  function();
  another();
}

static void compose_menu_redraw(MUTTMENU *menu)
{
  function();
  another();
}

static void compose_menu_redraw(MUTTMENU *menu)
{
  function();
  another();
}

static unsigned long cum_attachs_size(MUTTMENU *menu)
{
  function();
  another();
}

static const char *compose_format_str(char *buf, size_t buflen, size_t col, int cols,
                                      char op, const char *src, const char *prefix,
                                      const char *ifstring, const char *elsestring,
                                      unsigned long data, format_flag flags)
{
  function();
  another();
}

static void compose_status_line(char *buf, size_t buflen, size_t col, int cols,
                                MUTTMENU *menu, const char *p)
{
  function();
  another();
}

int mutt_compose_menu(HEADER *msg, /* structure for new message */
                      char *fcc,   /* where to save a copy of the message */
                      size_t fcclen, HEADER *cur, /* current message */
                      int flags)
{
  function();
  another();
}

static int lock_realpath(CONTEXT *ctx, int excl)
{
  function();
  another();
}

static void unlock_realpath(CONTEXT *ctx)
{
  function();
  another();
}

static int setup_paths(CONTEXT *ctx)
{
  function();
  another();
}

static int get_size(const char *path)
{
  function();
  another();
}

static void store_size(const CONTEXT *ctx)
{
  function();
  another();
}

static const char *find_hook(int type, const char *path)
{
  function();
  another();
}

static COMPRESS_INFO *set_compress_info(CONTEXT *ctx)
{
  function();
  another();
}

static void free_compress_info(CONTEXT *ctx)
{
  function();
  another();
}

static char *escape_path(char *src)
{
  function();
  another();
}

static const char *cb_format_str(char *dest, size_t destlen, size_t col, int cols,
                                 char op, const char *src, const char *fmt,
                                 const char *ifstring, const char *elsestring,
                                 unsigned long data, format_flag flags)
{
  function();
  another();
}

static void expand_command_str(const CONTEXT *ctx, const char *cmd, char *buf, int buflen)
{
  function();
  another();
}

static int execute_command(CONTEXT *ctx, const char *command, const char *progress)
{
  function();
  another();
}

static int comp_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int comp_open_append_mailbox(CONTEXT *ctx, int flags)
{
  function();
  another();
}

static int comp_close_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int comp_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int comp_open_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

static int comp_close_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int comp_commit_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int comp_open_new_message(MESSAGE *msg, CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

bool mutt_comp_can_append(CONTEXT *ctx)
{
  function();
  another();
}

bool mutt_comp_can_read(const char *path)
{
  function();
  another();
}

static int comp_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

int mutt_comp_valid_command(const char *cmd)
{
  function();
  another();
}

int mutt_copy_hdr(FILE *in, FILE *out, LOFF_T off_start, LOFF_T off_end,
                  int flags, const char *prefix)
{
  function();
  another();
}

int mutt_copy_header(FILE *in, HEADER *h, FILE *out, int flags, const char *prefix)
{
  function();
  another();
}

static int count_delete_lines(FILE *fp, BODY *b, LOFF_T *length, size_t datelen)
{
  function();
  another();
}

int _mutt_copy_message(FILE *fpout, FILE *fpin, HEADER *hdr, BODY *body, int flags, int chflags)
{
  function();
  another();
}

int mutt_copy_message(FILE *fpout, CONTEXT *src, HEADER *hdr, int flags, int chflags)
{
  function();
  another();
}

static int _mutt_append_message(CONTEXT *dest, FILE *fpin, CONTEXT *src,
                                HEADER *hdr, BODY *body, int flags, int chflags)
{
  function();
  another();
}

int mutt_append_message(CONTEXT *dest, CONTEXT *src, HEADER *hdr, int cmflags, int chflags)
{
  function();
  another();
}

static int copy_delete_attach(BODY *b, FILE *fpin, FILE *fpout, char *date)
{
  function();
  another();
}

static void format_address_header(char **h, ADDRESS *a)
{
  function();
  another();
}

static int address_header_decode(char **h)
{
  function();
  another();
}

void crypt_current_time(STATE *s, char *app_name)
{
  function();
  another();
}

void crypt_forget_passphrase(void)
{
  function();
  another();
}

static void disable_coredumps(void)
{
  function();
  another();
}

int crypt_valid_passphrase(int flags)
{
  function();
  another();
}

int mutt_protect(HEADER *msg, char *keylist)
{
  function();
  another();
}

int mutt_is_multipart_signed(BODY *b)
{
  function();
  another();
}

int mutt_is_multipart_encrypted(BODY *b)
{
  function();
  another();
}

int mutt_is_valid_multipart_pgp_encrypted(BODY *b)
{
  function();
  another();
}

int mutt_is_malformed_multipart_pgp_encrypted(BODY *b)
{
  function();
  another();
}

int mutt_is_application_pgp(BODY *m)
{
  function();
  another();
}

int mutt_is_application_smime(BODY *m)
{
  function();
  another();
}

int crypt_query(BODY *m)
{
  function();
  another();
}

int crypt_write_signed(BODY *a, STATE *s, const char *tempfile)
{
  function();
  another();
}

void convert_to_7bit(BODY *a)
{
  function();
  another();
}

void crypt_extract_keys_from_messages(HEADER *h)
{
  function();
  another();
}

int crypt_get_keys(HEADER *msg, char **keylist, int oppenc_mode)
{
  function();
  another();
}

void crypt_opportunistic_encrypt(HEADER *msg)
{
  function();
  another();
}

static void crypt_fetch_signatures(BODY ***signatures, BODY *a, int *n)
{
  function();
  another();
}

int mutt_signed_handler(BODY *a, STATE *s)
{
  function();
  another();
}

const char *crypt_get_fingerprint_or_id(char *p, const char **pphint,
                                        const char **ppl, const char **pps)
{
  function();
  another();
}

bool crypt_is_numerical_keyid(const char *s)
{
  function();
  another();
}

void crypt_init(void)
{
  function();
  another();
}

void crypt_invoke_message(int type)
{
  function();
  another();
}

void crypt_pgp_void_passphrase(void)
{
  function();
  another();
}

int crypt_pgp_valid_passphrase(void)
{
  function();
  another();
}

int crypt_pgp_decrypt_mime(FILE *a, FILE **b, BODY *c, BODY **d)
{
  function();
  another();
}

int crypt_pgp_application_pgp_handler(BODY *m, STATE *s)
{
  function();
  another();
}

int crypt_pgp_encrypted_handler(BODY *a, STATE *s)
{
  function();
  another();
}

void crypt_pgp_invoke_getkeys(ADDRESS *addr)
{
  function();
  another();
}

int crypt_pgp_check_traditional(FILE *fp, BODY *b, int tagged_only)
{
  function();
  another();
}

char *crypt_pgp_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

void crypt_pgp_invoke_import(const char *fname)
{
  function();
  another();
}

int crypt_pgp_verify_one(BODY *sigbdy, STATE *s, const char *tempf)
{
  function();
  another();
}

int crypt_pgp_send_menu(HEADER *msg)
{
  function();
  another();
}

void crypt_pgp_extract_keys_from_attachment_list(FILE *fp, int tag, BODY *top)
{
  function();
  another();
}

void crypt_pgp_set_sender(const char *sender)
{
  function();
  another();
}

void crypt_smime_void_passphrase(void)
{
  function();
  another();
}

int crypt_smime_valid_passphrase(void)
{
  function();
  another();
}

int crypt_smime_decrypt_mime(FILE *a, FILE **b, BODY *c, BODY **d)
{
  function();
  another();
}

int crypt_smime_application_smime_handler(BODY *m, STATE *s)
{
  function();
  another();
}

void crypt_smime_encrypted_handler(BODY *a, STATE *s)
{
  function();
  another();
}

void crypt_smime_getkeys(ENVELOPE *env)
{
  function();
  another();
}

int crypt_smime_verify_sender(HEADER *h)
{
  function();
  another();
}

char *crypt_smime_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

void crypt_smime_invoke_import(char *infile, char *mailbox)
{
  function();
  another();
}

int crypt_smime_verify_one(BODY *sigbdy, STATE *s, const char *tempf)
{
  function();
  another();
}

int crypt_smime_send_menu(HEADER *msg)
{
  function();
  another();
}

void crypt_smime_set_sender(const char *sender)
{
  function();
  another();
}

static void redraw_if_needed(gpgme_ctx_t ctx)
{
  function();
  another();
}

static int digit_or_letter(const unsigned char *s)
{
  function();
  another();
}

static void print_utf8(FILE *fp, const char *buf, size_t len)
{
  function();
  another();
}

static const char *crypt_keyid(crypt_key_t *k)
{
  function();
  another();
}

static const char *crypt_long_keyid(crypt_key_t *k)
{
  function();
  another();
}

static const char *crypt_short_keyid(crypt_key_t *k)
{
  function();
  another();
}

static const char *crypt_fpr(crypt_key_t *k)
{
  function();
  another();
}

static const char *crypt_fpr_or_lkeyid(crypt_key_t *k)
{
  function();
  another();
}

static char *crypt_key_abilities(int flags)
{
  function();
  another();
}

static char crypt_flags(int flags)
{
  function();
  another();
}

static crypt_key_t *crypt_copy_key(crypt_key_t *key)
{
  function();
  another();
}

static void crypt_free_key(crypt_key_t **keylist)
{
  function();
  another();
}

static bool crypt_key_is_valid(crypt_key_t *k)
{
  function();
  another();
}

static int crypt_id_is_strong(crypt_key_t *key)
{
  function();
  another();
}

static int crypt_id_is_valid(crypt_key_t *key)
{
  function();
  another();
}

static int crypt_id_matches_addr(ADDRESS *addr, ADDRESS *u_addr, crypt_key_t *key)
{
  function();
  another();
}

static gpgme_ctx_t create_gpgme_context(int for_smime)
{
  function();
  another();
}

static gpgme_data_t create_gpgme_data(void)
{
  function();
  another();
}

static gpgme_data_t body_to_data_object(BODY *a, int convert)
{
  function();
  another();
}

static gpgme_data_t file_to_data_object(FILE *fp, long offset, long length)
{
  function();
  another();
}

static int data_object_to_stream(gpgme_data_t data, FILE *fp)
{
  function();
  another();
}

static char *data_object_to_tempfile(gpgme_data_t data, char *tempf, FILE **ret_fp)
{
  function();
  another();
}

static void free_recipient_set(gpgme_key_t **p_rset)
{
  function();
  another();
}

static gpgme_key_t *create_recipient_set(const char *keylist, gpgme_protocol_t protocol)
{
  function();
  another();
}

static int set_signer(gpgme_ctx_t ctx, int for_smime)
{
  function();
  another();
}

static gpgme_error_t set_pka_sig_notation(gpgme_ctx_t ctx)
{
  function();
  another();
}

static char *encrypt_gpgme_object(gpgme_data_t plaintext, gpgme_key_t *rset,
                                  int use_smime, int combined_signed)
{
  function();
  another();
}

static int get_micalg(gpgme_ctx_t ctx, int use_smime, char *buf, size_t buflen)
{
  function();
  another();
}

static void print_time(time_t t, STATE *s)
{
  function();
  another();
}

static BODY *sign_message(BODY *a, int use_smime)
{
  function();
  another();
}

static int show_sig_summary(unsigned long sum, gpgme_ctx_t ctx, gpgme_key_t key,
                            int idx, STATE *s, gpgme_signature_t sig)
{
  function();
  another();
}

static void show_fingerprint(gpgme_key_t key, STATE *state)
{
  function();
  another();
}

static void show_one_sig_validity(gpgme_ctx_t ctx, int idx, STATE *s)
{
  function();
  another();
}

static void print_smime_keyinfo(const char *msg, gpgme_signature_t sig,
                                gpgme_key_t key, STATE *s)
{
  function();
  another();
}

static int show_one_sig_status(gpgme_ctx_t ctx, int idx, STATE *s)
{
  function();
  another();
}

static int verify_one(BODY *sigbdy, STATE *s, const char *tempfile, int is_smime)
{
  function();
  another();
}

int pgp_gpgme_verify_one(BODY *sigbdy, STATE *s, const char *tempfile)
{
  function();
  another();
}

int smime_gpgme_verify_one(BODY *sigbdy, STATE *s, const char *tempfile)
{
  function();
  another();
}

static BODY *decrypt_part(BODY *a, STATE *s, FILE *fpout, int is_smime, int *r_is_signed)
{
  function();
  another();
}

int pgp_gpgme_decrypt_mime(FILE *fpin, FILE **fpout, BODY *b, BODY **cur)
{
  function();
  another();
}

int smime_gpgme_decrypt_mime(FILE *fpin, FILE **fpout, BODY *b, BODY **cur)
{
  function();
  another();
}

static int pgp_gpgme_extract_keys(gpgme_data_t keydata, FILE **fp, int dryrun)
{
  function();
  another();
}

static int line_compare(const char *a, size_t n, const char *b)
{
  function();
  another();
}

static int pgp_check_traditional_one_body(FILE *fp, BODY *b, int tagged_only)
{
  function();
  another();
}

int pgp_gpgme_check_traditional(FILE *fp, BODY *b, int tagged_only)
{
  function();
  another();
}

void pgp_gpgme_invoke_import(const char *fname)
{
  function();
  another();
}

static void copy_clearsigned(gpgme_data_t data, STATE *s, char *charset)
{
  function();
  another();
}

int pgp_gpgme_application_handler(BODY *m, STATE *s)
{
  function();
  another();
}

int pgp_gpgme_encrypted_handler(BODY *a, STATE *s)
{
  function();
  another();
}

int smime_gpgme_application_handler(BODY *a, STATE *s)
{
  function();
  another();
}

static const char *crypt_entry_fmt(char *dest, size_t destlen, size_t col, int cols,
                                   char op, const char *src, const char *prefix,
                                   const char *ifstring, const char *elsestring,
                                   unsigned long data, format_flag flags)
{
  function();
  another();
}

static void crypt_entry(char *s, size_t l, MUTTMENU *menu, int num)
{
  function();
  another();
}

static int _crypt_compare_address(const void *a, const void *b)
{
  function();
  another();
}

static int crypt_compare_address(const void *a, const void *b)
{
  function();
  another();
}

static int _crypt_compare_keyid(const void *a, const void *b)
{
  function();
  another();
}

static int crypt_compare_keyid(const void *a, const void *b)
{
  function();
  another();
}

static int _crypt_compare_date(const void *a, const void *b)
{
  function();
  another();
}

static int crypt_compare_date(const void *a, const void *b)
{
  function();
  another();
}

static int _crypt_compare_trust(const void *a, const void *b)
{
  function();
  another();
}

static int crypt_compare_trust(const void *a, const void *b)
{
  function();
  another();
}

static int print_dn_part(FILE *fp, struct dn_array_s *dn, const char *key)
{
  function();
  another();
}

static void print_dn_parts(FILE *fp, struct dn_array_s *dn)
{
  function();
  another();
}

static const char *parse_dn_part(struct dn_array_s *array, const char *string)
{
  function();
  another();
}

static struct dn_array_s *parse_dn(const char *string)
{
  function();
  another();
}

static void parse_and_print_user_id(FILE *fp, const char *userid)
{
  function();
  another();
}

static unsigned int key_check_cap(gpgme_key_t key, key_cap_t cap)
{
  function();
  another();
}

static void print_key_info(gpgme_key_t key, FILE *fp)
{
  function();
  another();
}

static void verify_key(crypt_key_t *key)
{
  function();
  another();
}

static char *list_to_pattern(LIST *list)
{
  function();
  another();
}

static crypt_key_t *get_candidates(LIST *hints, unsigned int app, int secret)
{
  function();
  another();
}

static LIST *crypt_add_string_to_hints(LIST *hints, const char *str)
{
  function();
  another();
}

static crypt_key_t *crypt_select_key(crypt_key_t *keys, ADDRESS *p, const char *s,
                                     unsigned int app, int *forced_valid)
{
  function();
  another();
}

static crypt_key_t *crypt_getkeybyaddr(ADDRESS *a, short abilities, unsigned int app,
                                       int *forced_valid, int oppenc_mode)
{
  function();
  another();
}

static crypt_key_t *crypt_getkeybystr(char *p, short abilities, unsigned int app, int *forced_valid)
{
  function();
  another();
}

static crypt_key_t *crypt_ask_for_key(char *tag, char *whatfor, short abilities,
                                      unsigned int app, int *forced_valid)
{
  function();
  another();
}

static char *find_keys(ADDRESS *adrlist, unsigned int app, int oppenc_mode)
{
  function();
  another();
}

char *pgp_gpgme_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

char *smime_gpgme_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

static void init_common(void)
{
  function();
  another();
}

static void init_pgp(void)
{
  function();
  another();
}

static void init_smime(void)
{
  function();
  another();
}

void pgp_gpgme_init(void)
{
  function();
  another();
}

void smime_gpgme_init(void)
{
  function();
  another();
}

static int gpgme_send_menu(HEADER *msg, int is_smime)
{
  function();
  another();
}

int pgp_gpgme_send_menu(HEADER *msg)
{
  function();
  another();
}

int smime_gpgme_send_menu(HEADER *msg)
{
  function();
  another();
}

static int verify_sender(HEADER *h, gpgme_protocol_t protocol)
{
  function();
  another();
}

int smime_gpgme_verify_sender(HEADER *h)
{
  function();
  another();
}

void mutt_gpgme_set_sender(const char *sender)
{
  function();
  another();
}

void crypto_module_register(crypt_module_specs_t specs)
{
  function();
  another();
}

crypt_module_specs_t crypto_module_lookup(int identifier)
{
  function();
  another();
}

static void crypt_mod_pgp_void_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_pgp_valid_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_pgp_decrypt_mime(FILE *a, FILE **b, BODY *c, BODY **d)
{
  function();
  another();
}

static int crypt_mod_pgp_application_handler(BODY *m, STATE *s)
{
  function();
  another();
}

static char *crypt_mod_pgp_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

static BODY *crypt_mod_pgp_sign_message(BODY *a)
{
  function();
  another();
}

static int crypt_mod_pgp_verify_one(BODY *sigbdy, STATE *s, const char *tempf)
{
  function();
  another();
}

static int crypt_mod_pgp_send_menu(HEADER *msg)
{
  function();
  another();
}

static BODY *crypt_mod_pgp_encrypt_message(BODY *a, char *keylist, int sign)
{
  function();
  another();
}

static BODY *crypt_mod_pgp_make_key_attachment(char *tempf)
{
  function();
  another();
}

static int crypt_mod_pgp_check_traditional(FILE *fp, BODY *b, int tagged_only)
{
  function();
  another();
}

static BODY *crypt_mod_pgp_traditional_encryptsign(BODY *a, int flags, char *keylist)
{
  function();
  another();
}

static int crypt_mod_pgp_encrypted_handler(BODY *m, STATE *s)
{
  function();
  another();
}

static void crypt_mod_pgp_invoke_getkeys(ADDRESS *addr)
{
  function();
  another();
}

static void crypt_mod_pgp_invoke_import(const char *fname)
{
  function();
  another();
}

static void crypt_mod_pgp_extract_keys_from_attachment_list(FILE *fp, int tag, BODY *top)
{
  function();
  another();
}

static void crypt_mod_pgp_init(void)
{
  function();
  another();
}

static void crypt_mod_pgp_void_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_pgp_valid_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_pgp_decrypt_mime(FILE *a, FILE **b, BODY *c, BODY **d)
{
  function();
  another();
}

static int crypt_mod_pgp_application_handler(BODY *m, STATE *s)
{
  function();
  another();
}

static int crypt_mod_pgp_encrypted_handler(BODY *m, STATE *s)
{
  function();
  another();
}

static int crypt_mod_pgp_check_traditional(FILE *fp, BODY *b, int tagged_only)
{
  function();
  another();
}

static void crypt_mod_pgp_invoke_import(const char *fname)
{
  function();
  another();
}

static char *crypt_mod_pgp_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

static BODY *crypt_mod_pgp_sign_message(BODY *a)
{
  function();
  another();
}

static int crypt_mod_pgp_verify_one(BODY *sigbdy, STATE *s, const char *tempf)
{
  function();
  another();
}

static int crypt_mod_pgp_send_menu(HEADER *msg)
{
  function();
  another();
}

static BODY *crypt_mod_pgp_encrypt_message(BODY *a, char *keylist, int sign)
{
  function();
  another();
}

static BODY *crypt_mod_pgp_make_key_attachment(char *tempf)
{
  function();
  another();
}

static void crypt_mod_pgp_set_sender(const char *sender)
{
  function();
  another();
}

static void crypt_mod_smime_void_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_smime_valid_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_smime_decrypt_mime(FILE *a, FILE **b, BODY *c, BODY **d)
{
  function();
  another();
}

static int crypt_mod_smime_application_handler(BODY *m, STATE *s)
{
  function();
  another();
}

static char *crypt_mod_smime_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

static BODY *crypt_mod_smime_sign_message(BODY *a)
{
  function();
  another();
}

static int crypt_mod_smime_verify_one(BODY *sigbdy, STATE *s, const char *tempf)
{
  function();
  another();
}

static int crypt_mod_smime_send_menu(HEADER *msg)
{
  function();
  another();
}

static void crypt_mod_smime_getkeys(ENVELOPE *env)
{
  function();
  another();
}

static int crypt_mod_smime_verify_sender(HEADER *h)
{
  function();
  another();
}

static BODY *crypt_mod_smime_build_smime_entity(BODY *a, char *certlist)
{
  function();
  another();
}

static void crypt_mod_smime_invoke_import(char *infile, char *mailbox)
{
  function();
  another();
}

static void crypt_mod_smime_init(void)
{
  function();
  another();
}

static void crypt_mod_smime_void_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_smime_valid_passphrase(void)
{
  function();
  another();
}

static int crypt_mod_smime_decrypt_mime(FILE *a, FILE **b, BODY *c, BODY **d)
{
  function();
  another();
}

static int crypt_mod_smime_application_handler(BODY *m, STATE *s)
{
  function();
  another();
}

static char *crypt_mod_smime_findkeys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

static BODY *crypt_mod_smime_sign_message(BODY *a)
{
  function();
  another();
}

static int crypt_mod_smime_verify_one(BODY *sigbdy, STATE *s, const char *tempf)
{
  function();
  another();
}

static int crypt_mod_smime_send_menu(HEADER *msg)
{
  function();
  another();
}

static BODY *crypt_mod_smime_build_smime_entity(BODY *a, char *certlist)
{
  function();
  another();
}

static int crypt_mod_smime_verify_sender(HEADER *h)
{
  function();
  another();
}

void mutt_refresh(void)
{
  function();
  another();
}

void mutt_need_hard_redraw(void)
{
  function();
  another();
}

event_t mutt_getch(void)
{
  function();
  another();
}

int _mutt_get_field(const char *field, char *buf, size_t buflen, int complete,
                    int multiple, char ***files, int *numfiles)
{
  function();
  another();
}

int mutt_get_field_unbuffered(char *msg, char *buf, size_t buflen, int flags)
{
  function();
  another();
}

void mutt_clear_error(void)
{
  function();
  another();
}

void mutt_edit_file(const char *editor, const char *data)
{
  function();
  another();
}

int mutt_yesorno(const char *msg, int def)
{
  function();
  another();
}

void mutt_query_exit(void)
{
  function();
  another();
}

static void curses_message(int error, const char *fmt, va_list ap)
{
  function();
  another();
}

void mutt_curses_error(const char *fmt, ...)
{
  function();
  another();
}

void mutt_curses_message(const char *fmt, ...)
{
  function();
  another();
}

void mutt_progress_init(progress_t *progress, const char *msg,
                        unsigned short flags, unsigned short inc, long size)
{
  function();
  another();
}

static void message_bar(int percent, const char *fmt, ...)
{
  function();
  another();
}

void mutt_progress_update(progress_t *progress, long pos, int percent)
{
  function();
  another();
}

void mutt_init_windows(void)
{
  function();
  another();
}

void mutt_free_windows(void)
{
  function();
  another();
}

void mutt_reflow_windows(void)
{
  function();
  another();
}

static void reflow_message_window_rows(int mw_rows)
{
  function();
  another();
}

int mutt_window_move(mutt_window_t *win, int row, int col)
{
  function();
  another();
}

int mutt_window_mvaddch(mutt_window_t *win, int row, int col, const chtype ch)
{
  function();
  another();
}

int mutt_window_mvaddstr(mutt_window_t *win, int row, int col, const char *str)
{
  function();
  another();
}

static int vw_printw(SLcurses_Window_Type *win, const char *fmt, va_list ap)
{
  function();
  another();
}

int mutt_window_mvprintw(mutt_window_t *win, int row, int col, const char *fmt, ...)
{
  function();
  another();
}

void mutt_window_clrtoeol(mutt_window_t *win)
{
  function();
  another();
}

void mutt_window_clearline(mutt_window_t *win, int row)
{
  function();
  another();
}

void mutt_window_getyx(mutt_window_t *win, int *y, int *x)
{
  function();
  another();
}

void mutt_show_error(void)
{
  function();
  another();
}

void mutt_endwin(const char *msg)
{
  function();
  another();
}

void mutt_perror(const char *s)
{
  function();
  another();
}

int mutt_any_key_to_continue(const char *s)
{
  function();
  another();
}

int mutt_do_pager(const char *banner, const char *tempfile, int do_color, pager_t *info)
{
  function();
  another();
}

int _mutt_enter_fname(const char *prompt, char *buf, size_t blen, int buffy,
                      int multiple, char ***files, int *numfiles, int flags)
{
  function();
  another();
}

void mutt_unget_event(int ch, int op)
{
  function();
  another();
}

void mutt_unget_string(char *s)
{
  function();
  another();
}

void mutt_push_macro_event(int ch, int op)
{
  function();
  another();
}

void mutt_flush_macro_to_endcond(void)
{
  function();
  another();
}

void mutt_flushinp(void)
{
  function();
  another();
}

void mutt_curs_set(int cursor)
{
  function();
  another();
}

int mutt_multi_choice(char *prompt, char *letters)
{
  function();
  another();
}

int mutt_addwch(wchar_t wc)
{
  function();
  another();
}

void mutt_format_string(char *dest, size_t destlen, int min_width, int max_width,
                        int justify, char m_pad_char, const char *s, size_t n, int arboreal)
{
  function();
  another();
}

static void format_s_x(char *dest, size_t destlen, const char *prefix,
                       const char *s, int arboreal)
{
  function();
  another();
}

void mutt_format_s(char *dest, size_t destlen, const char *prefix, const char *s)
{
  function();
  another();
}

void mutt_format_s_tree(char *dest, size_t destlen, const char *prefix, const char *s)
{
  function();
  another();
}

void mutt_paddstr(int n, const char *s)
{
  function();
  another();
}

size_t mutt_wstr_trunc(const char *src, size_t maxlen, size_t maxwid, size_t *width)
{
  function();
  another();
}

int mutt_charlen(const char *s, int *width)
{
  function();
  another();
}

int mutt_strwidth(const char *s)
{
  function();
  another();
}

static void collapse_all(MUTTMENU *menu, int toggle)
{
  function();
  another();
}

static int ci_next_undeleted(int msgno)
{
  function();
  another();
}

static int ci_previous_undeleted(int msgno)
{
  function();
  another();
}

static int ci_first_message(void)
{
  function();
  another();
}

static int mx_toggle_write(CONTEXT *ctx)
{
  function();
  another();
}

static void resort_index(MUTTMENU *menu)
{
  function();
  another();
}

void update_index(MUTTMENU *menu, CONTEXT *ctx, int check, int oldcount, int index_hint)
{
  function();
  another();
}

static int main_change_folder(MUTTMENU *menu, int op, char *buf, size_t bufsz,
                              int *oldcount, int *index_hint, int flags)
{
  function();
  another();
}

bool mutt_ts_capability(void)
{
  function();
  another();
}

void mutt_ts_status(char *str)
{
  function();
  another();
}

void mutt_ts_icon(char *str)
{
  function();
  another();
}

void index_make_entry(char *s, size_t l, MUTTMENU *menu, int num)
{
  function();
  another();
}

int index_color(int index_no)
{
  function();
  another();
}

void mutt_draw_statusline(int cols, const char *buf, int buflen)
{
  function();
  another();
}

static void index_menu_redraw(MUTTMENU *menu)
{
  function();
  another();
}

int mutt_index_menu(void)
{
  function();
  another();
}

void mutt_set_header_color(CONTEXT *ctx, HEADER *curhdr)
{
  function();
  another();
}

static time_t compute_tz(time_t g, struct tm *utc)
{
  function();
  another();
}

time_t mutt_local_tz(time_t t)
{
  function();
  another();
}

time_t mutt_mktime(struct tm *t, int local)
{
  function();
  another();
}

static int is_leap_year_feb(struct tm *tm)
{
  function();
  another();
}

void mutt_normalize_time(struct tm *tm)
{
  function();
  another();
}

static char *skip_ws(char *s)
{
  function();
  another();
}

static char *get_token(char *d, size_t l, char *s)
{
  function();
  another();
}

static int sgml_fputc(int c, FILE *out)
{
  function();
  another();
}

static int sgml_fputs(const char *s, FILE *out)
{
  function();
  another();
}

static int print_it(int special, char *str, FILE *out, int docstat)
{
  function();
  another();
}

static int flush_doc(int docstat, FILE *out)
{
  function();
  another();
}

static int commit_buff(char *buff, char **d, FILE *out, int docstat)
{
  function();
  another();
}

static int sgml_id_fputs(const char *s, FILE *out)
{
  function();
  another();
}

void print_ref(FILE *out, int output_dollar, const char *ref)
{
  function();
  another();
}

static int handle_docline(char *l, FILE *out, int docstat)
{
  function();
  another();
}

static int buff2type(const char *s)
{
  function();
  another();
}

static void pretty_default(char *t, size_t l, const char *s, int type)
{
  function();
  another();
}

static void char_to_escape(char *dest, unsigned int c)
{
  function();
  another();
}

static void conf_char_to_escape(unsigned int c, FILE *out)
{
  function();
  another();
}

static void conf_print_strval(const char *v, FILE *out)
{
  function();
  another();
}

static const char *type2human(int type)
{
  function();
  another();
}

static void man_print_strval(const char *v, FILE *out)
{
  function();
  another();
}

static void sgml_print_strval(const char *v, FILE *out)
{
  function();
  another();
}

static void print_confline(const char *varname, int type, const char *val, FILE *out)
{
  function();
  another();
}

static void handle_confline(char *s, FILE *out)
{
  function();
  another();
}

static void makedoc(FILE *in, FILE *out)
{
  function();
  another();
}

int main(int argc, char *argv[])
{
  function();
  another();
}

static int dotlock_init_privs(void)
{
  function();
  another();
}

static void BEGIN_PRIVILEGED(void)
{
  function();
  another();
}

static void END_PRIVILEGED(void)
{
  function();
  another();
}

static void usage(const char *av0)
{
  function();
  another();
}

static int dotlock_check_stats(struct stat *fsb, struct stat *lsb)
{
  function();
  another();
}

static void dotlock_expand_link(char *newpath, const char *path, const char *link)
{
  function();
  another();
}

static int dotlock_try(void)
{
  function();
  another();
}

static int dotlock_deference_symlink(char *d, size_t l, const char *path)
{
  function();
  another();
}

static int dotlock_prepare(char *bn, size_t l, const char *f, int _fd)
{
  function();
  another();
}

static int dotlock_lock(const char *realpath)
{
  function();
  another();
}

static int dotlock_unlock(const char *realpath)
{
  function();
  another();
}

static int dotlock_unlink(const char *realpath)
{
  function();
  another();
}

static int dotlock_dispatch(const char *f, int fd)
{
  function();
  another();
}

int dotlock_invoke(const char *path, int fd, int flags, int retry)
{
  function();
  another();
}

int main(int argc, char **argv)
{
  function();
  another();
}

static char **be_snarf_data(FILE *f, char **buf, int *bufmax, int *buflen,
                            LOFF_T offset, int bytes, int prefix)
{
  function();
  another();
}

static char **be_snarf_file(const char *path, char **buf, int *max, int *len, int verbose)
{
  function();
  another();
}

static int be_barf_file(const char *path, char **buf, int buflen)
{
  function();
  another();
}

static void be_free_memory(char **buf, int buflen)
{
  function();
  another();
}

static char **be_include_messages(char *msg, char **buf, int *bufmax,
                                  int *buflen, int pfx, int inc_hdrs)
{
  function();
  another();
}

static void be_print_header(ENVELOPE *env)
{
  function();
  another();
}

static void be_edit_header(ENVELOPE *e, int force)
{
  function();
  another();
}

int mutt_builtin_editor(const char *path, HEADER *msg, HEADER *cur)
{
  function();
  another();
}

static int edit_one_message(CONTEXT *ctx, HEADER *cur)
{
  function();
  another();
}

int mutt_edit_message(CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

static int my_wcwidth(wchar_t wc)
{
  function();
  another();
}

static int my_wcswidth(const wchar_t *s, size_t n)
{
  function();
  another();
}

static int my_addwch(wchar_t wc)
{
  function();
  another();
}

static size_t width_ceiling(const wchar_t *s, size_t n, int w1)
{
  function();
  another();
}

static void my_wcstombs(char *dest, size_t dlen, const wchar_t *src, size_t slen)
{
  function();
  another();
}

static size_t my_mbstowcs(wchar_t **pwbuf, size_t *pwbuflen, size_t i, char *buf)
{
  function();
  another();
}

static void replace_part(ENTER_STATE *state, size_t from, char *buf)
{
  function();
  another();
}

static inline int is_shell_char(wchar_t ch)
{
  function();
  another();
}

int mutt_enter_string(char *buf, size_t buflen, int col, int flags)
{
  function();
  another();
}

int _mutt_enter_string(char *buf, size_t buflen, int col, int flags, int multiple,
                       char ***files, int *numfiles, ENTER_STATE *state)
{
  function();
  another();
}

void mutt_free_enter_state(ENTER_STATE **esp)
{
  function();
  another();
}

void mutt_exit(int code)
{
  function();
  another();
}

pid_t mutt_create_filter_fd(const char *cmd, FILE **in, FILE **out, FILE **err,
                            int fdin, int fdout, int fderr)
{
  function();
  another();
}

pid_t mutt_create_filter(const char *s, FILE **in, FILE **out, FILE **err)
{
  function();
  another();
}

int mutt_wait_filter(pid_t pid)
{
  function();
  another();
}

void _mutt_set_flag(CONTEXT *ctx, HEADER *h, int flag, int bf, int upd_ctx)
{
  function();
  another();
}

void mutt_tag_set_flag(int flag, int bf)
{
  function();
  another();
}

int mutt_thread_set_flag(HEADER *hdr, int flag, int bf, int subthread)
{
  function();
  another();
}

int mutt_change_flag(HEADER *h, int bf)
{
  function();
  another();
}

static const char *next_word(const char *s)
{
  function();
  another();
}

int mutt_check_month(const char *s)
{
  function();
  another();
}

static bool is_day_name(const char *s)
{
  function();
  another();
}

int is_from(const char *s, char *path, size_t pathlen, time_t *tp)
{
  function();
  another();
}

int getdnsdomainname(char *d, size_t len)
{
  function();
  another();
}

static void fix_uid(char *uid)
{
  function();
  another();
}

static pgp_key_t parse_pub_line(char *buf, int *is_subkey, pgp_key_t k)
{
  function();
  another();
}

pgp_key_t pgp_get_candidates(pgp_ring_t keyring, LIST *hints)
{
  function();
  another();
}

group_t *mutt_pattern_group(const char *k)
{
  function();
  another();
}

static void group_remove(group_t *g)
{
  function();
  another();
}

int mutt_group_context_clear(group_context_t **ctx)
{
  function();
  another();
}

static int empty_group(group_t *g)
{
  function();
  another();
}

void mutt_group_context_add(group_context_t **ctx, group_t *group)
{
  function();
  another();
}

void mutt_group_context_destroy(group_context_t **ctx)
{
  function();
  another();
}

static void group_add_adrlist(group_t *g, ADDRESS *a)
{
  function();
  another();
}

static int group_remove_adrlist(group_t *g, ADDRESS *a)
{
  function();
  another();
}

static int group_add_rx(group_t *g, const char *s, int flags, BUFFER *err)
{
  function();
  another();
}

static int group_remove_rx(group_t *g, const char *s)
{
  function();
  another();
}

void mutt_group_context_add_adrlist(group_context_t *ctx, ADDRESS *a)
{
  function();
  another();
}

int mutt_group_context_remove_adrlist(group_context_t *ctx, ADDRESS *a)
{
  function();
  another();
}

int mutt_group_context_add_rx(group_context_t *ctx, const char *s, int flags, BUFFER *err)
{
  function();
  another();
}

int mutt_group_context_remove_rx(group_context_t *ctx, const char *s)
{
  function();
  another();
}

bool mutt_group_match(group_t *g, const char *s)
{
  function();
  another();
}

static void print_part_line(STATE *s, BODY *b, int n)
{
  function();
  another();
}

static void state_prefix_put(const char *d, size_t dlen, STATE *s)
{
  function();
  another();
}

static void convert_to_state(iconv_t cd, char *bufi, size_t *l, STATE *s)
{
  function();
  another();
}

static void decode_xbit(STATE *s, long len, int istext, iconv_t cd)
{
  function();
  another();
}

static int qp_decode_triple(char *s, char *d)
{
  function();
  another();
}

static void qp_decode_line(char *dest, char *src, size_t *l, int last)
{
  function();
  another();
}

static void decode_quoted(STATE *s, long len, int istext, iconv_t cd)
{
  function();
  another();
}

void mutt_decode_base64(STATE *s, long len, int istext, iconv_t cd)
{
  function();
  another();
}

static unsigned char decode_byte(char ch)
{
  function();
  another();
}

static void decode_uuencoded(STATE *s, long len, int istext, iconv_t cd)
{
  function();
  another();
}

static void enriched_wrap(struct enriched_state *stte)
{
  function();
  another();
}

static void enriched_flush(struct enriched_state *stte, int wrap)
{
  function();
  another();
}

static void enriched_putwc(wchar_t c, struct enriched_state *stte)
{
  function();
  another();
}

static void enriched_puts(const char *s, struct enriched_state *stte)
{
  function();
  another();
}

static void enriched_set_flags(const wchar_t *tag, struct enriched_state *stte)
{
  function();
  another();
}

static int text_enriched_handler(BODY *a, STATE *s)
{
  function();
  another();
}

static int is_mmnoask(const char *buf)
{
  function();
  another();
}

static int is_autoview(BODY *b)
{
  function();
  another();
}

static int alternative_handler(BODY *a, STATE *s)
{
  function();
  another();
}

static int message_handler(BODY *a, STATE *s)
{
  function();
  another();
}

int mutt_can_decode(BODY *a)
{
  function();
  another();
}

static int multipart_handler(BODY *a, STATE *s)
{
  function();
  another();
}

static int autoview_handler(BODY *a, STATE *s)
{
  function();
  another();
}

static int external_body_handler(BODY *b, STATE *s)
{
  function();
  another();
}

void mutt_decode_attachment(BODY *b, STATE *s)
{
  function();
  another();
}

static int text_plain_handler(BODY *b, STATE *s)
{
  function();
  another();
}

static int run_decode_and_handler(BODY *b, STATE *s, handler_t handler, int plaintext)
{
  function();
  another();
}

static int valid_pgp_encrypted_handler(BODY *b, STATE *s)
{
  function();
  another();
}

static int malformed_pgp_encrypted_handler(BODY *b, STATE *s)
{
  function();
  another();
}

int mutt_body_handler(BODY *b, STATE *s)
{
  function();
  another();
}

static unsigned int gen_string_hash(union hash_key key, unsigned int n)
{
  function();
  another();
}

static int cmp_string_key(union hash_key a, union hash_key b)
{
  function();
  another();
}

static unsigned int gen_case_string_hash(union hash_key key, unsigned int n)
{
  function();
  another();
}

static int cmp_case_string_key(union hash_key a, union hash_key b)
{
  function();
  another();
}

static unsigned int gen_int_hash(union hash_key key, unsigned int n)
{
  function();
  another();
}

static int cmp_int_key(union hash_key a, union hash_key b)
{
  function();
  another();
}

static HASH *new_hash(int nelem)
{
  function();
  another();
}

static int union_hash_insert(HASH *table, union hash_key key, void *data)
{
  function();
  another();
}

int hash_insert(HASH *table, const char *strkey, void *data)
{
  function();
  another();
}

int int_hash_insert(HASH *table, unsigned int intkey, void *data)
{
  function();
  another();
}

static struct hash_elem *union_hash_find_elem(const HASH *table, union hash_key key)
{
  function();
  another();
}

static void *union_hash_find(const HASH *table, union hash_key key)
{
  function();
  another();
}

void *hash_find(const HASH *table, const char *strkey)
{
  function();
  another();
}

struct hash_elem *hash_find_elem(const HASH *table, const char *strkey)
{
  function();
  another();
}

void *int_hash_find(const HASH *table, unsigned int intkey)
{
  function();
  another();
}

struct hash_elem *hash_find_bucket(const HASH *table, const char *strkey)
{
  function();
  another();
}

static void union_hash_delete(HASH *table, union hash_key key, const void *data,
                              void (*destroy)(void *))
{
  function();
  another();
}

void hash_delete(HASH *table, const char *strkey, const void *data, void (*destroy)(void *))
{
  function();
  another();
}

void int_hash_delete(HASH *table, unsigned int intkey, const void *data,
                     void (*destroy)(void *))
{
  function();
  another();
}

void hash_destroy(HASH **ptr, void (*destroy)(void *))
{
  function();
  another();
}

struct hash_elem *hash_walk(const HASH *table, struct hash_walk_state *state)
{
  function();
  another();
}

static void dbt_init(DBT *dbt, void *data, size_t len)
{
  function();
  another();
}

static void dbt_empty_init(DBT *dbt)
{
  function();
  another();
}

static void *hcache_bdb_open(const char *path)
{
  function();
  another();
}

static void *hcache_bdb_fetch(void *vctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_bdb_free(void *vctx, void **data)
{
  function();
  another();
}

static int hcache_bdb_store(void *vctx, const char *key, size_t keylen, void *data, size_t dlen)
{
  function();
  another();
}

static int hcache_bdb_delete(void *vctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_bdb_close(void **vctx)
{
  function();
  another();
}

static const char *hcache_bdb_backend(void)
{
  function();
  another();
}

static const hcache_ops_t *hcache_get_backend_ops(const char *backend)
{
  function();
  another();
}

static void *lazy_malloc(size_t siz)
{
  function();
  another();
}

static void lazy_realloc(void *ptr, size_t siz)
{
  function();
  another();
}

static unsigned char *dump_int(unsigned int i, unsigned char *d, int *off)
{
  function();
  another();
}

static void restore_int(unsigned int *i, const unsigned char *d, int *off)
{
  function();
  another();
}

static inline bool is_ascii(const char *p, size_t len)
{
  function();
  another();
}

static unsigned char *dump_char_size(char *c, unsigned char *d, int *off,
                                     ssize_t size, int convert)
{
  function();
  another();
}

static unsigned char *dump_char(char *c, unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static void restore_char(char **c, const unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static unsigned char *dump_address(ADDRESS *a, unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static void restore_address(ADDRESS **a, const unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static unsigned char *dump_list(LIST *l, unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static void restore_list(LIST **l, const unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static unsigned char *dump_buffer(BUFFER *b, unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static void restore_buffer(BUFFER **b, const unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static unsigned char *dump_parameter(PARAMETER *p, unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static void restore_parameter(PARAMETER **p, const unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static unsigned char *dump_body(BODY *c, unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static void restore_body(BODY *c, const unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static unsigned char *dump_envelope(ENVELOPE *e, unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static void restore_envelope(ENVELOPE *e, const unsigned char *d, int *off, int convert)
{
  function();
  another();
}

static int crc_matches(const char *d, unsigned int crc)
{
  function();
  another();
}

static bool create_hcache_dir(const char *path)
{
  function();
  another();
}

static const char *hcache_per_folder(const char *path, const char *folder, hcache_namer_t namer)
{
  function();
  another();
}

static void *hcache_dump(header_cache_t *h, HEADER *header, int *off, unsigned int uidvalidity)
{
  function();
  another();
}

static char *get_foldername(const char *folder)
{
  function();
  another();
}

header_cache_t *mutt_hcache_open(const char *path, const char *folder, hcache_namer_t namer)
{
  function();
  another();
}

void mutt_hcache_close(header_cache_t *h)
{
  function();
  another();
}

void *mutt_hcache_fetch(header_cache_t *h, const char *key, size_t keylen)
{
  function();
  another();
}

void *mutt_hcache_fetch_raw(header_cache_t *h, const char *key, size_t keylen)
{
  function();
  another();
}

void mutt_hcache_free(header_cache_t *h, void **data)
{
  function();
  another();
}

int mutt_hcache_store(header_cache_t *h, const char *key, size_t keylen,
                      HEADER *header, unsigned int uidvalidity)
{
  function();
  another();
}

int mutt_hcache_store_raw(header_cache_t *h, const char *key, size_t keylen,
                          void *data, size_t dlen)
{
  function();
  another();
}

int mutt_hcache_delete(header_cache_t *h, const char *key, size_t keylen)
{
  function();
  another();
}

const char *mutt_hcache_backend_list(void)
{
  function();
  another();
}

int mutt_hcache_is_valid_backend(const char *s)
{
  function();
  another();
}

static void *hcache_gdbm_open(const char *path)
{
  function();
  another();
}

static void *hcache_gdbm_fetch(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_gdbm_free(void *vctx, void **data)
{
  function();
  another();
}

static int hcache_gdbm_store(void *ctx, const char *key, size_t keylen, void *data, size_t dlen)
{
  function();
  another();
}

static int hcache_gdbm_delete(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_gdbm_close(void **ctx)
{
  function();
  another();
}

static const char *hcache_gdbm_backend(void)
{
  function();
  another();
}

static void *hcache_kyotocabinet_open(const char *path)
{
  function();
  another();
}

static void *hcache_kyotocabinet_fetch(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_kyotocabinet_free(void *vctx, void **data)
{
  function();
  another();
}

static int hcache_kyotocabinet_store(void *ctx, const char *key, size_t keylen,
                                     void *data, size_t dlen)
{
  function();
  another();
}

static int hcache_kyotocabinet_delete(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_kyotocabinet_close(void **ctx)
{
  function();
  another();
}

static const char *hcache_kyotocabinet_backend(void)
{
  function();
  another();
}

static int mdb_get_r_txn(hcache_lmdb_ctx_t *ctx)
{
  function();
  another();
}

static int mdb_get_w_txn(hcache_lmdb_ctx_t *ctx)
{
  function();
  another();
}

static void *hcache_lmdb_open(const char *path)
{
  function();
  another();
}

static void *hcache_lmdb_fetch(void *vctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_lmdb_free(void *vctx, void **data)
{
  function();
  another();
}

static int hcache_lmdb_store(void *vctx, const char *key, size_t keylen, void *data, size_t dlen)
{
  function();
  another();
}

static int hcache_lmdb_delete(void *vctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_lmdb_close(void **vctx)
{
  function();
  another();
}

static const char *hcache_lmdb_backend(void)
{
  function();
  another();
}

static void *hcache_qdbm_open(const char *path)
{
  function();
  another();
}

static void *hcache_qdbm_fetch(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_qdbm_free(void *ctx, void **data)
{
  function();
  another();
}

static int hcache_qdbm_store(void *ctx, const char *key, size_t keylen, void *data, size_t dlen)
{
  function();
  another();
}

static int hcache_qdbm_delete(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_qdbm_close(void **ctx)
{
  function();
  another();
}

static const char *hcache_qdbm_backend(void)
{
  function();
  another();
}

static void *hcache_tokyocabinet_open(const char *path)
{
  function();
  another();
}

static void *hcache_tokyocabinet_fetch(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_tokyocabinet_free(void *ctx, void **data)
{
  function();
  another();
}

static int hcache_tokyocabinet_store(void *ctx, const char *key, size_t keylen,
                                     void *data, size_t dlen)
{
  function();
  another();
}

static int hcache_tokyocabinet_delete(void *ctx, const char *key, size_t keylen)
{
  function();
  another();
}

static void hcache_tokyocabinet_close(void **ctx)
{
  function();
  another();
}

static const char *hcache_tokyocabinet_backend(void)
{
  function();
  another();
}

bool mutt_is_mail_list(ADDRESS *addr)
{
  function();
  another();
}

bool mutt_is_subscribed_list(ADDRESS *addr)
{
  function();
  another();
}

static bool check_for_mailing_list(ADDRESS *adr, const char *pfx, char *buf, int buflen)
{
  function();
  another();
}

static bool check_for_mailing_list_addr(ADDRESS *adr, char *buf, int buflen)
{
  function();
  another();
}

static bool first_mailing_list(char *buf, size_t buflen, ADDRESS *a)
{
  function();
  another();
}

static size_t add_index_color(char *buf, size_t buflen, format_flag flags, char color)
{
  function();
  another();
}

static const char *make_from_prefix(enum FieldType disp)
{
  function();
  another();
}

static void make_from(ENVELOPE *env, char *buf, size_t len, int do_lists)
{
  function();
  another();
}

static void make_from_addr(ENVELOPE *hdr, char *buf, size_t len, int do_lists)
{
  function();
  another();
}

static bool user_in_addr(ADDRESS *a)
{
  function();
  another();
}

static int user_is_recipient(HEADER *h)
{
  function();
  another();
}

static bool get_initials(const char *name, char *buf, int buflen)
{
  function();
  another();
}

static char *get_nth_wchar(mbchar_table *table, int index)
{
  function();
  another();
}

static char *apply_subject_mods(ENVELOPE *env)
{
  function();
  another();
}

static const char *hdr_format_str(char *dest, size_t destlen, size_t col, int cols,
                                  char op, const char *src, const char *prefix,
                                  const char *ifstring, const char *elsestring,
                                  unsigned long data, format_flag flags)
{
  function();
  another();
}

void _mutt_make_string(char *dest, size_t destlen, const char *s, CONTEXT *ctx,
                       HEADER *hdr, format_flag flags)
{
  function();
  another();
}

void mutt_make_string_info(char *dst, size_t dstlen, int cols, const char *s,
                           struct hdr_format_info *hfi, format_flag flags)
{
  function();
  another();
}

void mutt_edit_headers(const char *editor, const char *body, HEADER *msg, char *fcc, size_t fcclen)
{
  function();
  another();
}

static void label_ref_dec(CONTEXT *ctx, char *label)
{
  function();
  another();
}

static void label_ref_inc(CONTEXT *ctx, char *label)
{
  function();
  another();
}

static int label_message(CONTEXT *ctx, HEADER *hdr, char *new)
{
  function();
  another();
}

int mutt_label_message(HEADER *hdr)
{
  function();
  another();
}

void mutt_make_label_hash(CONTEXT *ctx)
{
  function();
  another();
}

void mutt_label_hash_add(CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

void mutt_label_hash_remove(CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

static const struct binding_t *help_lookup_function(int op, int menu)
{
  function();
  another();
}

void mutt_make_help(char *d, size_t dlen, const char *txt, int menu, int op)
{
  function();
  another();
}

char *mutt_compile_help(char *buf, size_t buflen, int menu, const struct mapping_t *items)
{
  function();
  another();
}

static int print_macro(FILE *f, int maxwidth, const char **macro)
{
  function();
  another();
}

static int get_wrapped_width(const char *t, size_t wid)
{
  function();
  another();
}

static int pad(FILE *f, int col, int i)
{
  function();
  another();
}

static void format_line(FILE *f, int ismacro, const char *t1, const char *t2, const char *t3)
{
  function();
  another();
}

static void dump_menu(FILE *f, int menu)
{
  function();
  another();
}

static bool is_bound(struct keymap_t *map, int op)
{
  function();
  another();
}

static void dump_unbound(FILE *f, const struct binding_t *funcs,
                         struct keymap_t *map, struct keymap_t *aux)
{
  function();
  another();
}

void mutt_help(int menu)
{
  function();
  another();
}

static void init_history(struct history *h)
{
  function();
  another();
}

void mutt_read_histfile(void)
{
  function();
  another();
}

static void shrink_histfile(void)
{
  function();
  another();
}

static void save_history(history_class_t hclass, const char *s)
{
  function();
  another();
}

void mutt_init_history(void)
{
  function();
  another();
}

void mutt_history_add(history_class_t hclass, const char *s, int save)
{
  function();
  another();
}

char *mutt_history_next(history_class_t hclass)
{
  function();
  another();
}

char *mutt_history_prev(history_class_t hclass)
{
  function();
  another();
}

void mutt_reset_history_state(history_class_t hclass)
{
  function();
  another();
}

int mutt_history_at_scratch(history_class_t hclass)
{
  function();
  another();
}

void mutt_history_save_scratch(history_class_t hclass, const char *s)
{
  function();
  another();
}

int mutt_parse_hook(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static void delete_hook(HOOK *h)
{
  function();
  another();
}

static void delete_hooks(int type)
{
  function();
  another();
}

int mutt_parse_unhook(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

void mutt_folder_hook(char *path)
{
  function();
  another();
}

char *mutt_find_hook(int type, const char *pat)
{
  function();
  another();
}

void mutt_message_hook(CONTEXT *ctx, HEADER *hdr, int type)
{
  function();
  another();
}

static int addr_hook(char *path, size_t pathlen, int type, CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

void mutt_default_save(char *path, size_t pathlen, HEADER *hdr)
{
  function();
  another();
}

void mutt_select_fcc(char *path, size_t pathlen, HEADER *hdr)
{
  function();
  another();
}

static char *_mutt_string_hook(const char *match, int hook)
{
  function();
  another();
}

static LIST *_mutt_list_hook(const char *match, int hook)
{
  function();
  another();
}

char *mutt_charset_hook(const char *chs)
{
  function();
  another();
}

char *mutt_iconv_hook(const char *chs)
{
  function();
  another();
}

void mutt_account_hook(const char *url)
{
  function();
  another();
}

void mutt_timeout_hook(void)
{
  function();
  another();
}

void mutt_startup_shutdown_hook(int type)
{
  function();
  another();
}

imap_auth_res_t imap_auth_anon(IMAP_DATA *idata, const char *method)
{
  function();
  another();
}

int imap_authenticate(IMAP_DATA *idata)
{
  function();
  another();
}

imap_auth_res_t imap_auth_cram_md5(IMAP_DATA *idata, const char *method)
{
  function();
  another();
}

static void hmac_md5(const char *password, char *challenge, unsigned char *response)
{
  function();
  another();
}

static void print_gss_error(OM_uint32 err_maj, OM_uint32 err_min)
{
  function();
  another();
}

imap_auth_res_t imap_auth_gss(IMAP_DATA *idata, const char *method)
{
  function();
  another();
}

imap_auth_res_t imap_auth_login(IMAP_DATA *idata, const char *method)
{
  function();
  another();
}

imap_auth_res_t imap_auth_plain(IMAP_DATA *idata, const char *method)
{
  function();
  another();
}

imap_auth_res_t imap_auth_sasl(IMAP_DATA *idata, const char *method)
{
  function();
  another();
}

static void imap_add_folder(char delim, char *folder, int noselect, int noinferiors,
                            struct browser_state *state, short isparent)
{
  function();
  another();
}

static int browse_add_list_result(IMAP_DATA *idata, const char *cmd,
                                  struct browser_state *state, short isparent)
{
  function();
  another();
}

int imap_browse(char *path, struct browser_state *state)
{
  function();
  another();
}

int imap_mailbox_create(const char *folder)
{
  function();
  another();
}

int imap_mailbox_rename(const char *mailbox)
{
  function();
  another();
}

static bool cmd_queue_full(IMAP_DATA *idata)
{
  function();
  another();
}

static IMAP_COMMAND *cmd_new(IMAP_DATA *idata)
{
  function();
  another();
}

static int cmd_queue(IMAP_DATA *idata, const char *cmdstr)
{
  function();
  another();
}

static void cmd_handle_fatal(IMAP_DATA *idata)
{
  function();
  another();
}

static int cmd_start(IMAP_DATA *idata, const char *cmdstr, int flags)
{
  function();
  another();
}

static int cmd_status(const char *s)
{
  function();
  another();
}

static void cmd_parse_expunge(IMAP_DATA *idata, const char *s)
{
  function();
  another();
}

static void cmd_parse_fetch(IMAP_DATA *idata, char *s)
{
  function();
  another();
}

static void cmd_parse_capability(IMAP_DATA *idata, char *s)
{
  function();
  another();
}

static void cmd_parse_list(IMAP_DATA *idata, char *s)
{
  function();
  another();
}

static void cmd_parse_lsub(IMAP_DATA *idata, char *s)
{
  function();
  another();
}

static void cmd_parse_myrights(IMAP_DATA *idata, const char *s)
{
  function();
  another();
}

static void cmd_parse_search(IMAP_DATA *idata, const char *s)
{
  function();
  another();
}

static void cmd_parse_status(IMAP_DATA *idata, char *s)
{
  function();
  another();
}

static void cmd_parse_enabled(IMAP_DATA *idata, const char *s)
{
  function();
  another();
}

static int cmd_handle_untagged(IMAP_DATA *idata)
{
  function();
  another();
}

int imap_cmd_start(IMAP_DATA *idata, const char *cmdstr)
{
  function();
  another();
}

int imap_cmd_step(IMAP_DATA *idata)
{
  function();
  another();
}

int imap_code(const char *s)
{
  function();
  another();
}

const char *imap_cmd_trailer(IMAP_DATA *idata)
{
  function();
  another();
}

int imap_exec(IMAP_DATA *idata, const char *cmdstr, int flags)
{
  function();
  another();
}

void imap_cmd_finish(IMAP_DATA *idata)
{
  function();
  another();
}

int imap_cmd_idle(IMAP_DATA *idata)
{
  function();
  another();
}

int imap_access(const char *path, int flags)
{
  function();
  another();
}

int imap_access(const char *path, int flags)
{
  function();
  another();
}

int imap_create_mailbox(IMAP_DATA *idata, char *mailbox)
{
  function();
  another();
}

int imap_rename_mailbox(IMAP_DATA *idata, IMAP_MBOX *mx, const char *newname)
{
  function();
  another();
}

int imap_delete_mailbox(CONTEXT *ctx, IMAP_MBOX *mx)
{
  function();
  another();
}

void imap_logout_all(void)
{
  function();
  another();
}

int imap_read_literal(FILE *fp, IMAP_DATA *idata, long bytes, progress_t *pbar)
{
  function();
  another();
}

void imap_expunge_mailbox(IMAP_DATA *idata)
{
  function();
  another();
}

static int imap_check_capabilities(IMAP_DATA *idata)
{
  function();
  another();
}

int imap_open_connection(IMAP_DATA *idata)
{
  function();
  another();
}

void imap_close_connection(IMAP_DATA *idata)
{
  function();
  another();
}

static char *imap_get_flags(LIST **hflags, char *s)
{
  function();
  another();
}

static int imap_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int imap_open_mailbox_append(CONTEXT *ctx, int flags)
{
  function();
  another();
}

void imap_logout(IMAP_DATA **idata)
{
  function();
  another();
}

static int imap_open_new_message(MESSAGE *msg, CONTEXT *dest, HEADER *hdr)
{
  function();
  another();
}

static void imap_set_flag(IMAP_DATA *idata, int aclbit, int flag,
                          const char *str, char *flags, size_t flsize)
{
  function();
  another();
}

bool imap_has_flag(LIST *flag_list, const char *flag)
{
  function();
  another();
}

static int imap_make_msg_set(IMAP_DATA *idata, BUFFER *buf, int flag,
                             int changed, int invert, int *pos)
{
  function();
  another();
}

int imap_exec_msgset(IMAP_DATA *idata, const char *pre, const char *post,
                     int flag, int changed, int invert)
{
  function();
  another();
}

static bool compare_flags(HEADER *h)
{
  function();
  another();
}

int imap_sync_message(IMAP_DATA *idata, HEADER *hdr, BUFFER *cmd, int *err_continue)
{
  function();
  another();
}

static int sync_helper(IMAP_DATA *idata, int right, int flag, const char *name)
{
  function();
  another();
}

int imap_sync_mailbox(CONTEXT *ctx, int expunge)
{
  function();
  another();
}

int imap_close_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

int imap_check_mailbox(CONTEXT *ctx, int force)
{
  function();
  another();
}

int imap_check(IMAP_DATA *idata, int force)
{
  function();
  another();
}

static int imap_check_mailbox_reopen(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int imap_get_mailbox(const char *path, IMAP_DATA **hidata, char *buf, size_t blen)
{
  function();
  another();
}

int imap_buffy_check(int force, int check_stats)
{
  function();
  another();
}

int imap_status(char *path, int queue)
{
  function();
  another();
}

void imap_mboxcache_free(IMAP_DATA *idata)
{
  function();
  another();
}

static int do_search(const pattern_t *search, int allpats)
{
  function();
  another();
}

static int imap_compile_search(const pattern_t *pat, BUFFER *buf)
{
  function();
  another();
}

int imap_search(CONTEXT *ctx, const pattern_t *pat)
{
  function();
  another();
}

int imap_subscribe(char *path, int subscribe)
{
  function();
  another();
}

static int longest_common_prefix(char *dest, const char *src, int start, size_t dlen)
{
  function();
  another();
}

static int imap_complete_hosts(char *dest, size_t len)
{
  function();
  another();
}

int imap_complete(char *dest, size_t dlen, char *path)
{
  function();
  another();
}

int imap_fast_trash(CONTEXT *ctx, char *dest)
{
  function();
  another();
}

static void imap_update_context(IMAP_DATA *idata, int oldmsgcount)
{
  function();
  another();
}

static body_cache_t *msg_cache_open(IMAP_DATA *idata)
{
  function();
  another();
}

static FILE *msg_cache_get(IMAP_DATA *idata, HEADER *h)
{
  function();
  another();
}

static FILE *msg_cache_put(IMAP_DATA *idata, HEADER *h)
{
  function();
  another();
}

static int msg_cache_commit(IMAP_DATA *idata, HEADER *h)
{
  function();
  another();
}

static int msg_cache_clean_cb(const char *id, body_cache_t *bcache, void *data)
{
  function();
  another();
}

static char *msg_parse_flags(IMAP_HEADER *h, char *s)
{
  function();
  another();
}

static int msg_parse_fetch(IMAP_HEADER *h, char *s)
{
  function();
  another();
}

static int msg_fetch_header(CONTEXT *ctx, IMAP_HEADER *h, char *buf, FILE *fp)
{
  function();
  another();
}

static void flush_buffer(char *buf, size_t *len, CONNECTION *conn)
{
  function();
  another();
}

int imap_read_headers(IMAP_DATA *idata, int msgbegin, int msgend)
{
  function();
  another();
}

int imap_fetch_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

int imap_close_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

int imap_commit_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

int imap_append_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

int imap_copy_messages(CONTEXT *ctx, HEADER *h, char *dest, int delete)
{
  function();
  another();
}

int imap_cache_del(IMAP_DATA *idata, HEADER *h)
{
  function();
  another();
}

int imap_cache_clean(IMAP_DATA *idata)
{
  function();
  another();
}

void imap_add_keywords(char *s, HEADER *h, LIST *mailbox_flags, size_t slen)
{
  function();
  another();
}

void imap_free_header_data(IMAP_HEADER_DATA **data)
{
  function();
  another();
}

char *imap_set_flags(IMAP_DATA *idata, HEADER *h, char *s)
{
  function();
  another();
}

static char *utf7_to_utf8(const char *u7, size_t u7len, char **u8, size_t *u8len)
{
  function();
  another();
}

static char *utf8_to_utf7(const char *u8, size_t u8len, char **u7, size_t *u7len)
{
  function();
  another();
}

void imap_utf_encode(IMAP_DATA *idata, char **s)
{
  function();
  another();
}

void imap_utf_decode(IMAP_DATA *idata, char **s)
{
  function();
  another();
}

int imap_expand_path(char *path, size_t len)
{
  function();
  another();
}

void imap_get_parent(char *output, const char *mbox, size_t olen, char delim)
{
  function();
  another();
}

void imap_get_parent_path(char *output, const char *path, size_t olen)
{
  function();
  another();
}

void imap_clean_path(char *path, size_t plen)
{
  function();
  another();
}

static int imap_hcache_namer(const char *path, char *dest, size_t dlen)
{
  function();
  another();
}

header_cache_t *imap_hcache_open(IMAP_DATA *idata, const char *path)
{
  function();
  another();
}

void imap_hcache_close(IMAP_DATA *idata)
{
  function();
  another();
}

int imap_hcache_put(IMAP_DATA *idata, HEADER *h)
{
  function();
  another();
}

int imap_hcache_del(IMAP_DATA *idata, unsigned int uid)
{
  function();
  another();
}

int imap_parse_path(const char *path, IMAP_MBOX *mx)
{
  function();
  another();
}

int imap_mxcmp(const char *mx1, const char *mx2)
{
  function();
  another();
}

void imap_pretty_mailbox(char *path)
{
  function();
  another();
}

int imap_continue(const char *msg, const char *resp)
{
  function();
  another();
}

void imap_error(const char *where, const char *msg)
{
  function();
  another();
}

void imap_free_idata(IMAP_DATA **idata)
{
  function();
  another();
}

char *imap_fix_path(IMAP_DATA *idata, const char *mailbox, char *path, size_t plen)
{
  function();
  another();
}

void imap_cachepath(IMAP_DATA *idata, const char *mailbox, char *dest, size_t dlen)
{
  function();
  another();
}

int imap_get_literal_count(const char *buf, long *bytes)
{
  function();
  another();
}

char *imap_get_qualifier(char *buf)
{
  function();
  another();
}

char *imap_next_word(char *s)
{
  function();
  another();
}

time_t imap_parse_date(char *s)
{
  function();
  another();
}

void imap_make_date(char *buf, time_t timestamp)
{
  function();
  another();
}

void imap_qualify_path(char *dest, size_t len, IMAP_MBOX *mx, char *path)
{
  function();
  another();
}

void imap_quote_string(char *dest, size_t dlen, const char *src)
{
  function();
  another();
}

void imap_unquote_string(char *s)
{
  function();
  another();
}

void imap_munge_mbox_name(IMAP_DATA *idata, char *dest, size_t dlen, const char *src)
{
  function();
  another();
}

void imap_unmunge_mbox_name(IMAP_DATA *idata, char *s)
{
  function();
  another();
}

int imap_wordcasecmp(const char *a, const char *b)
{
  function();
  another();
}

static void alrm_handler(int sig)
{
  function();
  another();
}

void imap_keepalive(void)
{
  function();
  another();
}

int imap_wait_keepalive(pid_t pid)
{
  function();
  another();
}

void imap_allow_reopen(CONTEXT *ctx)
{
  function();
  another();
}

void imap_disallow_reopen(CONTEXT *ctx)
{
  function();
  another();
}

int imap_account_match(const ACCOUNT *a1, const ACCOUNT *a2)
{
  function();
  another();
}

static void myvar_set(const char *var, const char *val)
{
  function();
  another();
}

static void myvar_del(const char *var)
{
  function();
  another();
}

static void toggle_quadoption(int opt)
{
  function();
  another();
}

static int parse_regex(int idx, BUFFER *tmp, BUFFER *err)
{
  function();
  another();
}

void set_quadoption(int opt, int flag)
{
  function();
  another();
}

int quadoption(int opt)
{
  function();
  another();
}

int query_quadoption(int opt, const char *prompt)
{
  function();
  another();
}

int mutt_option_index(const char *s)
{
  function();
  another();
}

int mutt_option_to_string(const struct option_t *opt, char *val, size_t len)
{
  function();
  another();
}

const struct option_t *mutt_option_get(const char *s)
{
  function();
  another();
}

static void free_mbchar_table(mbchar_table **t)
{
  function();
  another();
}

static mbchar_table *parse_mbchar_table(const char *s)
{
  function();
  another();
}

static int parse_sort(short *val, const char *s, const struct mapping_t *map, BUFFER *err)
{
  function();
  another();
}

int mutt_option_set(const struct option_t *val, BUFFER *err)
{
  function();
  another();
}

static void free_opt(struct option_t *p)
{
  function();
  another();
}

void mutt_free_opts(void)
{
  function();
  another();
}

static void add_to_list(LIST **list, const char *str)
{
  function();
  another();
}

static RX_LIST *new_rx_list(void)
{
  function();
  another();
}

int mutt_add_to_rx_list(RX_LIST **list, const char *s, int flags, BUFFER *err)
{
  function();
  another();
}

static int remove_from_replace_list(REPLACE_LIST **list, const char *pat)
{
  function();
  another();
}

static REPLACE_LIST *new_replace_list(void)
{
  function();
  another();
}

static int add_to_replace_list(REPLACE_LIST **list, const char *pat,
                               const char *templ, BUFFER *err)
{
  function();
  another();
}

static void remove_from_list(LIST **l, const char *str)
{
  function();
  another();
}

static int finish_source(BUFFER *tmp, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_ifdef(BUFFER *tmp, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unignore(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_ignore(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_list(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static void _alternates_clean(void)
{
  function();
  another();
}

static int parse_alternates(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unalternates(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_replace_list(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unreplace_list(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static void clear_subject_mods(void)
{
  function();
  another();
}

static int parse_subjectrx_list(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unsubjectrx_list(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_spam_list(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unlist(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_path_list(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_path_unlist(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_lists(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_group(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static void _attachments_clean(void)
{
  function();
  another();
}

static int parse_attach_list(BUFFER *buf, BUFFER *s, LIST **ldata, BUFFER *err)
{
  function();
  another();
}

static int parse_unattach_list(BUFFER *buf, BUFFER *s, LIST **ldata, BUFFER *err)
{
  function();
  another();
}

static int print_attach_list(LIST *lp, char op, char *name)
{
  function();
  another();
}

static int parse_attachments(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unattachments(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unlists(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_subscribe(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unsubscribe(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unalias(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_alias(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_unmy_hdr(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_my_hdr(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static void set_default(struct option_t *p)
{
  function();
  another();
}

static void restore_default(struct option_t *p)
{
  function();
  another();
}

static size_t escape_string(char *dst, size_t len, const char *src)
{
  function();
  another();
}

static void pretty_var(char *dst, size_t len, const char *option, const char *val)
{
  function();
  another();
}

static int check_charset(struct option_t *opt, const char *val)
{
  function();
  another();
}

static bool valid_show_multipart_alternative(const char *val)
{
  function();
  another();
}

char **mutt_envlist(void)
{
  function();
  another();
}

void mutt_envlist_set(const char *name, const char *value, int overwrite)
{
  function();
  another();
}

static int parse_setenv(BUFFER *tmp, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_set(BUFFER *tmp, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int to_absolute_path(char *path, const char *reference)
{
  function();
  another();
}

static int source_rc(const char *rcfile_path, BUFFER *err)
{
  function();
  another();
}

static int parse_source(BUFFER *tmp, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_parse_rc_line(/* const */ char *line, BUFFER *token, BUFFER *err)
{
  function();
  another();
}

static void matches_ensure_morespace(int current)
{
  function();
  another();
}

static void matches_ensure_morespace(int current)
{
  function();
  another();
}

static void candidate(char *dest, char *try, const char *src, int len)
{
  function();
  another();
}

const struct command_t *mutt_command_get(const char *s)
{
  function();
  another();
}

void mutt_commands_apply(void *data, void (*application)(void *, const struct command_t *))
{
  function();
  another();
}

int mutt_command_complete(char *buffer, size_t len, int pos, int numtabs)
{
  function();
  another();
}

int mutt_var_value_complete(char *buffer, size_t len, int pos)
{
  function();
  another();
}

static int complete_all_nm_tags(const char *pt)
{
  function();
  another();
}

static const char *rstrnstr(const char *haystack, size_t haystack_length, const char *needle)
{
  function();
  another();
}

bool mutt_nm_query_complete(char *buffer, size_t len, int pos, int numtabs)
{
  function();
  another();
}

bool mutt_nm_tag_complete(char *buffer, size_t len, int pos, int numtabs)
{
  function();
  another();
}

int var_to_string(int idx, char *val, size_t len)
{
  function();
  another();
}

int mutt_query_variables(LIST *queries)
{
  function();
  another();
}

int mutt_dump_variables(int hide_sensitive)
{
  function();
  another();
}

const char *mutt_getnamebyvalue(int val, const struct mapping_t *map)
{
  function();
  another();
}

int mutt_getvaluebyname(const char *name, const struct mapping_t *map)
{
  function();
  another();
}

static void start_debug(void)
{
  function();
  another();
}

static int execute_commands(LIST *p)
{
  function();
  another();
}

static char *find_cfg(const char *home, const char *xdg_cfg_home)
{
  function();
  another();
}

void mutt_init(int skip_sys_rc, LIST *commands)
{
  function();
  another();
}

int mutt_get_hook_type(const char *name)
{
  function();
  another();
}

static int parse_group_context(group_context_t **ctx, BUFFER *buf, BUFFER *s,
                               unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_tag_transforms(BUFFER *b, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static int parse_tag_formats(BUFFER *b, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

const char *myvar_get(const char *var)
{
  function();
  another();
}

int mutt_label_complete(char *buffer, size_t len, int numtabs)
{
  function();
  another();
}

static struct keymap_t *alloc_keys(int len, keycode_t *keys)
{
  function();
  another();
}

static int parse_fkey(char *s)
{
  function();
  another();
}

static int parse_keycode(const char *s)
{
  function();
  another();
}

static int parsekeys(const char *str, keycode_t *d, int max)
{
  function();
  another();
}

void km_bind(char *s, int menu, int op, char *macro, char *descr)
{
  function();
  another();
}

static void km_bindkey(char *s, int menu, int op)
{
  function();
  another();
}

static int get_op(const struct binding_t *bindings, const char *start, size_t len)
{
  function();
  another();
}

static char *get_func(const struct binding_t *bindings, int op)
{
  function();
  another();
}

static void generic_tokenize_push_string(char *s, void (*generic_push)(int, int))
{
  function();
  another();
}

static int retry_generic(int menu, keycode_t *keys, int keyslen, int lastkey)
{
  function();
  another();
}

int km_dokey(int menu)
{
  function();
  another();
}

static void create_bindings(const struct binding_t *map, int menu)
{
  function();
  another();
}

static const char *km_keyname(int c)
{
  function();
  another();
}

int km_expand_key(char *s, size_t len, struct keymap_t *map)
{
  function();
  another();
}

struct keymap_t *km_find_func(int menu, int func)
{
  function();
  another();
}

static const char *find_ext_name(const char *key)
{
  function();
  another();
}

void init_extended_keys(void)
{
  function();
  another();
}

void km_init(void)
{
  function();
  another();
}

void km_error_key(int menu)
{
  function();
  another();
}

int mutt_parse_push(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

char *parse_keymap(int *menu, BUFFER *s, int maxmenus, int *nummenus, BUFFER *err)
{
  function();
  another();
}

static int try_bind(char *key, int menu, char *func, const struct binding_t *bindings)
{
  function();
  another();
}

const struct binding_t *km_get_table(int menu)
{
  function();
  another();
}

int mutt_parse_bind(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_parse_macro(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_parse_exec(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

void mutt_what_key(void)
{
  function();
  another();
}

void mutt_nocurses_error(const char *fmt, ...)
{
  function();
  another();
}

void *safe_calloc(size_t nmemb, size_t size)
{
  function();
  another();
}

void *safe_malloc(size_t siz)
{
  function();
  another();
}

void safe_realloc(void *ptr, size_t siz)
{
  function();
  another();
}

void safe_free(void *ptr) /* __SAFE_FREE_CHECKED__ */
{
  function();
  another();
}

int safe_fclose(FILE **f)
{
  function();
  another();
}

int safe_fsync_close(FILE **f)
{
  function();
  another();
}

char *safe_strdup(const char *s)
{
  function();
  another();
}

char *safe_strcat(char *d, size_t l, const char *s)
{
  function();
  another();
}

char *safe_strncat(char *d, size_t l, const char *s, size_t sl)
{
  function();
  another();
}

void mutt_str_replace(char **p, const char *s)
{
  function();
  another();
}

void mutt_str_adjust(char **p)
{
  function();
  another();
}

char *mutt_strlower(char *s)
{
  function();
  another();
}

const char *mutt_strchrnul(const char *s, char c)
{
  function();
  another();
}

void mutt_unlink(const char *s)
{
  function();
  another();
}

int mutt_copy_bytes(FILE *in, FILE *out, size_t size)
{
  function();
  another();
}

int mutt_copy_stream(FILE *fin, FILE *fout)
{
  function();
  another();
}

static bool compare_stat(struct stat *osb, struct stat *nsb)
{
  function();
  another();
}

int safe_symlink(const char *oldpath, const char *newpath)
{
  function();
  another();
}

int safe_rename(const char *src, const char *target)
{
  function();
  another();
}

static int mkwrapdir(const char *path, char *newfile, size_t nflen, char *newdir, size_t ndlen)
{
  function();
  another();
}

int mutt_rmtree(const char *path)
{
  function();
  another();
}

static int put_file_in_place(const char *path, const char *safe_file, const char *safe_dir)
{
  function();
  another();
}

int safe_open(const char *path, int flags)
{
  function();
  another();
}

void mutt_sanitize_filename(char *f, short slash)
{
  function();
  another();
}

int mutt_rx_sanitize_string(char *dest, size_t destlen, const char *src)
{
  function();
  another();
}

char *mutt_read_line(char *s, size_t *size, FILE *fp, int *line, int flags)
{
  function();
  another();
}

char *mutt_substrcpy(char *dest, const char *beg, const char *end, size_t destlen)
{
  function();
  another();
}

char *mutt_substrdup(const char *begin, const char *end)
{
  function();
  another();
}

size_t mutt_quote_filename(char *d, size_t l, const char *f)
{
  function();
  another();
}

int mutt_strcmp(const char *a, const char *b)
{
  function();
  another();
}

int mutt_strcasecmp(const char *a, const char *b)
{
  function();
  another();
}

int mutt_strncmp(const char *a, const char *b, size_t l)
{
  function();
  another();
}

int mutt_strncasecmp(const char *a, const char *b, size_t l)
{
  function();
  another();
}

size_t mutt_strlen(const char *a)
{
  function();
  another();
}

int mutt_strcoll(const char *a, const char *b)
{
  function();
  another();
}

const char *mutt_stristr(const char *haystack, const char *needle)
{
  function();
  another();
}

char *mutt_skip_whitespace(char *p)
{
  function();
  another();
}

void mutt_remove_trailing_ws(char *s)
{
  function();
  another();
}

char *mutt_concatn_path(char *dst, size_t dstlen, const char *dir,
                        size_t dirlen, const char *fname, size_t fnamelen)
{
  function();
  another();
}

char *mutt_concat_path(char *d, const char *dir, const char *fname, size_t l)
{
  function();
  another();
}

const char *mutt_basename(const char *f)
{
  function();
  another();
}

const char *mutt_strsysexit(int e)
{
  function();
  another();
}

void mutt_debug(int level, const char *fmt, ...)
{
  function();
  another();
}

static int mutt_atol(const char *str, long *dst)
{
  function();
  another();
}

int mutt_atos(const char *str, short *dst)
{
  function();
  another();
}

int mutt_atoi(const char *str, int *dst)
{
  function();
  another();
}

int mutt_inbox_cmp(const char *a, const char *b)
{
  function();
  another();
}

char *strfcpy(char *dest, const char *src, size_t dlen)
{
  function();
  another();
}

int mutt_mkdir(const char *path, mode_t mode)
{
  function();
  another();
}

void mutt_exit(int code)
{
  function();
  another();
}

static void usage(void)
{
  function();
  another();
}

static void start_curses(void)
{
  function();
  another();
}

int main(int argc, char **argv, char **environ)
{
  function();
  another();
}

static int mbox_lock_mailbox(CONTEXT *ctx, int excl, int retry)
{
  function();
  another();
}

static void mbox_unlock_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int mmdf_parse_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int mbox_parse_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int mbox_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int mbox_open_mailbox_append(CONTEXT *ctx, int flags)
{
  function();
  another();
}

static int mbox_close_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int mbox_open_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

static int mbox_close_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int mbox_commit_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int mmdf_commit_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int mbox_open_new_message(MESSAGE *msg, CONTEXT *dest, HEADER *hdr)
{
  function();
  another();
}

static int strict_addrcmp(const ADDRESS *a, const ADDRESS *b)
{
  function();
  another();
}

static int strict_cmp_lists(const LIST *a, const LIST *b)
{
  function();
  another();
}

static int strict_cmp_envelopes(const ENVELOPE *e1, const ENVELOPE *e2)
{
  function();
  another();
}

static int strict_cmp_parameters(const PARAMETER *p1, const PARAMETER *p2)
{
  function();
  another();
}

static int strict_cmp_bodies(const BODY *b1, const BODY *b2)
{
  function();
  another();
}

int mbox_strict_cmp_headers(const HEADER *h1, const HEADER *h2)
{
  function();
  another();
}

static int reopen_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int mbox_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static bool mbox_has_new(CONTEXT *ctx)
{
  function();
  another();
}

void mbox_reset_atime(CONTEXT *ctx, struct stat *st)
{
  function();
  another();
}

static int mbox_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

int mbox_check_empty(const char *path)
{
  function();
  another();
}

void mutt_set_charset(char *charset)
{
  function();
  another();
}

static size_t utf8rtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *_ps)
{
  function();
  another();
}

static size_t wcrtomb_iconv(char *s, wchar_t wc, iconv_t cd)
{
  function();
  another();
}

size_t wcrtomb(char *s, wchar_t wc, mbstate_t *ps)
{
  function();
  another();
}

static size_t mbrtowc_iconv(wchar_t *pwc, const char *s, size_t n, mbstate_t *ps, iconv_t cd)
{
  function();
  another();
}

size_t mbrtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *ps)
{
  function();
  another();
}

int iswprint(wint_t wc)
{
  function();
  another();
}

int iswspace(wint_t wc)
{
  function();
  another();
}

static wint_t towupper_ucs(wint_t x)
{
  function();
  another();
}

static int iswupper_ucs(wint_t x)
{
  function();
  another();
}

static wint_t towlower_ucs(wint_t x)
{
  function();
  another();
}

static int iswalnum_ucs(wint_t wc)
{
  function();
  another();
}

static int iswalpha_ucs(wint_t wc)
{
  function();
  another();
}

wint_t towupper(wint_t wc)
{
  function();
  another();
}

wint_t towlower(wint_t wc)
{
  function();
  another();
}

int iswalnum(wint_t wc)
{
  function();
  another();
}

int iswalpha(wint_t wc)
{
  function();
  another();
}

int iswupper(wint_t wc)
{
  function();
  another();
}

static int wcwidth_ja(wchar_t ucs)
{
  function();
  another();
}

int wcwidth(wchar_t wc)
{
  function();
  another();
}

wchar_t replacement_char(void)
{
  function();
  another();
}

bool is_display_corrupting_utf8(wchar_t wc)
{
  function();
  another();
}

int mutt_filter_unprintable(char **s)
{
  function();
  another();
}

void md5_init_ctx(struct md5_ctx *ctx)
{
  function();
  another();
}

static inline void set_uint32(char *cp, md5_uint32 v)
{
  function();
  another();
}

void *md5_read_ctx(const struct md5_ctx *ctx, void *resbuf)
{
  function();
  another();
}

void *md5_finish_ctx(struct md5_ctx *ctx, void *resbuf)
{
  function();
  another();
}

int md5_stream(FILE *stream, void *resblock)
{
  function();
  another();
}

void *md5_buffer(const char *buffer, size_t len, void *resblock)
{
  function();
  another();
}

void md5_process_bytes(const void *buffer, size_t len, struct md5_ctx *ctx)
{
  function();
  another();
}

void md5_process_block(const void *buffer, size_t len, struct md5_ctx *ctx)
{
  function();
  another();
}

int main(void)
{
  function();
  another();
}

static int get_color(int index, unsigned char *s)
{
  function();
  another();
}

static void print_enriched_string(int index, int attr, unsigned char *s, int do_color)
{
  function();
  another();
}

static void menu_make_entry(char *s, int l, MUTTMENU *menu, int i)
{
  function();
  another();
}

static void menu_pad_string(MUTTMENU *menu, char *s, size_t n)
{
  function();
  another();
}

void menu_redraw_full(MUTTMENU *menu)
{
  function();
  another();
}

void menu_redraw_status(MUTTMENU *menu)
{
  function();
  another();
}

void menu_redraw_sidebar(MUTTMENU *menu)
{
  function();
  another();
}

void menu_redraw_index(MUTTMENU *menu)
{
  function();
  another();
}

void menu_redraw_motion(MUTTMENU *menu)
{
  function();
  another();
}

void menu_redraw_current(MUTTMENU *menu)
{
  function();
  another();
}

static void menu_redraw_prompt(MUTTMENU *menu)
{
  function();
  another();
}

void menu_check_recenter(MUTTMENU *menu)
{
  function();
  another();
}

static void menu_jump(MUTTMENU *menu)
{
  function();
  another();
}

void menu_next_line(MUTTMENU *menu)
{
  function();
  another();
}

void menu_prev_line(MUTTMENU *menu)
{
  function();
  another();
}

static void menu_length_jump(MUTTMENU *menu, int jumplen)
{
  function();
  another();
}

void menu_next_page(MUTTMENU *menu)
{
  function();
  another();
}

void menu_prev_page(MUTTMENU *menu)
{
  function();
  another();
}

void menu_half_down(MUTTMENU *menu)
{
  function();
  another();
}

void menu_half_up(MUTTMENU *menu)
{
  function();
  another();
}

void menu_top_page(MUTTMENU *menu)
{
  function();
  another();
}

void menu_bottom_page(MUTTMENU *menu)
{
  function();
  another();
}

void menu_middle_page(MUTTMENU *menu)
{
  function();
  another();
}

void menu_first_entry(MUTTMENU *menu)
{
  function();
  another();
}

void menu_last_entry(MUTTMENU *menu)
{
  function();
  another();
}

void menu_current_top(MUTTMENU *menu)
{
  function();
  another();
}

void menu_current_middle(MUTTMENU *menu)
{
  function();
  another();
}

void menu_current_bottom(MUTTMENU *menu)
{
  function();
  another();
}

static void menu_next_entry(MUTTMENU *menu)
{
  function();
  another();
}

static void menu_prev_entry(MUTTMENU *menu)
{
  function();
  another();
}

static int default_color(int i)
{
  function();
  another();
}

static int menu_search_generic(MUTTMENU *m, regex_t *re, int n)
{
  function();
  another();
}

void mutt_menu_init(void)
{
  function();
  another();
}

void mutt_menu_destroy(MUTTMENU **p)
{
  function();
  another();
}

static MUTTMENU *get_current_menu(void)
{
  function();
  another();
}

void mutt_push_current_menu(MUTTMENU *menu)
{
  function();
  another();
}

void mutt_pop_current_menu(MUTTMENU *menu)
{
  function();
  another();
}

void mutt_set_current_menu_redraw(int redraw)
{
  function();
  another();
}

void mutt_set_current_menu_redraw_full(void)
{
  function();
  another();
}

void mutt_set_menu_redraw_full(int menu_type)
{
  function();
  another();
}

void mutt_current_menu_redraw()
{
  function();
  another();
}

static int menu_search(MUTTMENU *menu, int op)
{
  function();
  another();
}

static int menu_dialog_translate_op(int i)
{
  function();
  another();
}

static int menu_dialog_dokey(MUTTMENU *menu, int *ip)
{
  function();
  another();
}

int menu_redraw(MUTTMENU *menu)
{
  function();
  another();
}

int mutt_menu_loop(MUTTMENU *menu)
{
  function();
  another();
}

static inline struct mh_data *mh_data(CONTEXT *ctx)
{
  function();
  another();
}

static void mhs_alloc(struct mh_sequences *mhs, int i)
{
  function();
  another();
}

static void mhs_free_sequences(struct mh_sequences *mhs)
{
  function();
  another();
}

static short mhs_check(struct mh_sequences *mhs, int i)
{
  function();
  another();
}

static short mhs_set(struct mh_sequences *mhs, int i, short f)
{
  function();
  another();
}

static int mh_read_token(char *t, int *first, int *last)
{
  function();
  another();
}

static int mh_read_sequences(struct mh_sequences *mhs, const char *path)
{
  function();
  another();
}

static inline mode_t mh_umask(CONTEXT *ctx)
{
  function();
  another();
}

static int mh_sequences_changed(BUFFY *b)
{
  function();
  another();
}

static int mh_already_notified(BUFFY *b, int msgno)
{
  function();
  another();
}

static bool mh_valid_message(const char *s)
{
  function();
  another();
}

int mh_buffy(BUFFY *mailbox, int check_stats)
{
  function();
  another();
}

static int mh_mkstemp(CONTEXT *dest, FILE **fp, char **tgt)
{
  function();
  another();
}

static void mhs_write_one_sequence(FILE *fp, struct mh_sequences *mhs, short f,
                                   const char *tag)
{
  function();
  another();
}

static void mh_update_sequences(CONTEXT *ctx)
{
  function();
  another();
}

static void mh_sequences_add_one(CONTEXT *ctx, int n, short unseen, short flagged, short replied)
{
  function();
  another();
}

static void mh_update_maildir(struct maildir *md, struct mh_sequences *mhs)
{
  function();
  another();
}

static void maildir_free_entry(struct maildir **md)
{
  function();
  another();
}

static void maildir_free_maildir(struct maildir **md)
{
  function();
  another();
}

void maildir_parse_flags(HEADER *h, const char *path)
{
  function();
  another();
}

static void maildir_update_mtime(CONTEXT *ctx)
{
  function();
  another();
}

static int maildir_parse_dir(CONTEXT *ctx, struct maildir ***last,
                             const char *subdir, int *count, progress_t *progress)
{
  function();
  another();
}

static bool maildir_add_to_context(CONTEXT *ctx, struct maildir *md)
{
  function();
  another();
}

static int maildir_move_to_context(CONTEXT *ctx, struct maildir **md)
{
  function();
  another();
}

static size_t maildir_hcache_keylen(const char *fn)
{
  function();
  another();
}

static int md_cmp_inode(struct maildir *a, struct maildir *b)
{
  function();
  another();
}

static int md_cmp_path(struct maildir *a, struct maildir *b)
{
  function();
  another();
}

static struct maildir *maildir_merge_lists(struct maildir *left, struct maildir *right,
                                           int (*cmp)(struct maildir *, struct maildir *))
{
  function();
  another();
}

static struct maildir *maildir_ins_sort(struct maildir *list,
                                        int (*cmp)(struct maildir *, struct maildir *))
{
  function();
  another();
}

static struct maildir *maildir_sort(struct maildir *list, size_t len,
                                    int (*cmp)(struct maildir *, struct maildir *))
{
  function();
  another();
}

static void mh_sort_natural(CONTEXT *ctx, struct maildir **md)
{
  function();
  another();
}

static struct maildir *skip_duplicates(struct maildir *p, struct maildir **last)
{
  function();
  another();
}

static void maildir_delayed_parsing(CONTEXT *ctx, struct maildir **md, progress_t *progress)
{
  function();
  another();
}

static int mh_close_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int mh_read_dir(CONTEXT *ctx, const char *subdir)
{
  function();
  another();
}

static int maildir_read_dir(CONTEXT *ctx)
{
  function();
  another();
}

static int maildir_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int maildir_open_mailbox_append(CONTEXT *ctx, int flags)
{
  function();
  another();
}

static int mh_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int mh_open_mailbox_append(CONTEXT *ctx, int flags)
{
  function();
  another();
}

static int mh_open_new_message(MESSAGE *msg, CONTEXT *dest, HEADER *hdr)
{
  function();
  another();
}

static int ch_compar(const void *a, const void *b)
{
  function();
  another();
}

void maildir_flags(char *dest, size_t destlen, HEADER *hdr)
{
  function();
  another();
}

static int maildir_mh_open_message(CONTEXT *ctx, MESSAGE *msg, int msgno, int is_maildir)
{
  function();
  another();
}

static int maildir_open_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

static int mh_open_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

static int mh_close_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int maildir_open_new_message(MESSAGE *msg, CONTEXT *dest, HEADER *hdr)
{
  function();
  another();
}

static int _maildir_commit_message(CONTEXT *ctx, MESSAGE *msg, HEADER *hdr)
{
  function();
  another();
}

static int maildir_commit_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int _mh_commit_message(CONTEXT *ctx, MESSAGE *msg, HEADER *hdr, short updseq)
{
  function();
  another();
}

static int mh_commit_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int mh_rewrite_message(CONTEXT *ctx, int msgno)
{
  function();
  another();
}

static int mh_sync_message(CONTEXT *ctx, int msgno)
{
  function();
  another();
}

static int maildir_sync_message(CONTEXT *ctx, int msgno)
{
  function();
  another();
}

int mh_sync_mailbox_message(CONTEXT *ctx, int msgno, header_cache_t *hc)
{
  function();
  another();
}

int mh_sync_mailbox_message(CONTEXT *ctx, int msgno)
{
  function();
  another();
}

static char *maildir_canon_filename(char *dest, const char *src, size_t l)
{
  function();
  another();
}

static void maildir_update_tables(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int maildir_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int mh_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int mh_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

void maildir_update_flags(CONTEXT *ctx, HEADER *o, HEADER *n)
{
  function();
  another();
}

static FILE *_maildir_open_find_message(const char *folder, const char *unique,
                                        const char *subfolder, char **newname)
{
  function();
  another();
}

int maildir_check_empty(const char *path)
{
  function();
  another();
}

int mh_check_empty(const char *path)
{
  function();
  another();
}

bool mx_is_maildir(const char *path)
{
  function();
  another();
}

bool mx_is_mh(const char *path)
{
  function();
  another();
}

static bool check_idn(char *domain)
{
  function();
  another();
}

static int mbox_to_udomain(const char *mbx, char **user, char **domain)
{
  function();
  another();
}

static int addr_is_local(ADDRESS *a)
{
  function();
  another();
}

static int addr_is_intl(ADDRESS *a)
{
  function();
  another();
}

static void set_local_mailbox(ADDRESS *a, char *local_mailbox)
{
  function();
  another();
}

static void set_intl_mailbox(ADDRESS *a, char *intl_mailbox)
{
  function();
  another();
}

static char *intl_to_local(char *orig_user, char *orig_domain, int flags)
{
  function();
  another();
}

static char *local_to_intl(char *user, char *domain)
{
  function();
  another();
}

int mutt_addrlist_to_intl(ADDRESS *a, char **err)
{
  function();
  another();
}

int mutt_addrlist_to_local(ADDRESS *a)
{
  function();
  another();
}

const char *mutt_addr_for_display(ADDRESS *a)
{
  function();
  another();
}

void mutt_env_to_local(ENVELOPE *e)
{
  function();
  another();
}

int mutt_env_to_intl(ENVELOPE *env, char **tag, char **err)
{
  function();
  another();
}

void mutt_adv_mktemp(char *s, size_t l)
{
  function();
  another();
}

int mutt_copy_body(FILE *fp, BODY **tgt, BODY *src)
{
  function();
  another();
}

void mutt_free_body(BODY **p)
{
  function();
  another();
}

void mutt_free_parameter(PARAMETER **p)
{
  function();
  another();
}

void mutt_push_list(LIST **head, const char *data)
{
  function();
  another();
}

bool mutt_pop_list(LIST **head)
{
  function();
  another();
}

const char *mutt_front_list(LIST *head)
{
  function();
  another();
}

int mutt_remove_from_rx_list(RX_LIST **l, const char *str)
{
  function();
  another();
}

void mutt_free_list(LIST **list)
{
  function();
  another();
}

void mutt_free_header(HEADER **h)
{
  function();
  another();
}

bool mutt_matches_list(const char *s, LIST *t)
{
  function();
  another();
}

int mutt_matches_ignore(const char *s)
{
  function();
  another();
}

char *mutt_expand_path(char *s, size_t slen)
{
  function();
  another();
}

char *_mutt_expand_path(char *s, size_t slen, int rx)
{
  function();
  another();
}

char *mutt_gecos_name(char *dest, size_t destlen, struct passwd *pw)
{
  function();
  another();
}

char *mutt_get_parameter(const char *s, PARAMETER *p)
{
  function();
  another();
}

void mutt_set_parameter(const char *attribute, const char *value, PARAMETER **p)
{
  function();
  another();
}

void mutt_delete_parameter(const char *attribute, PARAMETER **p)
{
  function();
  another();
}

bool mutt_needs_mailcap(BODY *m)
{
  function();
  another();
}

bool mutt_is_text_part(BODY *b)
{
  function();
  another();
}

void mutt_free_envelope(ENVELOPE **p)
{
  function();
  another();
}

void mutt_merge_envelopes(ENVELOPE *base, ENVELOPE **extra)
{
  function();
  another();
}

static void mutt_randbuf(void *out, size_t len)
{
  function();
  another();
}

void mutt_rand_base32(void *out, size_t len)
{
  function();
  another();
}

uint32_t mutt_rand32(void)
{
  function();
  another();
}

uint64_t mutt_rand64(void)
{
  function();
  another();
}

void _mutt_mktemp(char *s, size_t slen, const char *prefix, const char *suffix,
                  const char *src, int line)
{
  function();
  another();
}

void mutt_free_alias(ALIAS **p)
{
  function();
  another();
}

void mutt_pretty_mailbox(char *s, size_t buflen)
{
  function();
  another();
}

void mutt_pretty_size(char *s, size_t len, LOFF_T n)
{
  function();
  another();
}

void mutt_expand_file_fmt(char *dest, size_t destlen, const char *fmt, const char *src)
{
  function();
  another();
}

void mutt_expand_fmt(char *dest, size_t destlen, const char *fmt, const char *src)
{
  function();
  another();
}

int mutt_check_overwrite(const char *attname, const char *path, char *fname,
                         size_t flen, int *append, char **directory)
{
  function();
  another();
}

void mutt_save_path(char *d, size_t dsize, ADDRESS *a)
{
  function();
  another();
}

void mutt_safe_path(char *s, size_t l, ADDRESS *a)
{
  function();
  another();
}

char *mutt_apply_replace(char *dbuf, size_t dlen, char *sbuf, REPLACE_LIST *rlist)
{
  function();
  another();
}

void mutt_FormatString(char *dest,     /* output buffer */
                       size_t destlen, /* output buffer len */
                       size_t col, /* starting column (nonzero when called recursively) */
                       int cols,           /* maximum columns */
                       const char *src,    /* template string */
                       format_t *callback, /* callback for processing */
                       unsigned long data, /* callback data */
                       format_flag flags)  /* callback flags */
{
  function();
  another();
}

int mutt_save_confirm(const char *s, struct stat *st)
{
  function();
  another();
}

void state_prefix_putc(char c, STATE *s)
{
  function();
  another();
}

int state_printf(STATE *s, const char *fmt, ...)
{
  function();
  another();
}

void state_mark_attach(STATE *s)
{
  function();
  another();
}

void state_attach_puts(const char *t, STATE *s)
{
  function();
  another();
}

static int state_putwc(wchar_t wc, STATE *s)
{
  function();
  another();
}

int state_putws(const wchar_t *ws, STATE *s)
{
  function();
  another();
}

void mutt_sleep(short s)
{
  function();
  another();
}

time_t mutt_decrease_mtime(const char *f, struct stat *st)
{
  function();
  another();
}

void mutt_set_mtime(const char *from, const char *to)
{
  function();
  another();
}

void mutt_touch_atime(int f)
{
  function();
  another();
}

const char *mutt_make_version(void)
{
  function();
  another();
}

void mutt_free_regexp(REGEXP **pp)
{
  function();
  another();
}

void mutt_free_rx_list(RX_LIST **list)
{
  function();
  another();
}

void mutt_free_replace_list(REPLACE_LIST **list)
{
  function();
  another();
}

bool mutt_match_rx_list(const char *s, RX_LIST *l)
{
  function();
  another();
}

bool mutt_match_spam_list(const char *s, REPLACE_LIST *l, char *text, int textsize)
{
  function();
  another();
}

void mutt_encode_path(char *dest, size_t dlen, const char *src)
{
  function();
  another();
}

int mutt_set_xdg_path(const XDGType type, char *buf, size_t bufsize)
{
  function();
  another();
}

void mutt_get_parent_path(char *output, char *path, size_t olen)
{
  function();
  another();
}

static int _handle_panic(lua_State *l)
{
  function();
  another();
}

static int _handle_error(lua_State *l)
{
  function();
  another();
}

static int _lua_mutt_call(lua_State *l)
{
  function();
  another();
}

static int _lua_mutt_set(lua_State *l)
{
  function();
  another();
}

static int _lua_mutt_get(lua_State *l)
{
  function();
  another();
}

static int _lua_mutt_enter(lua_State *l)
{
  function();
  another();
}

static int _lua_mutt_message(lua_State *l)
{
  function();
  another();
}

static int _lua_mutt_error(lua_State *l)
{
  function();
  another();
}

static void _lua_expose_command(void *p, const struct command_t *cmd)
{
  function();
  another();
}

static int luaopen_mutt_decl(lua_State *l)
{
  function();
  another();
}

static void luaopen_mutt(lua_State *l)
{
  function();
  another();
}

static bool _lua_init(lua_State **l)
{
  function();
  another();
}

int mutt_lua_parse(BUFFER *tmp, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

int mutt_lua_source_file(BUFFER *tmp, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static void debug_print_filenames(notmuch_message_t *msg)
{
  function();
  another();
}

static void debug_print_tags(notmuch_message_t *msg)
{
  function();
  another();
}

static void url_free_tags(struct uri_tag *tags)
{
  function();
  another();
}

static bool url_parse_query(const char *url, char **filename, struct uri_tag **tags)
{
  function();
  another();
}

static void free_tag_list(struct nm_hdrtag **tag_list)
{
  function();
  another();
}

static void free_hdrdata(struct nm_hdrdata *data)
{
  function();
  another();
}

static void free_ctxdata(struct nm_ctxdata *data)
{
  function();
  another();
}

static struct nm_ctxdata *new_ctxdata(char *uri)
{
  function();
  another();
}

static int init_context(CONTEXT *ctx)
{
  function();
  another();
}

static char *header_get_id(HEADER *h)
{
  function();
  another();
}

static char *header_get_fullpath(HEADER *h, char *buf, size_t bufsz)
{
  function();
  another();
}

static struct nm_ctxdata *get_ctxdata(CONTEXT *ctx)
{
  function();
  another();
}

static int string_to_query_type(const char *str)
{
  function();
  another();
}

static bool query_window_check_timebase(const char *timebase)
{
  function();
  another();
}

static void query_window_reset(void)
{
  function();
  another();
}

static bool windowed_query_from_query(const char *query, char *buf, size_t bufsz)
{
  function();
  another();
}

static char *get_query_string(struct nm_ctxdata *data, int window)
{
  function();
  another();
}

static int get_limit(struct nm_ctxdata *data)
{
  function();
  another();
}

static int get_query_type(struct nm_ctxdata *data)
{
  function();
  another();
}

static const char *get_db_filename(struct nm_ctxdata *data)
{
  function();
  another();
}

static notmuch_database_t *do_database_open(const char *filename, int writable, int verbose)
{
  function();
  another();
}

static notmuch_database_t *get_db(struct nm_ctxdata *data, int writable)
{
  function();
  another();
}

static int release_db(struct nm_ctxdata *data)
{
  function();
  another();
}

static int db_trans_begin(struct nm_ctxdata *data)
{
  function();
  another();
}

static int db_trans_end(struct nm_ctxdata *data)
{
  function();
  another();
}

static int is_longrun(struct nm_ctxdata *data)
{
  function();
  another();
}

static int get_database_mtime(struct nm_ctxdata *data, time_t *mtime)
{
  function();
  another();
}

static void apply_exclude_tags(notmuch_query_t *query)
{
  function();
  another();
}

static notmuch_query_t *get_query(struct nm_ctxdata *data, int writable)
{
  function();
  another();
}

static void append_str_item(char **str, const char *item, int sep)
{
  function();
  another();
}

static int update_header_tags(HEADER *h, notmuch_message_t *msg)
{
  function();
  another();
}

static int update_message_path(HEADER *h, const char *path)
{
  function();
  another();
}

static char *get_folder_from_path(const char *path)
{
  function();
  another();
}

static void deinit_header(HEADER *h)
{
  function();
  another();
}

static char *nm2mutt_message_id(const char *id)
{
  function();
  another();
}

static int init_header(HEADER *h, const char *path, notmuch_message_t *msg)
{
  function();
  another();
}

static const char *get_message_last_filename(notmuch_message_t *msg)
{
  function();
  another();
}

static void progress_reset(CONTEXT *ctx)
{
  function();
  another();
}

static void progress_update(CONTEXT *ctx, notmuch_query_t *q)
{
  function();
  another();
}

static HEADER *get_mutt_header(CONTEXT *ctx, notmuch_message_t *msg)
{
  function();
  another();
}

static void append_message(CONTEXT *ctx, notmuch_query_t *q, notmuch_message_t *msg, int dedup)
{
  function();
  another();
}

static void append_replies(CONTEXT *ctx, notmuch_query_t *q, notmuch_message_t *top, int dedup)
{
  function();
  another();
}

static void append_thread(CONTEXT *ctx, notmuch_query_t *q, notmuch_thread_t *thread, int dedup)
{
  function();
  another();
}

static bool read_mesgs_query(CONTEXT *ctx, notmuch_query_t *q, int dedup)
{
  function();
  another();
}

static bool read_threads_query(CONTEXT *ctx, notmuch_query_t *q, int dedup, int limit)
{
  function();
  another();
}

static notmuch_message_t *get_nm_message(notmuch_database_t *db, HEADER *hdr)
{
  function();
  another();
}

static bool nm_message_has_tag(notmuch_message_t *msg, char *tag)
{
  function();
  another();
}

static int update_tags(notmuch_message_t *msg, const char *tags)
{
  function();
  another();
}

static int update_header_flags(CONTEXT *ctx, HEADER *hdr, const char *tags)
{
  function();
  another();
}

static int rename_maildir_filename(const char *old, char *newpath, size_t newsz, HEADER *h)
{
  function();
  another();
}

static int remove_filename(struct nm_ctxdata *data, const char *path)
{
  function();
  another();
}

static int rename_filename(struct nm_ctxdata *data, const char *old,
                           const char *new, HEADER *h)
{
  function();
  another();
}

static unsigned count_query(notmuch_database_t *db, const char *qstr)
{
  function();
  another();
}

char *nm_header_get_folder(HEADER *h)
{
  function();
  another();
}

char *nm_header_get_tags(HEADER *h)
{
  function();
  another();
}

char *nm_header_get_tags_transformed(HEADER *h)
{
  function();
  another();
}

char *nm_header_get_tag_transformed(char *tag, HEADER *h)
{
  function();
  another();
}

void nm_longrun_init(CONTEXT *ctx, int writable)
{
  function();
  another();
}

void nm_longrun_done(CONTEXT *ctx)
{
  function();
  another();
}

void nm_debug_check(CONTEXT *ctx)
{
  function();
  another();
}

int nm_read_entire_thread(CONTEXT *ctx, HEADER *h)
{
  function();
  another();
}

char *nm_uri_from_query(CONTEXT *ctx, char *buf, size_t bufsz)
{
  function();
  another();
}

bool nm_normalize_uri(char *new_uri, const char *orig_uri, size_t new_uri_sz)
{
  function();
  another();
}

void nm_query_window_forward(void)
{
  function();
  another();
}

void nm_query_window_backward(void)
{
  function();
  another();
}

int nm_modify_message_tags(CONTEXT *ctx, HEADER *hdr, char *buf)
{
  function();
  another();
}

int nm_update_filename(CONTEXT *ctx, const char *old, const char *new, HEADER *h)
{
  function();
  another();
}

int nm_nonctx_get_count(char *path, int *all, int *new)
{
  function();
  another();
}

char *nm_get_description(CONTEXT *ctx)
{
  function();
  another();
}

int nm_description_to_path(const char *desc, char *buf, size_t bufsz)
{
  function();
  another();
}

int nm_record_message(CONTEXT *ctx, char *path, HEADER *h)
{
  function();
  another();
}

int nm_get_all_tags(CONTEXT *ctx, char **tag_list, int *tag_count)
{
  function();
  another();
}

static int nm_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int nm_close_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int nm_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int nm_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int nm_open_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

static int nm_close_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int nm_commit_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int getnameinfo_err(int ret)
{
  function();
  another();
}

static int iptostring(const struct sockaddr *addr, socklen_t addrlen, char *out, unsigned outlen)
{
  function();
  another();
}

static int mutt_sasl_cb_log(void *context, int priority, const char *message)
{
  function();
  another();
}

static int mutt_sasl_start(void)
{
  function();
  another();
}

static int mutt_sasl_cb_authname(void *context, int id, const char **result, unsigned *len)
{
  function();
  another();
}

static int mutt_sasl_cb_pass(sasl_conn_t *conn, void *context, int id, sasl_secret_t **psecret)
{
  function();
  another();
}

static sasl_callback_t *mutt_sasl_get_callbacks(ACCOUNT *account)
{
  function();
  another();
}

int mutt_sasl_client_new(CONNECTION *conn, sasl_conn_t **saslconn)
{
  function();
  another();
}

int mutt_sasl_interact(sasl_interact_t *interaction)
{
  function();
  another();
}

static int mutt_sasl_conn_open(CONNECTION *conn)
{
  function();
  another();
}

static int mutt_sasl_conn_close(CONNECTION *conn)
{
  function();
  another();
}

static int mutt_sasl_conn_read(CONNECTION *conn, char *buf, size_t len)
{
  function();
  another();
}

static int mutt_sasl_conn_write(CONNECTION *conn, const char *buf, size_t len)
{
  function();
  another();
}

static int mutt_sasl_conn_poll(CONNECTION *conn)
{
  function();
  another();
}

void mutt_sasl_setup_conn(CONNECTION *conn, sasl_conn_t *saslconn)
{
  function();
  another();
}

void mutt_sasl_done(void)
{
  function();
  another();
}

size_t mutt_sasl_plain_msg(char *buf, size_t buflen, const char *cmd,
                           const char *authz, const char *user, const char *pass)
{
  function();
  another();
}

static int socket_preconnect(void)
{
  function();
  another();
}

int mutt_socket_open(CONNECTION *conn)
{
  function();
  another();
}

int mutt_socket_close(CONNECTION *conn)
{
  function();
  another();
}

int mutt_socket_write_d(CONNECTION *conn, const char *buf, int len, int dbg)
{
  function();
  another();
}

int mutt_socket_poll(CONNECTION *conn)
{
  function();
  another();
}

int mutt_socket_readchar(CONNECTION *conn, char *c)
{
  function();
  another();
}

int mutt_socket_readln_d(char *buf, size_t buflen, CONNECTION *conn, int dbg)
{
  function();
  another();
}

void mutt_socket_free(CONNECTION *conn)
{
  function();
  another();
}

static CONNECTION *socket_new_conn(void)
{
  function();
  another();
}

int raw_socket_close(CONNECTION *conn)
{
  function();
  another();
}

int raw_socket_read(CONNECTION *conn, char *buf, size_t len)
{
  function();
  another();
}

int raw_socket_write(CONNECTION *conn, const char *buf, size_t count)
{
  function();
  another();
}

int raw_socket_poll(CONNECTION *conn)
{
  function();
  another();
}

static int socket_connect(int fd, struct sockaddr *sa)
{
  function();
  another();
}

int raw_socket_open(CONNECTION *conn)
{
  function();
  another();
}

static int ssl_load_certificates(SSL_CTX *ctx)
{
  function();
  another();
}

static int ssl_set_verify_partial(SSL_CTX *ctx)
{
  function();
  another();
}

static int add_entropy(const char *file)
{
  function();
  another();
}

static void ssl_err(sslsockdata *data, int err)
{
  function();
  another();
}

static void ssl_dprint_err_stack(void)
{
  function();
  another();
}

static int ssl_passwd_cb(char *buf, int size, int rwflag, void *userdata)
{
  function();
  another();
}

static int ssl_socket_open_err(CONNECTION *conn)
{
  function();
  another();
}

static int ssl_socket_close(CONNECTION *conn)
{
  function();
  another();
}

static char *x509_get_part(X509_NAME *name, int nid)
{
  function();
  another();
}

static void x509_fingerprint(char *s, int l, X509 *cert, const EVP_MD *(*hashfunc)(void) )
{
  function();
  another();
}

static char *asn1time_to_string(ASN1_UTCTIME *tm)
{
  function();
  another();
}

static bool compare_certificates(X509 *cert, X509 *peercert,
                                 unsigned char *peermd, unsigned int peermdlen)
{
  function();
  another();
}

static bool check_certificate_expiration(X509 *peercert, bool silent)
{
  function();
  another();
}

static bool hostname_match(const char *hostname, const char *certname)
{
  function();
  another();
}

static int ssl_init(void)
{
  function();
  another();
}

static int ssl_socket_read(CONNECTION *conn, char *buf, size_t len)
{
  function();
  another();
}

static int ssl_socket_write(CONNECTION *conn, const char *buf, size_t len)
{
  function();
  another();
}

static void ssl_get_client_cert(sslsockdata *ssldata, CONNECTION *conn)
{
  function();
  another();
}

static int tls_close(CONNECTION *conn)
{
  function();
  another();
}

static bool check_certificate_cache(X509 *peercert)
{
  function();
  another();
}

static int check_certificate_file(X509 *peercert)
{
  function();
  another();
}

static int check_host(X509 *x509cert, const char *hostname, char *err, size_t errlen)
{
  function();
  another();
}

static int check_certificate_by_digest(X509 *peercert)
{
  function();
  another();
}

static int ssl_cache_trusted_cert(X509 *c)
{
  function();
  another();
}

static int interactive_check_cert(X509 *cert, int idx, int len, SSL *ssl, int allow_always)
{
  function();
  another();
}

static int ssl_verify_callback(int preverify_ok, X509_STORE_CTX *ctx)
{
  function();
  another();
}

static int ssl_negotiate(CONNECTION *conn, sslsockdata *ssldata)
{
  function();
  another();
}

static int ssl_socket_open(CONNECTION *conn)
{
  function();
  another();
}

int mutt_ssl_starttls(CONNECTION *conn)
{
  function();
  another();
}

int mutt_ssl_socket_setup(CONNECTION *conn)
{
  function();
  another();
}

static int tls_init(void)
{
  function();
  another();
}

static int tls_socket_read(CONNECTION *conn, char *buf, size_t len)
{
  function();
  another();
}

static int tls_socket_write(CONNECTION *conn, const char *buf, size_t len)
{
  function();
  another();
}

static int tls_socket_close(CONNECTION *conn)
{
  function();
  another();
}

static int tls_starttls_close(CONNECTION *conn)
{
  function();
  another();
}

static gnutls_certificate_status_t tls_verify_peers(gnutls_session_t tlsstate)
{
  function();
  another();
}

static void tls_fingerprint(gnutls_digest_algorithm_t algo, char *s, int l,
                            const gnutls_datum_t *data)
{
  function();
  another();
}

static int tls_check_stored_hostname(const gnutls_datum_t *cert, const char *hostname)
{
  function();
  another();
}

static int tls_compare_certificates(const gnutls_datum_t *peercert)
{
  function();
  another();
}

static int tls_check_preauth(const gnutls_datum_t *certdata,
                             gnutls_certificate_status_t certstat, const char *hostname,
                             int chainidx, int *certerr, int *savedcert)
{
  function();
  another();
}

static char *tls_make_date(time_t t, char *s, size_t len)
{
  function();
  another();
}

static int tls_check_one_certificate(const gnutls_datum_t *certdata,
                                     gnutls_certificate_status_t certstat,
                                     const char *hostname, int idx, int len)
{
  function();
  another();
}

static int tls_check_certificate(CONNECTION *conn)
{
  function();
  another();
}

static void tls_get_client_cert(CONNECTION *conn)
{
  function();
  another();
}

static int tls_set_priority(tlssockdata *data)
{
  function();
  another();
}

static int tls_set_priority(tlssockdata *data)
{
  function();
  another();
}

static int tls_negotiate(CONNECTION *conn)
{
  function();
  another();
}

static int tls_socket_open(CONNECTION *conn)
{
  function();
  another();
}

int mutt_ssl_socket_setup(CONNECTION *conn)
{
  function();
  another();
}

int mutt_ssl_starttls(CONNECTION *conn)
{
  function();
  another();
}

static int tunnel_socket_open(CONNECTION *conn)
{
  function();
  another();
}

static int tunnel_socket_close(CONNECTION *conn)
{
  function();
  another();
}

static int tunnel_socket_read(CONNECTION *conn, char *buf, size_t len)
{
  function();
  another();
}

static int tunnel_socket_write(CONNECTION *conn, const char *buf, size_t len)
{
  function();
  another();
}

static int tunnel_socket_poll(CONNECTION *conn)
{
  function();
  another();
}

int mutt_tunnel_socket_setup(CONNECTION *conn)
{
  function();
  another();
}

struct mx_ops *mx_get_ops(int magic)
{
  function();
  another();
}

static int invoke_dotlock(const char *path, int dummy, int flags, int retry)
{
  function();
  another();
}

static int dotlock_file(const char *path, int fd, int retry)
{
  function();
  another();
}

static int undotlock_file(const char *path, int fd)
{
  function();
  another();
}

int mx_lock_file(const char *path, int fd, int excl, int dot, int timeout)
{
  function();
  another();
}

int mx_unlock_file(const char *path, int fd, int dot)
{
  function();
  another();
}

static void mx_unlink_empty(const char *path)
{
  function();
  another();
}

bool mx_is_imap(const char *p)
{
  function();
  another();
}

bool mx_is_pop(const char *p)
{
  function();
  another();
}

bool mx_is_nntp(const char *p)
{
  function();
  another();
}

bool mx_is_notmuch(const char *p)
{
  function();
  another();
}

int mx_get_magic(const char *path)
{
  function();
  another();
}

int mx_set_magic(const char *s)
{
  function();
  another();
}

int mx_access(const char *path, int flags)
{
  function();
  another();
}

static int mx_open_mailbox_append(CONTEXT *ctx, int flags)
{
  function();
  another();
}

void mx_fastclose_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int trash_append(CONTEXT *ctx)
{
  function();
  another();
}

int mx_close_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

void mx_update_tables(CONTEXT *ctx, int committing)
{
  function();
  another();
}

int mx_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

int mx_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

int mx_commit_message(MESSAGE *msg, CONTEXT *ctx)
{
  function();
  another();
}

int mx_close_message(CONTEXT *ctx, MESSAGE **msg)
{
  function();
  another();
}

void mx_alloc_memory(CONTEXT *ctx)
{
  function();
  another();
}

void mx_update_context(CONTEXT *ctx, int new_messages)
{
  function();
  another();
}

int mx_check_empty(const char *path)
{
  function();
  another();
}

static NNTP_DATA *nntp_data_find(NNTP_SERVER *nserv, const char *group)
{
  function();
  another();
}

void nntp_acache_free(NNTP_DATA *nntp_data)
{
  function();
  another();
}

void nntp_data_free(void *data)
{
  function();
  another();
}

void nntp_newsrc_close(NNTP_SERVER *nserv)
{
  function();
  another();
}

void nntp_group_unread_stat(NNTP_DATA *nntp_data)
{
  function();
  another();
}

int nntp_newsrc_parse(NNTP_SERVER *nserv)
{
  function();
  another();
}

void nntp_newsrc_gen_entries(CONTEXT *ctx)
{
  function();
  another();
}

static int update_file(char *filename, char *buf)
{
  function();
  another();
}

int nntp_newsrc_update(NNTP_SERVER *nserv)
{
  function();
  another();
}

static void cache_expand(char *dst, size_t dstlen, ACCOUNT *acct, char *src)
{
  function();
  another();
}

void nntp_expand_path(char *line, size_t len, ACCOUNT *acct)
{
  function();
  another();
}

int nntp_add_group(char *line, void *data)
{
  function();
  another();
}

static int active_get_cache(NNTP_SERVER *nserv)
{
  function();
  another();
}

int nntp_active_save_cache(NNTP_SERVER *nserv)
{
  function();
  another();
}

static int nntp_hcache_namer(const char *path, char *dest, size_t destlen)
{
  function();
  another();
}

header_cache_t *nntp_hcache_open(NNTP_DATA *nntp_data)
{
  function();
  another();
}

void nntp_hcache_update(NNTP_DATA *nntp_data, header_cache_t *hc)
{
  function();
  another();
}

static int nntp_bcache_delete(const char *id, body_cache_t *bcache, void *data)
{
  function();
  another();
}

void nntp_bcache_update(NNTP_DATA *nntp_data)
{
  function();
  another();
}

void nntp_delete_group_cache(NNTP_DATA *nntp_data)
{
  function();
  another();
}

void nntp_clear_cache(NNTP_SERVER *nserv)
{
  function();
  another();
}

const char *nntp_format_str(char *dest, size_t destlen, size_t col, int cols, char op,
                            const char *src, const char *fmt, const char *ifstring,
                            const char *elsestring, unsigned long data, format_flag flags)
{
  function();
  another();
}

void nntp_article_status(CONTEXT *ctx, HEADER *hdr, char *group, anum_t anum)
{
  function();
  another();
}

void nntp_buffy(char *buf, size_t len)
{
  function();
  another();
}

static int nntp_connect_error(NNTP_SERVER *nserv)
{
  function();
  another();
}

static int nntp_capabilities(NNTP_SERVER *nserv)
{
  function();
  another();
}

static int nntp_attempt_features(NNTP_SERVER *nserv)
{
  function();
  another();
}

static int nntp_auth(NNTP_SERVER *nserv)
{
  function();
  another();
}

int nntp_open_connection(NNTP_SERVER *nserv)
{
  function();
  another();
}

static int nntp_query(NNTP_DATA *nntp_data, char *line, size_t linelen)
{
  function();
  another();
}

static int nntp_fetch_lines(NNTP_DATA *nntp_data, char *query, size_t qlen,
                            char *msg, int (*funct)(char *, void *), void *data)
{
  function();
  another();
}

static int fetch_description(char *line, void *data)
{
  function();
  another();
}

static int get_description(NNTP_DATA *nntp_data, char *wildmat, char *msg)
{
  function();
  another();
}

static void nntp_parse_xref(CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

static int fetch_tempfile(char *line, void *data)
{
  function();
  another();
}

static int fetch_numbers(char *line, void *data)
{
  function();
  another();
}

static int parse_overview_line(char *line, void *data)
{
  function();
  another();
}

static int nntp_fetch_headers(CONTEXT *ctx, void *hc, anum_t first, anum_t last, int restore)
{
  function();
  another();
}

static int nntp_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int nntp_fetch_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

static int nntp_close_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

int nntp_post(const char *msg)
{
  function();
  another();
}

static int nntp_group_poll(NNTP_DATA *nntp_data, int update_stat)
{
  function();
  another();
}

static int nntp_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int nntp_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int nntp_fastclose_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int nntp_date(NNTP_SERVER *nserv, time_t *now)
{
  function();
  another();
}

int nntp_active_fetch(NNTP_SERVER *nserv)
{
  function();
  another();
}

int nntp_check_new_groups(NNTP_SERVER *nserv)
{
  function();
  another();
}

int nntp_check_msgid(CONTEXT *ctx, const char *msgid)
{
  function();
  another();
}

static int fetch_children(char *line, void *data)
{
  function();
  another();
}

int nntp_check_children(CONTEXT *ctx, const char *msgid)
{
  function();
  another();
}

static int check_sig(const char *s, struct line_t *info, int n)
{
  function();
  another();
}

static void resolve_color(struct line_t *lineInfo, int n, int cnt, int flags,
                          int special, ansi_attr *a)
{
  function();
  another();
}

static void append_line(struct line_t *lineInfo, int n, int cnt)
{
  function();
  another();
}

static void new_class_color(struct q_class_t *class, int *q_level)
{
  function();
  another();
}

static void shift_class_colors(struct q_class_t *QuoteList,
                               struct q_class_t *new_class, int index, int *q_level)
{
  function();
  another();
}

static void cleanup_quote(struct q_class_t **QuoteList)
{
  function();
  another();
}

static struct q_class_t *classify_quote(struct q_class_t **QuoteList, const char *qptr,
                                        int length, int *force_redraw, int *q_level)
{
  function();
  another();
}

static int check_attachment_marker(char *p)
{
  function();
  another();
}

static void resolve_types(char *buf, char *raw, struct line_t *lineInfo, int n,
                          int last, struct q_class_t **QuoteList, int *q_level,
                          int *force_redraw, int q_classify)
{
  function();
  another();
}

static int is_ansi(unsigned char *buf)
{
  function();
  another();
}

static int grok_ansi(unsigned char *buf, int pos, ansi_attr *a)
{
  function();
  another();
}

static int trim_incomplete_mbyte(unsigned char *buf, size_t len)
{
  function();
  another();
}

static int fill_buffer(FILE *f, LOFF_T *last_pos, LOFF_T offset, unsigned char **buf,
                       unsigned char **fmt, size_t *blen, int *buf_ready)
{
  function();
  another();
}

static int format_line(struct line_t **lineInfo, int n, unsigned char *buf,
                       int flags, ansi_attr *pa, int cnt, int *pspace, int *pvch,
                       int *pcol, int *pspecial, mutt_window_t *pager_window)
{
  function();
  another();
}

static int display_line(FILE *f, LOFF_T *last_pos, struct line_t **lineInfo,
                        int n, int *last, int *max, int flags,
                        struct q_class_t **QuoteList, int *q_level, int *force_redraw,
                        regex_t *SearchRE, mutt_window_t *pager_window)
{
  function();
  another();
}

static int up_n_lines(int nlines, struct line_t *info, int cur, int hiding)
{
  function();
  another();
}

void mutt_clear_pager_position(void)
{
  function();
  another();
}

static void pager_menu_redraw(MUTTMENU *pager_menu)
{
  function();
  another();
}

int mutt_pager(const char *banner, const char *fname, int flags, pager_t *extra)
{
  function();
  another();
}

char *mutt_read_rfc822_line(FILE *f, char *line, size_t *linelen)
{
  function();
  another();
}

static LIST *parse_references(char *s, int in_reply_to)
{
  function();
  another();
}

int mutt_check_encoding(const char *c)
{
  function();
  another();
}

static PARAMETER *parse_parameters(const char *s)
{
  function();
  another();
}

int mutt_check_mime_type(const char *s)
{
  function();
  another();
}

void mutt_parse_content_type(char *s, BODY *ct)
{
  function();
  another();
}

static void parse_content_disposition(const char *s, BODY *ct)
{
  function();
  another();
}

void mutt_parse_part(FILE *fp, BODY *b)
{
  function();
  another();
}

static const char *uncomment_timezone(char *buf, size_t buflen, const char *tz)
{
  function();
  another();
}

time_t mutt_parse_date(const char *s, HEADER *h)
{
  function();
  another();
}

char *mutt_extract_message_id(const char *s, const char **saveptr)
{
  function();
  another();
}

void mutt_parse_mime_message(CONTEXT *ctx, HEADER *cur)
{
  function();
  another();
}

int mutt_parse_rfc822_line(ENVELOPE *e, HEADER *hdr, char *line, char *p,
                           short user_hdrs, short weed, short do_2047, LIST **lastp)
{
  function();
  another();
}

static bool count_body_parts_check(LIST **checklist, BODY *b, bool dflt)
{
  function();
  another();
}

static int count_body_parts(BODY *body, int flags)
{
  function();
  another();
}

int mutt_count_body_parts(CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

static bool eat_regexp(pattern_t *pat, BUFFER *s, BUFFER *err)
{
  function();
  another();
}

static const char *get_offset(struct tm *tm, const char *s, int sign)
{
  function();
  another();
}

static const char *get_date(const char *s, struct tm *t, BUFFER *err)
{
  function();
  another();
}

static const char *parse_date_range(const char *pc, struct tm *min, struct tm *max,
                                    int haveMin, struct tm *baseMin, BUFFER *err)
{
  function();
  another();
}

static void adjust_date_range(struct tm *min, struct tm *max)
{
  function();
  another();
}

static bool eat_date(pattern_t *pat, BUFFER *s, BUFFER *err)
{
  function();
  another();
}

static bool eat_range(pattern_t *pat, BUFFER *s, BUFFER *err)
{
  function();
  another();
}

static int report_regerror(int regerr, regex_t *preg, BUFFER *err)
{
  function();
  another();
}

static bool is_context_available(BUFFER *s, regmatch_t pmatch[], int kind, BUFFER *err)
{
  function();
  another();
}

static int scan_range_num(BUFFER *s, regmatch_t pmatch[], int group, int kind)
{
  function();
  another();
}

static int scan_range_slot(BUFFER *s, regmatch_t pmatch[], int grp, int side, int kind)
{
  function();
  another();
}

static void order_range(pattern_t *pat)
{
  function();
  another();
}

static int eat_range_by_regexp(pattern_t *pat, BUFFER *s, int kind, BUFFER *err)
{
  function();
  another();
}

static bool eat_message_range(pattern_t *pat, BUFFER *s, BUFFER *err)
{
  function();
  another();
}

int mutt_which_case(const char *s)
{
  function();
  another();
}

static int patmatch(const pattern_t *pat, const char *buf)
{
  function();
  another();
}

static int msg_search(CONTEXT *ctx, pattern_t *pat, int msgno)
{
  function();
  another();
}

static const struct pattern_flags *lookup_tag(char tag)
{
  function();
  another();
}

static /* const */ char *find_matching_paren(/* const */ char *s)
{
  function();
  another();
}

void mutt_pattern_free(pattern_t **pat)
{
  function();
  another();
}

pattern_t *mutt_pattern_comp(/* const */ char *s, int flags, BUFFER *err)
{
  function();
  another();
}

static bool perform_and(pattern_t *pat, pattern_exec_flag flags, CONTEXT *ctx,
                        HEADER *hdr, pattern_cache_t *cache)
{
  function();
  another();
}

static int perform_or(struct pattern_t *pat, pattern_exec_flag flags,
                      CONTEXT *ctx, HEADER *hdr, pattern_cache_t *cache)
{
  function();
  another();
}

static int match_adrlist(pattern_t *pat, int match_personal, int n, ...)
{
  function();
  another();
}

static bool match_reference(pattern_t *pat, LIST *refs)
{
  function();
  another();
}

int mutt_is_list_recipient(int alladdr, ADDRESS *a1, ADDRESS *a2)
{
  function();
  another();
}

int mutt_is_list_cc(int alladdr, ADDRESS *a1, ADDRESS *a2)
{
  function();
  another();
}

static int match_user(int alladdr, ADDRESS *a1, ADDRESS *a2)
{
  function();
  another();
}

static int match_threadcomplete(struct pattern_t *pat, pattern_exec_flag flags,
                                CONTEXT *ctx, THREAD *t, int left, int up,
                                int right, int down)
{
  function();
  another();
}

static void set_pattern_cache_value(int *cache_entry, int value)
{
  function();
  another();
}

static int get_pattern_cache_value(int cache_entry)
{
  function();
  another();
}

static int is_pattern_cache_set(int cache_entry)
{
  function();
  another();
}

int mutt_pattern_exec(struct pattern_t *pat, pattern_exec_flag flags,
                      CONTEXT *ctx, HEADER *h, pattern_cache_t *cache)
{
  function();
  another();
}

static void quote_simple(char *tmp, size_t len, const char *p)
{
  function();
  another();
}

void mutt_check_simple(char *s, size_t len, const char *simple)
{
  function();
  another();
}

static THREAD *top_of_thread(HEADER *h)
{
  function();
  another();
}

bool mutt_limit_current_thread(HEADER *h)
{
  function();
  another();
}

int mutt_pattern_func(int op, char *prompt)
{
  function();
  another();
}

int mutt_search_command(int cur, int op)
{
  function();
  another();
}

void pgp_void_passphrase(void)
{
  function();
  another();
}

int pgp_valid_passphrase(void)
{
  function();
  another();
}

bool pgp_use_gpg_agent(void)
{
  function();
  another();
}

static pgp_key_t _pgp_parent(pgp_key_t k)
{
  function();
  another();
}

char *pgp_long_keyid(pgp_key_t k)
{
  function();
  another();
}

char *pgp_short_keyid(pgp_key_t k)
{
  function();
  another();
}

char *pgp_keyid(pgp_key_t k)
{
  function();
  another();
}

char *_pgp_keyid(pgp_key_t k)
{
  function();
  another();
}

static char *pgp_fingerprint(pgp_key_t k)
{
  function();
  another();
}

char *pgp_fpr_or_lkeyid(pgp_key_t k)
{
  function();
  another();
}

static int pgp_copy_checksig(FILE *fpin, FILE *fpout)
{
  function();
  another();
}

static int pgp_check_decryption_okay(FILE *fpin)
{
  function();
  another();
}

static void pgp_copy_clearsigned(FILE *fpin, STATE *s, char *charset)
{
  function();
  another();
}

int pgp_application_pgp_handler(BODY *m, STATE *s)
{
  function();
  another();
}

static int pgp_check_traditional_one_body(FILE *fp, BODY *b, int tagged_only)
{
  function();
  another();
}

int pgp_check_traditional(FILE *fp, BODY *b, int tagged_only)
{
  function();
  another();
}

int pgp_verify_one(BODY *sigbdy, STATE *s, const char *tempfile)
{
  function();
  another();
}

static void pgp_extract_keys_from_attachment(FILE *fp, BODY *top)
{
  function();
  another();
}

void pgp_extract_keys_from_attachment_list(FILE *fp, int tag, BODY *top)
{
  function();
  another();
}

static BODY *pgp_decrypt_part(BODY *a, STATE *s, FILE *fpout, BODY *p)
{
  function();
  another();
}

int pgp_decrypt_mime(FILE *fpin, FILE **fpout, BODY *b, BODY **cur)
{
  function();
  another();
}

int pgp_encrypted_handler(BODY *a, STATE *s)
{
  function();
  another();
}

char *pgp_find_keys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

int pgp_send_menu(HEADER *msg)
{
  function();
  another();
}

static void print_usage(const char *progname)
{
  function();
  another();
}

int main(int argc, char **argv)
{
  function();
  another();
}

static const char *_mutt_fmt_pgp_command(char *dest, size_t destlen, size_t col,
                                         int cols, char op, const char *src,
                                         const char *prefix, const char *ifstring,
                                         const char *elsestring,
                                         unsigned long data, format_flag flags)
{
  function();
  another();
}

static void mutt_pgp_command(char *d, size_t dlen,
                             struct pgp_command_context *cctx, const char *fmt)
{
  function();
  another();
}

static pid_t pgp_invoke(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                        int pgpoutfd, int pgperrfd, short need_passphrase,
                        const char *fname, const char *sig_fname,
                        const char *signas, const char *ids, const char *format)
{
  function();
  another();
}

pid_t pgp_invoke_decode(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                        int pgpoutfd, int pgperrfd, const char *fname, short need_passphrase)
{
  function();
  another();
}

pid_t pgp_invoke_verify(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                        int pgpoutfd, int pgperrfd, const char *fname, const char *sig_fname)
{
  function();
  another();
}

pid_t pgp_invoke_decrypt(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                         int pgpoutfd, int pgperrfd, const char *fname)
{
  function();
  another();
}

pid_t pgp_invoke_sign(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                      int pgpoutfd, int pgperrfd, const char *fname)
{
  function();
  another();
}

pid_t pgp_invoke_encrypt(FILE **pgpin, FILE **pgpout, FILE **pgperr,
                         int pgpinfd, int pgpoutfd, int pgperrfd,
                         const char *fname, const char *uids, int sign)
{
  function();
  another();
}

pid_t pgp_invoke_traditional(FILE **pgpin, FILE **pgpout, FILE **pgperr,
                             int pgpinfd, int pgpoutfd, int pgperrfd,
                             const char *fname, const char *uids, int flags)
{
  function();
  another();
}

void pgp_invoke_import(const char *fname)
{
  function();
  another();
}

void pgp_invoke_getkeys(ADDRESS *addr)
{
  function();
  another();
}

pid_t pgp_invoke_export(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                        int pgpoutfd, int pgperrfd, const char *uids)
{
  function();
  another();
}

pid_t pgp_invoke_verify_key(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                            int pgpoutfd, int pgperrfd, const char *uids)
{
  function();
  another();
}

pid_t pgp_invoke_list_keys(FILE **pgpin, FILE **pgpout, FILE **pgperr, int pgpinfd,
                           int pgpoutfd, int pgperrfd, pgp_ring_t keyring, LIST *hints)
{
  function();
  another();
}

static char *pgp_key_abilities(int flags)
{
  function();
  another();
}

static char pgp_flags(int flags)
{
  function();
  another();
}

static pgp_key_t pgp_principal_key(pgp_key_t key)
{
  function();
  another();
}

static const char *pgp_entry_fmt(char *dest, size_t destlen, size_t col, int cols,
                                 char op, const char *src, const char *prefix,
                                 const char *ifstring, const char *elsestring,
                                 unsigned long data, format_flag flags)
{
  function();
  another();
}

static void pgp_entry(char *s, size_t l, MUTTMENU *menu, int num)
{
  function();
  another();
}

static int _pgp_compare_address(const void *a, const void *b)
{
  function();
  another();
}

static int pgp_compare_address(const void *a, const void *b)
{
  function();
  another();
}

static int _pgp_compare_keyid(const void *a, const void *b)
{
  function();
  another();
}

static int pgp_compare_keyid(const void *a, const void *b)
{
  function();
  another();
}

static int _pgp_compare_date(const void *a, const void *b)
{
  function();
  another();
}

static int pgp_compare_date(const void *a, const void *b)
{
  function();
  another();
}

static int _pgp_compare_trust(const void *a, const void *b)
{
  function();
  another();
}

static int pgp_compare_trust(const void *a, const void *b)
{
  function();
  another();
}

static bool pgp_key_is_valid(pgp_key_t k)
{
  function();
  another();
}

static bool pgp_id_is_strong(pgp_uid_t *uid)
{
  function();
  another();
}

static bool pgp_id_is_valid(pgp_uid_t *uid)
{
  function();
  another();
}

static int pgp_id_matches_addr(ADDRESS *addr, ADDRESS *u_addr, pgp_uid_t *uid)
{
  function();
  another();
}

static pgp_key_t pgp_select_key(pgp_key_t keys, ADDRESS *p, const char *s)
{
  function();
  another();
}

pgp_key_t pgp_ask_for_key(char *tag, char *whatfor, short abilities, pgp_ring_t keyring)
{
  function();
  another();
}

static LIST *pgp_add_string_to_hints(LIST *hints, const char *str)
{
  function();
  another();
}

static pgp_key_t *pgp_get_lastp(pgp_key_t p)
{
  function();
  another();
}

pgp_key_t pgp_getkeybyaddr(ADDRESS *a, short abilities, pgp_ring_t keyring, int oppenc_mode)
{
  function();
  another();
}

pgp_key_t pgp_getkeybystr(char *p, short abilities, pgp_ring_t keyring)
{
  function();
  another();
}

const char *pgp_pkalgbytype(unsigned char type)
{
  function();
  another();
}

bool pgp_canencrypt(unsigned char type)
{
  function();
  another();
}

bool pgp_cansign(unsigned char type)
{
  function();
  another();
}

short pgp_get_abilities(unsigned char type)
{
  function();
  another();
}

static void pgp_free_sig(pgp_sig_t **sigp)
{
  function();
  another();
}

static void pgp_free_uid(pgp_uid_t **upp)
{
  function();
  another();
}

pgp_uid_t *pgp_copy_uids(pgp_uid_t *up, pgp_key_t parent)
{
  function();
  another();
}

static void _pgp_free_key(pgp_key_t *kpp)
{
  function();
  another();
}

pgp_key_t pgp_remove_key(pgp_key_t *klist, pgp_key_t key)
{
  function();
  another();
}

void pgp_free_key(pgp_key_t *kpp)
{
  function();
  another();
}

static const char *pgp_hash_to_micalg(short id)
{
  function();
  another();
}

static void pgp_dearmor(FILE *in, FILE *out)
{
  function();
  another();
}

static short pgp_mic_from_packet(unsigned char *p, size_t len)
{
  function();
  another();
}

static short pgp_find_hash(const char *fname)
{
  function();
  another();
}

const char *pgp_micalg(const char *fname)
{
  function();
  another();
}

static int read_material(size_t material, size_t *used, FILE *fp)
{
  function();
  another();
}

unsigned char *pgp_read_packet(FILE *fp, size_t *len)
{
  function();
  another();
}

void pgp_release_packet(void)
{
  function();
  another();
}

static char gnupg_trustletter(int t)
{
  function();
  another();
}

static void print_userid(const char *id)
{
  function();
  another();
}

static void print_fingerprint(pgp_key_t p)
{
  function();
  another();
}

static void pgpring_dump_signatures(pgp_sig_t *sig)
{
  function();
  another();
}

static void pgpring_dump_keyblock(pgp_key_t p)
{
  function();
  another();
}

static bool pgpring_string_matches_hint(const char *s, const char *hints[], int nhints)
{
  function();
  another();
}

static void pgp_make_pgp2_fingerprint(unsigned char *buff, unsigned char *digest)
{
  function();
  another();
}

static char *binary_fingerprint_to_string(unsigned char *buff, size_t length)
{
  function();
  another();
}

static pgp_key_t pgp_parse_pgp2_key(unsigned char *buff, size_t l)
{
  function();
  another();
}

static void pgp_make_pgp3_fingerprint(unsigned char *buff, size_t l, unsigned char *digest)
{
  function();
  another();
}

static void skip_bignum(unsigned char *buff, size_t l, size_t j, size_t *toff, size_t n)
{
  function();
  another();
}

static pgp_key_t pgp_parse_pgp3_key(unsigned char *buff, size_t l)
{
  function();
  another();
}

static pgp_key_t pgp_parse_keyinfo(unsigned char *buff, size_t l)
{
  function();
  another();
}

static int pgp_parse_pgp2_sig(unsigned char *buff, size_t l, pgp_key_t p, pgp_sig_t *s)
{
  function();
  another();
}

static int pgp_parse_pgp3_sig(unsigned char *buff, size_t l, pgp_key_t p, pgp_sig_t *s)
{
  function();
  another();
}

static int pgp_parse_sig(unsigned char *buff, size_t l, pgp_key_t p, pgp_sig_t *sig)
{
  function();
  another();
}

static pgp_key_t pgp_parse_keyblock(FILE *fp)
{
  function();
  another();
}

static void pgpring_find_candidates(char *ringfile, const char *hints[], int nhints)
{
  function();
  another();
}

int main(int argc, char *const argv[])
{
  function();
  another();
}

static pop_auth_res_t pop_auth_sasl(POP_DATA *pop_data, const char *method)
{
  function();
  another();
}

void pop_apop_timestamp(POP_DATA *pop_data, char *buf)
{
  function();
  another();
}

static pop_auth_res_t pop_auth_apop(POP_DATA *pop_data, const char *method)
{
  function();
  another();
}

static pop_auth_res_t pop_auth_user(POP_DATA *pop_data, const char *method)
{
  function();
  another();
}

int pop_authenticate(POP_DATA *pop_data)
{
  function();
  another();
}

static int fetch_message(char *line, void *file)
{
  function();
  another();
}

static int pop_read_header(POP_DATA *pop_data, HEADER *h)
{
  function();
  another();
}

static int fetch_uidl(char *line, void *data)
{
  function();
  another();
}

static int msg_cache_check(const char *id, body_cache_t *bcache, void *data)
{
  function();
  another();
}

static int pop_hcache_namer(const char *path, char *dest, size_t destlen)
{
  function();
  another();
}

static header_cache_t *pop_hcache_open(POP_DATA *pop_data, const char *path)
{
  function();
  another();
}

static int pop_fetch_headers(CONTEXT *ctx)
{
  function();
  another();
}

static int pop_open_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static void pop_clear_cache(POP_DATA *pop_data)
{
  function();
  another();
}

static int pop_close_mailbox(CONTEXT *ctx)
{
  function();
  another();
}

static int pop_fetch_message(CONTEXT *ctx, MESSAGE *msg, int msgno)
{
  function();
  another();
}

static int pop_close_message(CONTEXT *ctx, MESSAGE *msg)
{
  function();
  another();
}

static int pop_sync_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

static int pop_check_mailbox(CONTEXT *ctx, int *index_hint)
{
  function();
  another();
}

void pop_fetch_mail(void)
{
  function();
  another();
}

int pop_parse_path(const char *path, ACCOUNT *acct)
{
  function();
  another();
}

static void pop_error(POP_DATA *pop_data, char *msg)
{
  function();
  another();
}

static int fetch_capa(char *line, void *data)
{
  function();
  another();
}

static int fetch_auth(char *line, void *data)
{
  function();
  another();
}

static int pop_capabilities(POP_DATA *pop_data, int mode)
{
  function();
  another();
}

int pop_connect(POP_DATA *pop_data)
{
  function();
  another();
}

int pop_open_connection(POP_DATA *pop_data)
{
  function();
  another();
}

void pop_logout(CONTEXT *ctx)
{
  function();
  another();
}

int pop_query_d(POP_DATA *pop_data, char *buf, size_t buflen, char *msg)
{
  function();
  another();
}

int pop_fetch_data(POP_DATA *pop_data, char *query, progress_t *progressbar,
                   int (*funct)(char *, void *), void *data)
{
  function();
  another();
}

static int check_uidl(char *line, void *data)
{
  function();
  another();
}

int pop_reconnect(CONTEXT *ctx)
{
  function();
  another();
}

int mutt_num_postponed(int force)
{
  function();
  another();
}

void mutt_update_num_postponed(void)
{
  function();
  another();
}

static void post_entry(char *s, size_t slen, MUTTMENU *menu, int entry)
{
  function();
  another();
}

static HEADER *select_msg(void)
{
  function();
  another();
}

int mutt_get_postponed(CONTEXT *ctx, HEADER *hdr, HEADER **cur, char *fcc, size_t fcclen)
{
  function();
  another();
}

int mutt_parse_crypt_hdr(const char *p, int set_empty_signas, int crypt_app)
{
  function();
  another();
}

int mutt_prepare_template(FILE *fp, CONTEXT *ctx, HEADER *newhdr, HEADER *hdr, short resend)
{
  function();
  another();
}

static ADDRESS *result_to_addr(QUERY *r)
{
  function();
  another();
}

static void free_query(QUERY **query)
{
  function();
  another();
}

static QUERY *run_query(char *s, int quiet)
{
  function();
  another();
}

static int query_search(MUTTMENU *m, regex_t *re, int n)
{
  function();
  another();
}

static const char *query_format_str(char *dest, size_t destlen, size_t col, int cols,
                                    char op, const char *src, const char *fmt,
                                    const char *ifstring, const char *elsestring,
                                    unsigned long data, format_flag flags)
{
  function();
  another();
}

static void query_entry(char *s, size_t slen, MUTTMENU *m, int num)
{
  function();
  another();
}

static int query_tag(MUTTMENU *menu, int n, int m)
{
  function();
  another();
}

static void query_menu(char *buf, size_t buflen, QUERY *results, int retbuf)
{
  function();
  another();
}

int mutt_query_complete(char *buf, size_t buflen)
{
  function();
  another();
}

void mutt_query_menu(char *buf, size_t buflen)
{
  function();
  another();
}

void mutt_update_tree(ATTACHPTR **idx, short idxlen)
{
  function();
  another();
}

const char *mutt_attach_fmt(char *dest, size_t destlen, size_t col, int cols,
                            char op, const char *src, const char *prefix,
                            const char *ifstring, const char *elsestring,
                            unsigned long data, format_flag flags)
{
  function();
  another();
}

static void attach_entry(char *b, size_t blen, MUTTMENU *menu, int num)
{
  function();
  another();
}

int mutt_tag_attach(MUTTMENU *menu, int n, int m)
{
  function();
  another();
}

bool mutt_is_message_type(int type, const char *subtype)
{
  function();
  another();
}

static void prepend_curdir(char *dst, size_t dstlen)
{
  function();
  another();
}

static int query_save_attachment(FILE *fp, BODY *body, HEADER *hdr, char **directory)
{
  function();
  another();
}

void mutt_save_attachment_list(FILE *fp, int tag, BODY *top, HEADER *hdr, MUTTMENU *menu)
{
  function();
  another();
}

static void query_pipe_attachment(char *command, FILE *fp, BODY *body, int filter)
{
  function();
  another();
}

static void pipe_attachment(FILE *fp, BODY *b, STATE *state)
{
  function();
  another();
}

static void pipe_attachment_list(char *command, FILE *fp, int tag, BODY *top,
                                 int filter, STATE *state)
{
  function();
  another();
}

void mutt_pipe_attachment_list(FILE *fp, int tag, BODY *top, int filter)
{
  function();
  another();
}

static int can_print(BODY *top, int tag)
{
  function();
  another();
}

static void print_attachment_list(FILE *fp, int tag, BODY *top, STATE *state)
{
  function();
  another();
}

void mutt_print_attachment_list(FILE *fp, int tag, BODY *top)
{
  function();
  another();
}

static void update_attach_index(BODY *cur, ATTACHPTR ***idxp, short *idxlen,
                                short *idxmax, MUTTMENU *menu)
{
  function();
  another();
}

int mutt_attach_display_loop(MUTTMENU *menu, int op, FILE *fp, HEADER *hdr, BODY *cur,
                             ATTACHPTR ***idxp, short *idxlen, short *idxmax, int recv)
{
  function();
  another();
}

static void attach_collapse(BODY *b, short collapse, short init, short just_one)
{
  function();
  another();
}

void mutt_attach_init(BODY *b)
{
  function();
  another();
}

void mutt_view_attachments(HEADER *hdr)
{
  function();
  another();
}

static bool check_msg(BODY *b, bool err)
{
  function();
  another();
}

static bool check_all_msg(ATTACHPTR **idx, short idxlen, BODY *cur, bool err)
{
  function();
  another();
}

static short check_can_decode(ATTACHPTR **idx, short idxlen, BODY *cur)
{
  function();
  another();
}

static short count_tagged(ATTACHPTR **idx, short idxlen)
{
  function();
  another();
}

static short count_tagged_children(ATTACHPTR **idx, short idxlen, short i)
{
  function();
  another();
}

void mutt_attach_bounce(FILE *fp, HEADER *hdr, ATTACHPTR **idx, short idxlen, BODY *cur)
{
  function();
  another();
}

void mutt_attach_resend(FILE *fp, HEADER *hdr, ATTACHPTR **idx, short idxlen, BODY *cur)
{
  function();
  another();
}

static HEADER *find_common_parent(ATTACHPTR **idx, short idxlen, short nattach)
{
  function();
  another();
}

static bool is_parent(short i, ATTACHPTR **idx, short idxlen, BODY *cur)
{
  function();
  another();
}

static HEADER *find_parent(ATTACHPTR **idx, short idxlen, BODY *cur, short nattach)
{
  function();
  another();
}

static void include_header(int quote, FILE *ifp, HEADER *hdr, FILE *ofp, char *_prefix)
{
  function();
  another();
}

static BODY **copy_problematic_attachments(FILE *fp, BODY **last, ATTACHPTR **idx,
                                           short idxlen, short force)
{
  function();
  another();
}

static void attach_forward_bodies(FILE *fp, HEADER *hdr, ATTACHPTR **idx,
                                  short idxlen, BODY *cur, short nattach, int flags)
{
  function();
  another();
}

static void attach_forward_msgs(FILE *fp, HEADER *hdr, ATTACHPTR **idx,
                                short idxlen, BODY *cur, int flags)
{
  function();
  another();
}

void mutt_attach_forward(FILE *fp, HEADER *hdr, ATTACHPTR **idx, short idxlen,
                         BODY *cur, int flags)
{
  function();
  another();
}

static int attach_reply_envelope_defaults(ENVELOPE *env, ATTACHPTR **idx,
                                          short idxlen, HEADER *parent, int flags)
{
  function();
  another();
}

static void attach_include_reply(FILE *fp, FILE *tmpfp, HEADER *cur, int flags)
{
  function();
  another();
}

void mutt_attach_reply(FILE *fp, HEADER *hdr, ATTACHPTR **idx, short idxlen,
                       BODY *cur, int flags)
{
  function();
  another();
}

static int mix_get_caps(const char *capstr)
{
  function();
  another();
}

static void mix_add_entry(REMAILER ***type2_list, REMAILER *entry, size_t *slots, size_t *used)
{
  function();
  another();
}

static REMAILER *mix_new_remailer(void)
{
  function();
  another();
}

static void mix_free_remailer(REMAILER **r)
{
  function();
  another();
}

static REMAILER **mix_type2_list(size_t *l)
{
  function();
  another();
}

static void mix_free_type2_list(REMAILER ***ttlp)
{
  function();
  another();
}

static void mix_screen_coordinates(REMAILER **type2_list, struct coord **coordsp,
                                   MIXCHAIN *chain, int i)
{
  function();
  another();
}

static void mix_redraw_ce(REMAILER **type2_list, struct coord *coords,
                          MIXCHAIN *chain, int i, short selected)
{
  function();
  another();
}

static void mix_redraw_chain(REMAILER **type2_list, struct coord *coords,
                             MIXCHAIN *chain, int cur)
{
  function();
  another();
}

static void mix_redraw_head(MIXCHAIN *chain)
{
  function();
  another();
}

static const char *mix_format_caps(REMAILER *r)
{
  function();
  another();
}

static const char *mix_entry_fmt(char *dest, size_t destlen, size_t col, int cols,
                                 char op, const char *src, const char *prefix,
                                 const char *ifstring, const char *elsestring,
                                 unsigned long data, format_flag flags)
{
  function();
  another();
}

static void mix_entry(char *b, size_t blen, MUTTMENU *menu, int num)
{
  function();
  another();
}

static int mix_chain_add(MIXCHAIN *chain, const char *s, REMAILER **type2_list)
{
  function();
  another();
}

void mix_make_chain(LIST **chainp)
{
  function();
  another();
}

int mix_check_message(HEADER *msg)
{
  function();
  another();
}

int mix_send_message(LIST *chain, const char *tempfile)
{
  function();
  another();
}

void mutt_resize_screen(void)
{
  function();
  another();
}

int rfc1524_expand_command(BODY *a, char *filename, char *_type, char *command, int clen)
{
  function();
  another();
}

static char *get_field(char *s)
{
  function();
  another();
}

static int get_field_text(char *field, char **entry, char *type, char *filename, int line)
{
  function();
  another();
}

static int rfc1524_mailcap_parse(BODY *a, char *filename, char *type,
                                 rfc1524_entry *entry, int opt)
{
  function();
  another();
}

rfc1524_entry *rfc1524_new_entry(void)
{
  function();
  another();
}

void rfc1524_free_entry(rfc1524_entry **entry)
{
  function();
  another();
}

int rfc1524_mailcap_lookup(BODY *a, char *type, rfc1524_entry *entry, int opt)
{
  function();
  another();
}

static void strnfcpy(char *d, char *s, size_t siz, size_t len)
{
  function();
  another();
}

int rfc1524_expand_filename(char *nametemplate, char *oldfile, char *newfile, size_t nflen)
{
  function();
  another();
}

int mutt_rename_file(char *oldfile, char *newfile)
{
  function();
  another();
}

static size_t convert_string(ICONV_CONST char *f, size_t flen, const char *from,
                             const char *to, char **t, size_t *tlen)
{
  function();
  another();
}

int convert_nonmime_string(char **ps)
{
  function();
  another();
}

char *mutt_choose_charset(const char *fromcode, const char *charsets, char *u,
                          size_t ulen, char **d, size_t *dlen)
{
  function();
  another();
}

static size_t b_encoder(char *s, ICONV_CONST char *d, size_t dlen, const char *tocode)
{
  function();
  another();
}

static size_t q_encoder(char *s, ICONV_CONST char *d, size_t dlen, const char *tocode)
{
  function();
  another();
}

static size_t try_block(ICONV_CONST char *d, size_t dlen, const char *fromcode,
                        const char *tocode, encoder_t *encoder, size_t *wlen)
{
  function();
  another();
}

static size_t encode_block(char *s, char *d, size_t dlen, const char *fromcode,
                           const char *tocode, encoder_t encoder)
{
  function();
  another();
}

static size_t choose_block(char *d, size_t dlen, int col, const char *fromcode,
                           const char *tocode, encoder_t *encoder, size_t *wlen)
{
  function();
  another();
}

static int rfc2047_encode(ICONV_CONST char *d, size_t dlen, int col, const char *fromcode,
                          const char *charsets, char **e, size_t *elen, char *specials)
{
  function();
  another();
}

void _rfc2047_encode_string(char **pd, int encode_specials, int col)
{
  function();
  another();
}

void rfc2047_encode_adrlist(ADDRESS *addr, const char *tag)
{
  function();
  another();
}

static int rfc2047_decode_word(char *d, const char *s, size_t len)
{
  function();
  another();
}

static const char *find_encoded_word(const char *s, const char **x)
{
  function();
  another();
}

static size_t lwslen(const char *s, size_t n)
{
  function();
  another();
}

static size_t lwsrlen(const char *s, size_t n)
{
  function();
  another();
}

void rfc2047_decode(char **pd)
{
  function();
  another();
}

void rfc2047_decode_adrlist(ADDRESS *a)
{
  function();
  another();
}

static void purge_empty_parameters(PARAMETER **headp)
{
  function();
  another();
}

static char *rfc2231_get_charset(char *value, char *charset, size_t chslen)
{
  function();
  another();
}

static void rfc2231_decode_one(char *dest, char *src)
{
  function();
  another();
}

static struct rfc2231_parameter *rfc2231_new_parameter(void)
{
  function();
  another();
}

static void rfc2231_list_insert(struct rfc2231_parameter **list, struct rfc2231_parameter *par)
{
  function();
  another();
}

static void rfc2231_free_parameter(struct rfc2231_parameter **p)
{
  function();
  another();
}

static void rfc2231_join_continuations(PARAMETER **head, struct rfc2231_parameter *par)
{
  function();
  another();
}

void rfc2231_decode_parameters(PARAMETER **headp)
{
  function();
  another();
}

int rfc2231_encode_string(char **pd)
{
  function();
  another();
}

static int get_quote_level(const char *line)
{
  function();
  another();
}

static int space_quotes(STATE *s)
{
  function();
  another();
}

static bool add_quote_suffix(STATE *s, int ql)
{
  function();
  another();
}

static size_t print_indent(int ql, STATE *s, int add_suffix)
{
  function();
  another();
}

static void flush_par(STATE *s, flowed_state_t *fst)
{
  function();
  another();
}

static int quote_width(STATE *s, int ql)
{
  function();
  another();
}

static void print_flowed_line(char *line, STATE *s, int ql, flowed_state_t *fst, int term)
{
  function();
  another();
}

static void print_fixed_line(const char *line, STATE *s, int ql, flowed_state_t *fst)
{
  function();
  another();
}

int rfc3676_handler(BODY *a, STATE *s)
{
  function();
  another();
}

void rfc3676_space_stuff(HEADER *hdr)
{
  function();
  another();
}

void rfc822_dequote_comment(char *s)
{
  function();
  another();
}

static void free_address(ADDRESS *a)
{
  function();
  another();
}

int rfc822_remove_from_adrlist(ADDRESS **a, const char *mailbox)
{
  function();
  another();
}

void rfc822_free_address(ADDRESS **p)
{
  function();
  another();
}

static const char *parse_comment(const char *s, char *comment, size_t *commentlen, size_t commentmax)
{
  function();
  another();
}

static const char *parse_quote(const char *s, char *token, size_t *tokenlen, size_t tokenmax)
{
  function();
  another();
}

static const char *next_token(const char *s, char *token, size_t *tokenlen, size_t tokenmax)
{
  function();
  another();
}

static const char *parse_mailboxdomain(const char *s, const char *nonspecial,
                                       char *mailbox, size_t *mailboxlen,
                                       size_t mailboxmax, char *comment,
                                       size_t *commentlen, size_t commentmax)
{
  function();
  another();
}

static const char *parse_address(const char *s, char *token, size_t *tokenlen,
                                 size_t tokenmax, char *comment, size_t *commentlen,
                                 size_t commentmax, ADDRESS *addr)
{
  function();
  another();
}

static const char *parse_route_addr(const char *s, char *comment, size_t *commentlen,
                                    size_t commentmax, ADDRESS *addr)
{
  function();
  another();
}

static const char *parse_addr_spec(const char *s, char *comment, size_t *commentlen,
                                   size_t commentmax, ADDRESS *addr)
{
  function();
  another();
}

static void add_addrspec(ADDRESS **top, ADDRESS **last, const char *phrase,
                         char *comment, size_t *commentlen, size_t commentmax)
{
  function();
  another();
}

void rfc822_qualify(ADDRESS *addr, const char *host)
{
  function();
  another();
}

void rfc822_cat(char *buf, size_t buflen, const char *value, const char *specials)
{
  function();
  another();
}

void rfc822_write_address_single(char *buf, size_t buflen, ADDRESS *addr, int display)
{
  function();
  another();
}

int rfc822_write_address(char *buf, size_t buflen, ADDRESS *addr, int display)
{
  function();
  another();
}

bool rfc822_valid_msgid(const char *msgid)
{
  function();
  another();
}

int safe_free(void **p) /* __SAFE_FREE_CHECKED__ */
{
  function();
  another();
}

int main(int argc, char **argv)
{
  function();
  another();
}

int safe_asprintf(char **strp, const char *fmt, ...)
{
  function();
  another();
}

int safe_asprintf(char **strp, const char *fmt, ...)
{
  function();
  another();
}

void mutt_check_rescore(CONTEXT *ctx)
{
  function();
  another();
}

int mutt_parse_score(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

void mutt_score_message(CONTEXT *ctx, HEADER *hdr, int upd_ctx)
{
  function();
  another();
}

int mutt_parse_unscore(BUFFER *buf, BUFFER *s, unsigned long data, BUFFER *err)
{
  function();
  another();
}

static void append_signature(FILE *f)
{
  function();
  another();
}

static bool addrcmp(ADDRESS *a, ADDRESS *b)
{
  function();
  another();
}

static int addrsrc(ADDRESS *a, ADDRESS *lst)
{
  function();
  another();
}

static ADDRESS *remove_user(ADDRESS *a, int leave_only)
{
  function();
  another();
}

static ADDRESS *find_mailing_lists(ADDRESS *t, ADDRESS *c)
{
  function();
  another();
}

static int edit_address(ADDRESS **a, /* const */ char *field)
{
  function();
  another();
}

static int edit_envelope(ENVELOPE *en, int flags)
{
  function();
  another();
}

static char *nntp_get_header(const char *s)
{
  function();
  another();
}

static void process_user_recips(ENVELOPE *env)
{
  function();
  another();
}

static void process_user_header(ENVELOPE *env)
{
  function();
  another();
}

void mutt_forward_intro(FILE *fp, HEADER *cur)
{
  function();
  another();
}

void mutt_forward_trailer(FILE *fp)
{
  function();
  another();
}

static int include_forward(CONTEXT *ctx, HEADER *cur, FILE *out)
{
  function();
  another();
}

void mutt_make_attribution(CONTEXT *ctx, HEADER *cur, FILE *out)
{
  function();
  another();
}

void mutt_make_post_indent(CONTEXT *ctx, HEADER *cur, FILE *out)
{
  function();
  another();
}

static int include_reply(CONTEXT *ctx, HEADER *cur, FILE *out)
{
  function();
  another();
}

static int default_to(ADDRESS **to, ENVELOPE *env, int flags, int hmfupto)
{
  function();
  another();
}

int mutt_fetch_recips(ENVELOPE *out, ENVELOPE *in, int flags)
{
  function();
  another();
}

static LIST *make_references(ENVELOPE *e)
{
  function();
  another();
}

void mutt_fix_reply_recipients(ENVELOPE *env)
{
  function();
  another();
}

void mutt_make_forward_subject(ENVELOPE *env, CONTEXT *ctx, HEADER *cur)
{
  function();
  another();
}

void mutt_make_misc_reply_headers(ENVELOPE *env, CONTEXT *ctx, HEADER *cur, ENVELOPE *curenv)
{
  function();
  another();
}

void mutt_add_to_reference_headers(ENVELOPE *env, ENVELOPE *curenv, LIST ***pp, LIST ***qq)
{
  function();
  another();
}

static void make_reference_headers(ENVELOPE *curenv, ENVELOPE *env, CONTEXT *ctx)
{
  function();
  another();
}

static int envelope_defaults(ENVELOPE *env, CONTEXT *ctx, HEADER *cur, int flags)
{
  function();
  another();
}

static int generate_body(FILE *tempfp, /* stream for outgoing message */
                         HEADER *msg,  /* header for outgoing message */
                         int flags,    /* compose mode */
                         CONTEXT *ctx, /* current mailbox */
                         HEADER *cur)  /* current message */
{
  function();
  another();
}

void mutt_set_followup_to(ENVELOPE *e)
{
  function();
  another();
}

static ADDRESS *set_reverse_name(ENVELOPE *env)
{
  function();
  another();
}

static int send_message(HEADER *msg)
{
  function();
  another();
}

void mutt_encode_descriptions(BODY *b, short recurse)
{
  function();
  another();
}

static void decode_descriptions(BODY *b)
{
  function();
  another();
}

static void fix_end_of_file(const char *data)
{
  function();
  another();
}

int mutt_compose_to_sender(HEADER *hdr)
{
  function();
  another();
}

int mutt_resend_message(FILE *fp, CONTEXT *ctx, HEADER *cur)
{
  function();
  another();
}

static int is_reply(HEADER *reply, HEADER *orig)
{
  function();
  another();
}

static int has_recips(ADDRESS *a)
{
  function();
  another();
}

static int mutt_search_attach_keyword(char *filename)
{
  function();
  another();
}

int ci_send_message(int flags,      /* send mode */
                    HEADER *msg,    /* template to use for new message */
                    char *tempfile, /* file specified by -i or -H */
                    CONTEXT *ctx,   /* current mailbox */
                    HEADER *cur)    /* current message */
{
  function();
  another();
}

static void encode_quoted(FGETCONV *fc, FILE *fout, int istext)
{
  function();
  another();
}

static int b64_init(struct b64_context *ctx)
{
  function();
  another();
}

static void b64_flush(struct b64_context *ctx, FILE *fout)
{
  function();
  another();
}

static void b64_putc(struct b64_context *ctx, char c, FILE *fout)
{
  function();
  another();
}

static void encode_base64(FGETCONV *fc, FILE *fout, int istext)
{
  function();
  another();
}

static void encode_8bit(FGETCONV *fc, FILE *fout, int istext)
{
  function();
  another();
}

int mutt_write_mime_header(BODY *a, FILE *f)
{
  function();
  another();
}

int mutt_write_mime_body(BODY *a, FILE *f)
{
  function();
  another();
}

void mutt_generate_boundary(PARAMETER **parm)
{
  function();
  another();
}

static void update_content_info(CONTENT *info, CONTENT_STATE *s, char *d, size_t dlen)
{
  function();
  another();
}

static size_t convert_file_to(FILE *file, const char *fromcode, int ncodes,
                              const char **tocodes, int *tocode, CONTENT *info)
{
  function();
  another();
}

static size_t convert_file_from_to(FILE *file, const char *fromcodes, const char *tocodes,
                                   char **fromcode, char **tocode, CONTENT *info)
{
  function();
  another();
}

int mutt_lookup_mime_type(BODY *att, const char *path)
{
  function();
  another();
}

static void transform_to_7bit(BODY *a, FILE *fpin)
{
  function();
  another();
}

void mutt_message_to_7bit(BODY *a, FILE *fp)
{
  function();
  another();
}

static void set_encoding(BODY *b, CONTENT *info)
{
  function();
  another();
}

void mutt_stamp_attachment(BODY *a)
{
  function();
  another();
}

char *mutt_get_body_charset(char *d, size_t dlen, BODY *b)
{
  function();
  another();
}

void mutt_update_encoding(BODY *a)
{
  function();
  another();
}

static int get_toplevel_encoding(BODY *a)
{
  function();
  another();
}

static bool check_boundary(const char *boundary, BODY *b)
{
  function();
  another();
}

char *mutt_make_date(char *s, size_t len)
{
  function();
  another();
}

void mutt_write_address_list(ADDRESS *adr, FILE *fp, int linelen, int display)
{
  function();
  another();
}

void mutt_write_references(LIST *r, FILE *f, int trim)
{
  function();
  another();
}

static const char *find_word(const char *src)
{
  function();
  another();
}

static int my_width(const char *str, int col, int flags)
{
  function();
  another();
}

static int print_val(FILE *fp, const char *pfx, const char *value, int flags, size_t col)
{
  function();
  another();
}

static int fold_one_header(FILE *fp, const char *tag, const char *value,
                           const char *pfx, int wraplen, int flags)
{
  function();
  another();
}

static char *unfold_header(char *s)
{
  function();
  another();
}

static int write_one_header(FILE *fp, int pfxw, int max, int wraplen, const char *pfx,
                            const char *start, const char *end, int flags)
{
  function();
  another();
}

int mutt_write_one_header(FILE *fp, const char *tag, const char *value,
                          const char *pfx, int wraplen, int flags)
{
  function();
  another();
}

int mutt_write_rfc822_header(FILE *fp, ENVELOPE *env, BODY *attach, int mode, int privacy)
{
  function();
  another();
}

static void encode_headers(LIST *h)
{
  function();
  another();
}

const char *mutt_fqdn(short may_hide_host)
{
  function();
  another();
}

static char *gen_msgid(void)
{
  function();
  another();
}

static void alarm_handler(int sig)
{
  function();
  another();
}

static int send_msg(const char *path, char **args, const char *msg, char **tempfile)
{
  function();
  another();
}

static char **add_args(char **args, size_t *argslen, size_t *argsmax, ADDRESS *addr)
{
  function();
  another();
}

static char **add_option(char **args, size_t *argslen, size_t *argsmax, char *s)
{
  function();
  another();
}

int mutt_invoke_sendmail(ADDRESS *from, /* the sender */
                         ADDRESS *to, ADDRESS *cc, ADDRESS *bcc, /* recips */
                         const char *msg, /* file containing message */
                         int eightbit)    /* message contains 8bit chars */
{
  function();
  another();
}

void mutt_prepare_envelope(ENVELOPE *env, int final)
{
  function();
  another();
}

void mutt_unprepare_envelope(ENVELOPE *env)
{
  function();
  another();
}

static int _mutt_bounce_message(FILE *fp, HEADER *h, ADDRESS *to,
                                const char *resent_from, ADDRESS *env_from)
{
  function();
  another();
}

int mutt_bounce_message(FILE *fp, HEADER *h, ADDRESS *to)
{
  function();
  another();
}

static void set_noconv_flags(BODY *b, short flag)
{
  function();
  another();
}

int mutt_write_multiple_fcc(const char *path, HEADER *hdr, const char *msgid,
                            int post, char *fcc, char **finalpath)
{
  function();
  another();
}

int mutt_write_fcc(const char *path, HEADER *hdr, const char *msgid, int post,
                   char *fcc, char **finalpath)
{
  function();
  another();
}

void sha1_transform(uint32_t state[5], const unsigned char buffer[64])
{
  function();
  another();
}

void sha1_init(SHA1_CTX *context)
{
  function();
  another();
}

void sha1_update(SHA1_CTX *context, const unsigned char *data, uint32_t len)
{
  function();
  another();
}

void sha1_final(unsigned char digest[20], SHA1_CTX *context)
{
  function();
  another();
}

static BUFFY *get_incoming(void)
{
  function();
  another();
}

static const char *cb_format_str(char *dest, size_t destlen, size_t col, int cols,
                                 char op, const char *src, const char *prefix,
                                 const char *ifstring, const char *elsestring,
                                 unsigned long data, format_flag flags)
{
  function();
  another();
}

static void make_sidebar_entry(char *buf, unsigned int buflen, int width,
                               char *box, SBENTRY *sbe)
{
  function();
  another();
}

static int cb_qsort_sbe(const void *a, const void *b)
{
  function();
  another();
}

static void update_entries_visibility(void)
{
  function();
  another();
}

static void unsort_entries(void)
{
  function();
  another();
}

static void sort_entries(void)
{
  function();
  another();
}

static bool select_next(void)
{
  function();
  another();
}

static int select_next_new(void)
{
  function();
  another();
}

static bool select_prev(void)
{
  function();
  another();
}

static bool select_prev_new(void)
{
  function();
  another();
}

static int select_page_down(void)
{
  function();
  another();
}

static int select_page_up(void)
{
  function();
  another();
}

static bool prepare_sidebar(int page_size)
{
  function();
  another();
}

static int draw_divider(int num_rows, int num_cols)
{
  function();
  another();
}

static void fill_empty_space(int first_row, int num_rows, int div_width, int num_cols)
{
  function();
  another();
}

static void draw_sidebar(int num_rows, int num_cols, int div_width)
{
  function();
  another();
}

void mutt_sb_draw(void)
{
  function();
  another();
}

void mutt_sb_change_mailbox(int op)
{
  function();
  another();
}

void mutt_sb_set_buffystats(const CONTEXT *ctx)
{
  function();
  another();
}

const char *mutt_sb_get_highlight(void)
{
  function();
  another();
}

void mutt_sb_set_open_buffy(void)
{
  function();
  another();
}

void mutt_sb_notify_mailbox(BUFFY *b, int created)
{
  function();
  another();
}

void mutt_sb_toggle_virtual(void)
{
  function();
  another();
}

static void exit_handler(int sig)
{
  function();
  another();
}

static void chld_handler(int sig)
{
  function();
  another();
}

static void sighandler(int sig)
{
  function();
  another();
}

static int mutt_intr_hook(void)
{
  function();
  another();
}

void mutt_signal_init(void)
{
  function();
  another();
}

void mutt_block_signals(void)
{
  function();
  another();
}

void mutt_unblock_signals(void)
{
  function();
  another();
}

void mutt_block_signals_system(void)
{
  function();
  another();
}

void mutt_unblock_signals_system(int catch)
{
  function();
  another();
}

void mutt_allow_interrupt(int disposition)
{
  function();
  another();
}

static void smime_free_key(smime_key_t **keylist)
{
  function();
  another();
}

static smime_key_t *smime_copy_key(smime_key_t *key)
{
  function();
  another();
}

void smime_void_passphrase(void)
{
  function();
  another();
}

int smime_valid_passphrase(void)
{
  function();
  another();
}

static const char *_mutt_fmt_smime_command(char *dest, size_t destlen, size_t col,
                                           int cols, char op, const char *src,
                                           const char *prefix, const char *ifstring,
                                           const char *elsestring,
                                           unsigned long data, format_flag flags)
{
  function();
  another();
}

static void smime_command(char *d, size_t dlen,
                          struct smime_command_context *cctx, const char *fmt)
{
  function();
  another();
}

static pid_t smime_invoke(FILE **smimein, FILE **smimeout, FILE **smimeerr,
                          int smimeinfd, int smimeoutfd, int smimeerrfd,
                          const char *fname, const char *sig_fname, const char *cryptalg,
                          const char *digestalg, const char *key, const char *certificates,
                          const char *intermediates, const char *format)
{
  function();
  another();
}

static char *smime_key_flags(int flags)
{
  function();
  another();
}

static void smime_entry(char *s, size_t l, MUTTMENU *menu, int num)
{
  function();
  another();
}

static smime_key_t *smime_select_key(smime_key_t *keys, char *query)
{
  function();
  another();
}

static smime_key_t *smime_parse_key(char *buf)
{
  function();
  another();
}

static smime_key_t *smime_get_candidates(char *search, short public)
{
  function();
  another();
}

static smime_key_t *smime_get_key_by_hash(char *hash, short public)
{
  function();
  another();
}

static smime_key_t *smime_get_key_by_addr(char *mailbox, short abilities,
                                          short public, short may_ask)
{
  function();
  another();
}

static smime_key_t *smime_get_key_by_str(char *str, short abilities, short public)
{
  function();
  another();
}

static smime_key_t *smime_ask_for_key(char *prompt, short abilities, short public)
{
  function();
  another();
}

static void _smime_getkeys(char *mailbox)
{
  function();
  another();
}

void smime_getkeys(ENVELOPE *env)
{
  function();
  another();
}

char *smime_find_keys(ADDRESS *adrlist, int oppenc_mode)
{
  function();
  another();
}

static int smime_handle_cert_email(char *certificate, char *mailbox, int copy,
                                   char ***buffer, int *num)
{
  function();
  another();
}

static char *smime_extract_certificate(char *infile)
{
  function();
  another();
}

static char *smime_extract_signer_certificate(char *infile)
{
  function();
  another();
}

void smime_invoke_import(char *infile, char *mailbox)
{
  function();
  another();
}

int smime_verify_sender(HEADER *h)
{
  function();
  another();
}

static pid_t smime_invoke_encrypt(FILE **smimein, FILE **smimeout, FILE **smimeerr,
                                  int smimeinfd, int smimeoutfd, int smimeerrfd,
                                  const char *fname, const char *uids)
{
  function();
  another();
}

static pid_t smime_invoke_sign(FILE **smimein, FILE **smimeout, FILE **smimeerr, int smimeinfd,
                               int smimeoutfd, int smimeerrfd, const char *fname)
{
  function();
  another();
}

static char *openssl_md_to_smime_micalg(char *md)
{
  function();
  another();
}

static pid_t smime_invoke_verify(FILE **smimein, FILE **smimeout, FILE **smimeerr,
                                 int smimeinfd, int smimeoutfd, int smimeerrfd,
                                 const char *fname, const char *sig_fname, int opaque)
{
  function();
  another();
}

static pid_t smime_invoke_decrypt(FILE **smimein, FILE **smimeout,
                                  FILE **smimeerr, int smimeinfd, int smimeoutfd,
                                  int smimeerrfd, const char *fname)
{
  function();
  another();
}

int smime_verify_one(BODY *sigbdy, STATE *s, const char *tempfile)
{
  function();
  another();
}

static BODY *smime_handle_entity(BODY *m, STATE *s, FILE *outFile)
{
  function();
  another();
}

int smime_decrypt_mime(FILE *fpin, FILE **fpout, BODY *b, BODY **cur)
{
  function();
  another();
}

int smime_application_smime_handler(BODY *m, STATE *s)
{
  function();
  another();
}

int smime_send_menu(HEADER *msg)
{
  function();
  another();
}

static bool valid_smtp_code(char *buf, size_t len, int *n)
{
  function();
  another();
}

static int smtp_get_resp(CONNECTION *conn)
{
  function();
  another();
}

static int smtp_rcpt_to(CONNECTION *conn, const ADDRESS *a)
{
  function();
  another();
}

static int smtp_data(CONNECTION *conn, const char *msgfile)
{
  function();
  another();
}

static bool address_uses_unicode(const char *a)
{
  function();
  another();
}

static bool addresses_use_unicode(const ADDRESS *a)
{
  function();
  another();
}

static int smtp_fill_account(ACCOUNT *account)
{
  function();
  another();
}

static int smtp_helo(CONNECTION *conn)
{
  function();
  another();
}

static int smtp_auth_sasl(CONNECTION *conn, const char *mechlist)
{
  function();
  another();
}

static int smtp_auth(CONNECTION *conn)
{
  function();
  another();
}

static int smtp_auth_plain(CONNECTION *conn)
{
  function();
  another();
}

static int smtp_open(CONNECTION *conn)
{
  function();
  another();
}

int mutt_smtp_send(const ADDRESS *from, const ADDRESS *to, const ADDRESS *cc,
                   const ADDRESS *bcc, const char *msgfile, int eightbit)
{
  function();
  another();
}

static int compare_score(const void *a, const void *b)
{
  function();
  another();
}

static int compare_size(const void *a, const void *b)
{
  function();
  another();
}

static int compare_date_sent(const void *a, const void *b)
{
  function();
  another();
}

static int compare_subject(const void *a, const void *b)
{
  function();
  another();
}

const char *mutt_get_name(ADDRESS *a)
{
  function();
  another();
}

static int compare_to(const void *a, const void *b)
{
  function();
  another();
}

static int compare_from(const void *a, const void *b)
{
  function();
  another();
}

static int compare_date_received(const void *a, const void *b)
{
  function();
  another();
}

static int compare_order(const void *a, const void *b)
{
  function();
  another();
}

static int compare_spam(const void *a, const void *b)
{
  function();
  another();
}

static int compare_label(const void *a, const void *b)
{
  function();
  another();
}

sort_t *mutt_get_sort_func(int method)
{
  function();
  another();
}

void mutt_sort_headers(CONTEXT *ctx, int init)
{
  function();
  another();
}

static char *get_sort_str(char *buf, size_t buflen, int method)
{
  function();
  another();
}

static const char *status_format_str(char *buf, size_t buflen, size_t col, int cols,
                                     char op, const char *src, const char *prefix,
                                     const char *ifstring, const char *elsestring,
                                     unsigned long data, format_flag flags)
{
  function();
  another();
}

static const char *status_format_str(char *buf, size_t buflen, size_t col, int cols,
                                     char op, const char *src, const char *prefix,
                                     const char *ifstring, const char *elsestring,
                                     unsigned long data, format_flag flags)
{
  function();
  another();
}

static void _menu_status_line(char *buf, size_t buflen, size_t col, int cols,
                              MUTTMENU *menu, const char *p)
{
  function();
  another();
}

void menu_status_line(char *buf, size_t buflen, MUTTMENU *menu, const char *p)
{
  function();
  another();
}

char *strcasestr(const char *s1, const char *s2)
{
  function();
  another();
}

int _mutt_system(const char *cmd, int flags)
{
  function();
  another();
}

static int is_descendant(THREAD *a, THREAD *b)
{
  function();
  another();
}

static int need_display_subject(CONTEXT *ctx, HEADER *hdr)
{
  function();
  another();
}

static void linearize_tree(CONTEXT *ctx)
{
  function();
  another();
}

static void calculate_visibility(CONTEXT *ctx, int *max_depth)
{
  function();
  another();
}

void mutt_draw_tree(CONTEXT *ctx)
{
  function();
  another();
}

static LIST *make_subject_list(THREAD *cur, time_t *dateptr)
{
  function();
  another();
}

static THREAD *find_subject(CONTEXT *ctx, THREAD *cur)
{
  function();
  another();
}

static void unlink_message(THREAD **old, THREAD *cur)
{
  function();
  another();
}

static void insert_message(THREAD **new, THREAD *newparent, THREAD *cur)
{
  function();
  another();
}

static HASH *make_subj_hash(CONTEXT *ctx)
{
  function();
  another();
}

static void pseudo_threads(CONTEXT *ctx)
{
  function();
  another();
}

void mutt_clear_threads(CONTEXT *ctx)
{
  function();
  another();
}

static int compare_threads(const void *a, const void *b)
{
  function();
  another();
}

static void check_subjects(CONTEXT *ctx, int init)
{
  function();
  another();
}

void mutt_sort_threads(CONTEXT *ctx, int init)
{
  function();
  another();
}

static HEADER *find_virtual(THREAD *cur, int reverse)
{
  function();
  another();
}

int _mutt_aside_thread(HEADER *hdr, short dir, short subthreads)
{
  function();
  another();
}

int mutt_parent_message(CONTEXT *ctx, HEADER *hdr, int find_root)
{
  function();
  another();
}

void mutt_set_virtual(CONTEXT *ctx)
{
  function();
  another();
}

int _mutt_traverse_thread(CONTEXT *ctx, HEADER *cur, int flag)
{
  function();
  another();
}

int mutt_messages_in_thread(CONTEXT *ctx, HEADER *hdr, int flag)
{
  function();
  another();
}

static void clean_references(THREAD *brk, THREAD *cur)
{
  function();
  another();
}

void mutt_break_thread(HEADER *hdr)
{
  function();
  another();
}

static bool link_threads(HEADER *parent, HEADER *child, CONTEXT *ctx)
{
  function();
  another();
}

int mutt_link_threads(HEADER *cur, HEADER *last, CONTEXT *ctx)
{
  function();
  another();
}

void static txt2c(char *sym, FILE *fp)
{
  function();
  another();
}

int main(int argc, char *argv[])
{
  function();
  another();
}

int url_pct_decode(char *s)
{
  function();
  another();
}

url_scheme_t url_check_scheme(const char *s)
{
  function();
  another();
}

static int ciss_parse_userhost(ciss_url_t *ciss, char *src)
{
  function();
  another();
}

int url_parse_ciss(ciss_url_t *ciss, char *src)
{
  function();
  another();
}

static void url_pct_encode(char *dst, size_t l, const char *src)
{
  function();
  another();
}

int url_ciss_tostring(ciss_url_t *ciss, char *dest, size_t len, int flags)
{
  function();
  another();
}

int url_parse_mailto(ENVELOPE *e, char **body, const char *src)
{
  function();
  another();
}

int mutt_wctoutf8(char *s, unsigned int c, size_t buflen)
{
  function();
  another();
}

static void print_compile_options(void)
{
  function();
  another();
}

static char *rstrip_in_place(char *s)
{
  function();
  another();
}

void print_version(void)
{
  function();
  another();
}

void print_copyright(void)
{
  function();
  another();
}

bool feature_enabled(const char *name)
{
  function();
  another();
}

int wcscasecmp(const wchar_t *a, const wchar_t *b)
{
  function();
  another();
}

int wcwidth_ucs(wchar_t ucs)
{
  function();
  another();
}
