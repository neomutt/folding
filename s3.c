
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
  /* This comment
   * deserves
   * more than
   * one line
   */
  struct nm_hdrtag *tag_list;
  char *oldpath;
  char *virtual_id; /**< Unique NotMuch Id */
  int magic;        /**< Type of mailbox the email is in */
};


