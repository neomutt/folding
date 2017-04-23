
static const struct mapping_t AliasHelp[] = {
    {N_("Exit"), OP_EXIT},      {N_("Del"), OP_DELETE},
    {N_("Undel"), OP_UNDELETE}, {N_("Select"), OP_GENERIC_SELECT_ENTRY},
    {N_("Help"), OP_HELP},      {NULL, 0},
};

/* one liner description */
static const char B64Chars[64] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/',
};

/**
 * struct mapping_t FolderHelp - blah blah
 *
 * asdf asdf asdf asdf
 */
static const struct mapping_t FolderHelp[] = {
    {N_("Exit"), OP_EXIT},
    {N_("Chdir"), OP_CHANGE_DIRECTORY},
    {N_("Goto"), OP_BROWSER_GOTO_FOLDER},
    {N_("Mask"), OP_ENTER_MASK},
    {N_("Help"), OP_HELP},
    {NULL, 0},
};


