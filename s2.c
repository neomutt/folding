
static const char *cb_format_str(char *dest, size_t destlen, size_t col, int cols,
                                 char op, const char *src, const char *prefix,
                                 const char *ifstring, const char *elsestring,
                                 unsigned long data, format_flag flags)
{
  SBENTRY *sbe = (SBENTRY *) data;
  unsigned int optional;
  char fmt[STRING];

  return src;
}


static const char *cb_format_str(char *dest, size_t destlen, size_t col, int cols)
{
  return src;
}

struct nm_hdrdata
{
  char *folder; /**< Location of the email */
  char *tags;
  char *tags_transformed;
  struct nm_hdrtag *tag_list;
  char *oldpath;
  char *virtual_id; /**< Unique NotMuch Id */
  int magic;        /**< Type of mailbox the email is in */
};

/**
 * struct nm_hdrdata - NotMuch data attached to an email
 *
 * This stores all the NotMuch data associated with an email.
 *
 * @sa HEADER#data, MUTT_MBOX
 */
struct nm_hdrdata
{
  char *folder; /**< Location of the email */
  char *tags;
  char *tags_transformed;
  struct nm_hdrtag *tag_list;
  char *oldpath;
  char *virtual_id; /**< Unique NotMuch Id */
  int magic;        /**< Type of mailbox the email is in */
};


