static const struct mapping_t AliasHelp[] = {
    {N_("Exit"), OP_EXIT},      {N_("Del"), OP_DELETE},
    {N_("Undel"), OP_UNDELETE}, {N_("Select"), OP_GENERIC_SELECT_ENTRY},
    {N_("Help"), OP_HELP},      {NULL, 0},
};

static const char B64Chars[64] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/',
};

static const struct mapping_t FolderHelp[] = {
    {N_("Exit"), OP_EXIT},
    {N_("Chdir"), OP_CHANGE_DIRECTORY},
    {N_("Goto"), OP_BROWSER_GOTO_FOLDER},
    {N_("Mask"), OP_ENTER_MASK},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

static struct mapping_t FolderNewsHelp[] = {
    {N_("Exit"), OP_EXIT},
    {N_("List"), OP_TOGGLE_MAILBOXES},
    {N_("Subscribe"), OP_BROWSER_SUBSCRIBE},
    {N_("Unsubscribe"), OP_BROWSER_UNSUBSCRIBE},
    {N_("Catchup"), OP_CATCHUP},
    {N_("Mask"), OP_ENTER_MASK},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

static const struct mapping_t Colors[] = {
    {"black", COLOR_BLACK},     {"blue", COLOR_BLUE},
    {"cyan", COLOR_CYAN},       {"green", COLOR_GREEN},
    {"magenta", COLOR_MAGENTA}, {"red", COLOR_RED},
    {"white", COLOR_WHITE},     {"yellow", COLOR_YELLOW},
    {"default", COLOR_DEFAULT}, {0, 0},
};

static const struct mapping_t Fields[] = {
    {"hdrdefault", MT_COLOR_HDEFAULT},
    {"quoted", MT_COLOR_QUOTED},
    {"signature", MT_COLOR_SIGNATURE},
    {"indicator", MT_COLOR_INDICATOR},
    {"status", MT_COLOR_STATUS},
    {"tree", MT_COLOR_TREE},
    {"error", MT_COLOR_ERROR},
    {"normal", MT_COLOR_NORMAL},
    {"tilde", MT_COLOR_TILDE},
    {"markers", MT_COLOR_MARKERS},
    {"header", MT_COLOR_HEADER},
    {"body", MT_COLOR_BODY},
    {"message", MT_COLOR_MESSAGE},
    {"attachment", MT_COLOR_ATTACHMENT},
    {"attach_headers", MT_COLOR_ATTACH_HEADERS},
    {"search", MT_COLOR_SEARCH},
    {"bold", MT_COLOR_BOLD},
    {"underline", MT_COLOR_UNDERLINE},
    {"index", MT_COLOR_INDEX},
    {"progress", MT_COLOR_PROGRESS},
    {"index_author", MT_COLOR_INDEX_AUTHOR},
    {"index_collapsed", MT_COLOR_INDEX_COLLAPSED},
    {"index_date", MT_COLOR_INDEX_DATE},
    {"index_flags", MT_COLOR_INDEX_FLAGS},
    {"index_label", MT_COLOR_INDEX_LABEL},
    {"index_number", MT_COLOR_INDEX_NUMBER},
    {"index_size", MT_COLOR_INDEX_SIZE},
    {"index_subject", MT_COLOR_INDEX_SUBJECT},
    {"index_tag", MT_COLOR_INDEX_TAG},
    {"index_tags", MT_COLOR_INDEX_TAGS},
    {"prompt", MT_COLOR_PROMPT},
    {"sidebar_divider", MT_COLOR_DIVIDER},
    {"sidebar_flagged", MT_COLOR_FLAGGED},
    {"sidebar_highlight", MT_COLOR_HIGHLIGHT},
    {"sidebar_indicator", MT_COLOR_SB_INDICATOR},
    {"sidebar_new", MT_COLOR_NEW},
    {"sidebar_ordinary", MT_COLOR_ORDINARY},
    {"sidebar_spoolfile", MT_COLOR_SB_SPOOLFILE},
    {NULL, 0},
};

static const struct mapping_t ComposeHelp[] = {
    {N_("Send"), OP_COMPOSE_SEND_MESSAGE},
    {N_("Abort"), OP_EXIT},
    {"To", OP_COMPOSE_EDIT_TO},
    {"CC", OP_COMPOSE_EDIT_CC},
    {"Subj", OP_COMPOSE_EDIT_SUBJECT},
    {N_("Attach file"), OP_COMPOSE_ATTACH_FILE},
    {N_("Descrip"), OP_COMPOSE_EDIT_DESCRIPTION},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

static struct mapping_t ComposeNewsHelp[] = {
    {N_("Send"), OP_COMPOSE_SEND_MESSAGE},
    {N_("Abort"), OP_EXIT},
    {"Newsgroups", OP_COMPOSE_EDIT_NEWSGROUPS},
    {"Subj", OP_COMPOSE_EDIT_SUBJECT},
    {N_("Attach file"), OP_COMPOSE_ATTACH_FILE},
    {N_("Descrip"), OP_COMPOSE_EDIT_DESCRIPTION},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

struct mx_ops mx_comp_ops = {
    .open = comp_open_mailbox,
    .open_append = comp_open_append_mailbox,
    .close = comp_close_mailbox,
    .check = comp_check_mailbox,
    .sync = comp_sync_mailbox,
    .open_msg = comp_open_message,
    .close_msg = comp_close_message,
    .commit_msg = comp_commit_message,
    .open_new_msg = comp_open_new_message,
};

struct crypt_module_specs crypt_mod_pgp_classic = {
    APPLICATION_PGP,
    {
        NULL, /* init */
        crypt_mod_pgp_void_passphrase,
        crypt_mod_pgp_valid_passphrase,
        crypt_mod_pgp_decrypt_mime,
        crypt_mod_pgp_application_handler,
        crypt_mod_pgp_encrypted_handler,
        crypt_mod_pgp_findkeys,
        crypt_mod_pgp_sign_message,
        crypt_mod_pgp_verify_one,
        crypt_mod_pgp_send_menu,
        NULL,
        crypt_mod_pgp_encrypt_message,
        crypt_mod_pgp_make_key_attachment,
        crypt_mod_pgp_check_traditional,
        crypt_mod_pgp_traditional_encryptsign,
        crypt_mod_pgp_invoke_getkeys,
        crypt_mod_pgp_invoke_import,
        crypt_mod_pgp_extract_keys_from_attachment_list,
        NULL, /* smime_getkeys */
        NULL, /* smime_verify_sender */
        NULL, /* smime_build_smime_entity */
        NULL, /* smime_invoke_import */
    },
};

struct crypt_module_specs crypt_mod_pgp_gpgme = {
    APPLICATION_PGP,
    {
        /* Common.  */
        crypt_mod_pgp_init, crypt_mod_pgp_void_passphrase, crypt_mod_pgp_valid_passphrase,
        crypt_mod_pgp_decrypt_mime, crypt_mod_pgp_application_handler,
        crypt_mod_pgp_encrypted_handler, crypt_mod_pgp_findkeys, crypt_mod_pgp_sign_message,
        crypt_mod_pgp_verify_one, crypt_mod_pgp_send_menu, crypt_mod_pgp_set_sender,
        /* PGP specific.  */
        crypt_mod_pgp_encrypt_message, crypt_mod_pgp_check_traditional, NULL, /* pgp_traditional_encryptsign  */
        NULL,                              /* pgp_invoke_getkeys  */
        crypt_mod_pgp_invoke_import, NULL, /* pgp_extract_keys_from_attachment_list  */
        NULL,                              /* smime_getkeys */
        NULL,                              /* smime_verify_sender */
        NULL,                              /* smime_build_smime_entity */
        NULL,                              /* smime_invoke_import */
    },
};

struct crypt_module_specs crypt_mod_smime_classic = {
    APPLICATION_SMIME,
    {
        NULL, /* init */
        crypt_mod_smime_void_passphrase,
        crypt_mod_smime_valid_passphrase,
        crypt_mod_smime_decrypt_mime,
        crypt_mod_smime_application_handler,
        NULL, /* encrypted_handler */
        crypt_mod_smime_findkeys,
        crypt_mod_smime_sign_message,
        crypt_mod_smime_verify_one,
        crypt_mod_smime_send_menu,
        NULL,
        NULL, /* pgp_encrypt_message */
        NULL, /* pgp_make_key_attachment */
        NULL, /* pgp_check_traditional */
        NULL, /* pgp_traditional_encryptsign */
        NULL, /* pgp_invoke_getkeys */
        NULL, /* pgp_invoke_import */
        NULL, /* pgp_extract_keys_from_attachment_list */
        crypt_mod_smime_getkeys,
        crypt_mod_smime_verify_sender,
        crypt_mod_smime_build_smime_entity,
        crypt_mod_smime_invoke_import,
    },
};

struct crypt_module_specs crypt_mod_smime_gpgme = {
    APPLICATION_SMIME,
    {
        crypt_mod_smime_init,
        crypt_mod_smime_void_passphrase,
        crypt_mod_smime_valid_passphrase,
        crypt_mod_smime_decrypt_mime,
        crypt_mod_smime_application_handler,
        NULL, /* encrypted_handler */
        crypt_mod_smime_findkeys,
        crypt_mod_smime_sign_message,
        crypt_mod_smime_verify_one,
        crypt_mod_smime_send_menu,
        NULL,
        NULL, /* pgp_encrypt_message */
        NULL, /* pgp_make_key_attachment */
        NULL, /* pgp_check_traditional */
        NULL, /* pgp_traditional_encryptsign */
        NULL, /* pgp_invoke_getkeys */
        NULL, /* pgp_invoke_import */
        NULL, /* pgp_extract_keys_from_attachment_list */
        NULL, /* smime_getkeys */
        crypt_mod_smime_verify_sender,
        crypt_mod_smime_build_smime_entity,
        NULL, /* smime_invoke_import */
    },
};

static const struct mapping_t IndexHelp[] = {
    {N_("Quit"), OP_QUIT},
    {N_("Del"), OP_DELETE},
    {N_("Undel"), OP_UNDELETE},
    {N_("Save"), OP_SAVE},
    {N_("Mail"), OP_MAIL},
    {N_("Reply"), OP_REPLY},
    {N_("Group"), OP_GROUP_REPLY},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

struct mapping_t IndexNewsHelp[] = {
    {N_("Quit"), OP_QUIT},
    {N_("Del"), OP_DELETE},
    {N_("Undel"), OP_UNDELETE},
    {N_("Save"), OP_SAVE},
    {N_("Post"), OP_POST},
    {N_("Followup"), OP_FOLLOWUP},
    {N_("Catchup"), OP_CATCHUP},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

const int Index_hex[128] = {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,  1,  2,  3,  4,  5,  6,  7,  8,
    9,  -1, -1, -1, -1, -1, -1, -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
};

const int Index_64[128] = {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60,
    61, -1, -1, -1, -1, -1, -1, -1, 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1,
    -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1,
};

static const char *const Capabilities[] = {
    "IMAP4",       "IMAP4rev1",
    "STATUS",      "ACL",
    "NAMESPACE",   "AUTH=CRAM-MD5",
    "AUTH=GSSAPI", "AUTH=ANONYMOUS",
    "STARTTLS",    "LOGINDISABLED",
    "IDLE",        "SASL-IR",
    "ENABLE",      NULL,
};

struct mx_ops mx_imap_ops = {
    .open = imap_open_mailbox,
    .open_append = imap_open_mailbox_append,
    .close = imap_close_mailbox,
    .open_msg = imap_fetch_message,
    .close_msg = imap_close_message,
    .commit_msg = imap_commit_message,
    .open_new_msg = imap_open_new_message,
    .check = imap_check_mailbox_reopen,
    .sync = NULL, /* imap syncing is handled by imap_sync_mailbox */
};

static const int Index_64[128] = {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 62, 63, -1, -1, -1, 52, 53, 54, 55, 56, 57, 58, 59, 60,
    61, -1, -1, -1, -1, -1, -1, -1, 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1,
    -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1,
};

static const char B64Chars[64] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', ',',
};

const char *names[] = {
    "neomuttrc-" PACKAGE_VERSION,
    "neomuttrc",
    "muttrc-" MUTT_VERSION,
    "muttrc",
    NULL,
};

const struct mapping_t Menus[] = {
    {"alias", MENU_ALIAS},
    {"attach", MENU_ATTACH},
    {"browser", MENU_FOLDER},
    {"compose", MENU_COMPOSE},
    {"editor", MENU_EDITOR},
    {"index", MENU_MAIN},
    {"pager", MENU_PAGER},
    {"postpone", MENU_POST},
    {"pgp", MENU_PGP},
    {"smime", MENU_SMIME},
    {"query", MENU_QUERY},
    {"generic", MENU_GENERIC},
    {NULL, 0},
};

static struct mapping_t KeyNames[] = {
    {"<PageUp>", KEY_PPAGE},
    {"<PageDown>", KEY_NPAGE},
    {"<Up>", KEY_UP},
    {"<Down>", KEY_DOWN},
    {"<Right>", KEY_RIGHT},
    {"<Left>", KEY_LEFT},
    {"<Delete>", KEY_DC},
    {"<BackSpace>", KEY_BACKSPACE},
    {"<Insert>", KEY_IC},
    {"<Home>", KEY_HOME},
    {"<End>", KEY_END},
    {"<Enter>", '\n'},
    {"<Return>", '\r'},
    {"<Esc>", '\033'},
    {"<Tab>", '\t'},
    {"<Space>", ' '},
    {NULL, 0},
};

static const struct extkey ExtKeys[] = {
    {"<c-up>", "kUP5"},
    {"<s-up>", "kUP"},
    {"<a-up>", "kUP3"},
    {"<s-down>", "kDN"},
    {"<a-down>", "kDN3"},
    {"<c-down>", "kDN5"},
    {"<c-right>", "kRIT5"},
    {"<s-right>", "kRIT"},
    {"<a-right>", "kRIT3"},
    {"<s-left>", "kLFT"},
    {"<a-left>", "kLFT3"},
    {"<c-left>", "kLFT5"},
    {"<s-home>", "kHOM"},
    {"<a-home>", "kHOM3"},
    {"<c-home>", "kHOM5"},
    {"<s-end>", "kEND"},
    {"<a-end>", "kEND3"},
    {"<c-end>", "kEND5"},
    {"<s-next>", "kNXT"},
    {"<a-next>", "kNXT3"},
    {"<c-next>", "kNXT5"},
    {"<s-prev>", "kPRV"},
    {"<a-prev>", "kPRV3"},
    {"<c-prev>", "kPRV5"},
    {0, 0},
};

struct mx_ops mx_mbox_ops = {
    .open = mbox_open_mailbox,
    .open_append = mbox_open_mailbox_append,
    .close = mbox_close_mailbox,
    .open_msg = mbox_open_message,
    .close_msg = mbox_close_message,
    .commit_msg = mbox_commit_message,
    .open_new_msg = mbox_open_new_message,
    .check = mbox_check_mailbox,
    .sync = mbox_sync_mailbox,
};

struct mx_ops mx_mmdf_ops = {
    .open = mbox_open_mailbox,
    .open_append = mbox_open_mailbox_append,
    .close = mbox_close_mailbox,
    .open_msg = mbox_open_message,
    .close_msg = mbox_close_message,
    .commit_msg = mmdf_commit_message,
    .open_new_msg = mbox_open_new_message,
    .check = mbox_check_mailbox,
    .sync = mbox_sync_mailbox,
};

struct mx_ops mx_maildir_ops = {
    .open = maildir_open_mailbox,
    .open_append = maildir_open_mailbox_append,
    .close = mh_close_mailbox,
    .open_msg = maildir_open_message,
    .close_msg = mh_close_message,
    .commit_msg = maildir_commit_message,
    .open_new_msg = maildir_open_new_message,
    .check = maildir_check_mailbox,
    .sync = mh_sync_mailbox,
};

struct mx_ops mx_mh_ops = {
    .open = mh_open_mailbox,
    .open_append = mh_open_mailbox_append,
    .close = mh_close_mailbox,
    .open_msg = mh_open_message,
    .close_msg = mh_close_message,
    .commit_msg = mh_commit_message,
    .open_new_msg = mh_open_new_message,
    .check = mh_check_mailbox,
    .sync = mh_sync_mailbox,
};

static const char *xdg_env_vars[] = {
        [kXDGConfigHome] = "XDG_CONFIG_HOME",
        [kXDGConfigDirs] = "XDG_CONFIG_DIRS",
};

static const char *xdg_defaults[] = {
        [kXDGConfigHome] = "~/.config", [kXDGConfigDirs] = "/etc/xdg",
};

static const luaL_Reg luaMuttDecl[] = {
    {"set", _lua_mutt_set},       {"get", _lua_mutt_get},
    {"call", _lua_mutt_call},     {"enter", _lua_mutt_enter},
    {"print", _lua_mutt_message}, {"message", _lua_mutt_message},
    {"error", _lua_mutt_error},   {NULL, NULL},
};

struct mx_ops mx_notmuch_ops = {
    .open = nm_open_mailbox, /* calls init_context() */
    .open_append = NULL,
    .close = nm_close_mailbox,
    .check = nm_check_mailbox,
    .sync = nm_sync_mailbox,
    .open_msg = nm_open_message,
    .close_msg = nm_close_message,
    .commit_msg = nm_commit_message,
    .open_new_msg = NULL,
};

struct mx_ops mx_nntp_ops = {
    .open = nntp_open_mailbox,
    .open_append = NULL,
    .close = nntp_fastclose_mailbox,
    .check = nntp_check_mailbox,
    .sync = nntp_sync_mailbox,
    .open_msg = nntp_fetch_message,
    .close_msg = nntp_close_message,
    .commit_msg = NULL,
    .open_new_msg = NULL,
};

static const struct mapping_t PagerHelp[] = {
    {N_("Exit"), OP_EXIT}, {N_("PrevPg"), OP_PREV_PAGE}, {N_("NextPg"), OP_NEXT_PAGE}, {NULL, 0},
};

static const struct mapping_t PagerHelpExtra[] = {
    {N_("View Attachm."), OP_VIEW_ATTACHMENTS},
    {N_("Del"), OP_DELETE},
    {N_("Reply"), OP_REPLY},
    {N_("Next"), OP_MAIN_NEXT_UNDELETED},
    {NULL, 0},
};

static struct mapping_t PagerNewsHelpExtra[] = {
    {N_("Post"), OP_POST},
    {N_("Followup"), OP_FOLLOWUP},
    {N_("Del"), OP_DELETE},
    {N_("Next"), OP_MAIN_NEXT_UNDELETED},
    {NULL, 0},
};

static struct range_regexp range_regexps[] = {
        [RANGE_K_REL] = {.raw = RANGE_REL_RX, .lgrp = 1, .rgrp = 3, .ready = 0},
        [RANGE_K_ABS] = {.raw = RANGE_ABS_RX, .lgrp = 1, .rgrp = 3, .ready = 0},
        [RANGE_K_LT] = {.raw = RANGE_LT_RX, .lgrp = 1, .rgrp = 2, .ready = 0},
        [RANGE_K_GT] = {.raw = RANGE_GT_RX, .lgrp = 2, .rgrp = 1, .ready = 0},
        [RANGE_K_BARE] = {.raw = RANGE_BARE_RX, .lgrp = 1, .rgrp = 1, .ready = 0},
};

const char *context_req_chars[] = {
        [RANGE_K_REL] = ".0123456789",
        [RANGE_K_ABS] = ".",
        [RANGE_K_LT] = "",
        [RANGE_K_GT] = "",
        [RANGE_K_BARE] = ".",
};

HashAlgorithms[] = {
    {1, "pgp-md5"},     {2, "pgp-sha1"},     {3, "pgp-ripemd160"},
    {5, "pgp-md2"},     {6, "pgp-tiger192"}, {7, "pgp-haval-5-160"},
    {8, "pgp-sha256"},  {9, "pgp-sha384"},   {10, "pgp-sha512"},
    {11, "pgp-sha224"}, {-1, NULL},
};

static const pop_auth_t pop_authenticators[] = {
    {pop_auth_sasl, NULL}, {pop_auth_apop, "apop"}, {pop_auth_user, "user"}, {NULL, NULL},
};

struct mx_ops mx_pop_ops = {
    .open = pop_open_mailbox,
    .open_append = NULL,
    .close = pop_close_mailbox,
    .open_msg = pop_fetch_message,
    .close_msg = pop_close_message,
    .check = pop_check_mailbox,
    .commit_msg = NULL,
    .open_new_msg = NULL,
    .sync = pop_sync_mailbox,
};

static const struct mapping_t PostponeHelp[] = {
    {N_("Exit"), OP_EXIT},
    {N_("Del"), OP_DELETE},
    {N_("Undel"), OP_UNDELETE},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

static const struct mapping_t QueryHelp[] = {
    {N_("Exit"), OP_EXIT},
    {N_("Mail"), OP_MAIL},
    {N_("New Query"), OP_QUERY},
    {N_("Make Alias"), OP_CREATE_ALIAS},
    {N_("Search"), OP_SEARCH},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};

static const struct mapping_t AttachHelp[] = {
    {N_("Exit"), OP_EXIT},   {N_("Save"), OP_SAVE}, {N_("Pipe"), OP_PIPE},
    {N_("Print"), OP_PRINT}, {N_("Help"), OP_HELP}, {NULL, 0},
};

static const struct mapping_t RemailerHelp[] = {
    {N_("Append"), OP_MIX_APPEND}, {N_("Insert"), OP_MIX_INSERT},
    {N_("Delete"), OP_MIX_DELETE}, {N_("Abort"), OP_EXIT},
    {N_("OK"), OP_MIX_USE},        {NULL, 0},
};

const char *const RFC822Errors[] = {
    "out of memory",   "mismatched parenthesis", "mismatched quotes",
    "bad route in <>", "bad address in <>",      "bad address spec",
};

static const struct mapping_t UrlMap[] = {
    {"file", U_FILE},   {"imap", U_IMAP},     {"imaps", U_IMAPS},
    {"pop", U_POP},     {"pops", U_POPS},     {"news", U_NNTP},
    {"snews", U_NNTPS}, {"mailto", U_MAILTO}, {"notmuch", U_NOTMUCH},
    {"smtp", U_SMTP},   {"smtps", U_SMTPS},   {NULL, U_UNKNOWN},
};

static struct compile_options comp_opts[] = {
    {"CRYPT_BACKEND_CLASSIC_PGP", 1},
    {"CRYPT_BACKEND_CLASSIC_PGP", 0},
    {"CRYPT_BACKEND_CLASSIC_SMIME", 1},
    {"CRYPT_BACKEND_CLASSIC_SMIME", 0},
    {"CRYPT_BACKEND_GPGME", 1},
    {"CRYPT_BACKEND_GPGME", 0},
    {"DEBUG", 1},
    {"USE_SSL_OPENSSL", 1},
    {"USE_SSL_OPENSSL", 0},
    {NULL, 0},
};

