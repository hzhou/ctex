/* inputint.c: read integers from text files.  These routines are only
   used for debugging and such, so perfect error checking isn't
   necessary.  Public domain. */

#include "../myw2c.h"
#include "lib.h"

#define MAX_INT_LENGTH 100
/* Read an integer from the file F, reading past the subsequent end of
   line.  */

integer
inputint (FILE *f)
{
  char buffer[MAX_INT_LENGTH]; /* Long enough for anything reasonable.  */

  return
    fgets (buffer, sizeof (buffer), f)
    ? atoi (buffer)
    : 0;
}
