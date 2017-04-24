
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

