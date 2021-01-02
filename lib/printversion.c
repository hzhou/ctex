/* printversion.c: Output for the standard GNU option --version.

   Written in 1996 by Karl Berry.  Public domain.  */

#include "../myw2c.h"
#include "lib.h"

/* We're passed in the original WEB banner char *, which has the form
This is PROGRAM, Version VERSION-NUMBER
   We parse the PROGRAM and VERSION-NUMBER out of this.
   
   If COPYRIGHT_HOLDER is specified and AUTHOR isn't, then use the
   former for the latter.  If AUTHOR is specified and COPYRIGHT_HOLDER
   isn't, it means the original program is public domain.
   
   Maybe I should have just done it all inline in each individual
   program, but tangle doesn't allow multiline char * constants ...  */

void
printversionandexit (const char * banner,
                     const char * copyright_holder,  
                     const char * author,
                     const char * extra_info)
{
  char * prog_name;
  unsigned len;
  const char * prog_name_start;
  const char * prog_name_end = strchr (banner, ',');
  const char * prog_version = strrchr (banner, ' ');
  assert (prog_name_end && prog_version);
  prog_version++;
  
  len = prog_name_end - banner;
  prog_name = xmalloc (len + 1);
  strncpy (prog_name, banner, len);
  prog_name[len] = 0;

  prog_name_start = strrchr (prog_name, ' ');
  assert (prog_name_start);
  prog_name_start++;

  /* The Web2c version char * starts with a space.  */
#ifdef PTEX
  printf ("%s %s (%s)%s\n", prog_name_start, prog_version, get_enc_string(),
          versionstring);
#else
  printf ("%s %s%s\n", prog_name_start, prog_version, versionstring);
#endif
  puts (" - CUSTOMIZED for CTeX");

  if (copyright_holder) {
    printf ("Copyright 2020 %s.\n", copyright_holder);
    if (!author)
      author = copyright_holder;
  }

  puts ("There is NO warranty.  Redistribution of this software is");
  fputs ("covered by the terms of ", stdout);
  printf ("both the %s copyright and\n", prog_name_start);
  puts ("the Lesser GNU General Public License.");
  puts ("For more information about these matters, see the file");
  printf ("named COPYING and the %s source.\n", prog_name_start);
  printf ("Primary author of %s: %s.\n", prog_name_start, author);

  if (extra_info)
    fputs (extra_info, stdout);

  free (prog_name);

  uexit (0);
}
