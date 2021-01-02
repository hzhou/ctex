/* chartostring.c: change a character (i.e., an integer) to a
   one-character char *.

Written in 1994 by Karl Berry.  Public domain.  */

#include "../myw2c.h"
#include "lib.h"

/* This is needed because web2c turns the Pascal construct 'x' into the
   C character constant 'x', not the char * "x". And we need to keep it
   that way because that's how xord is initialized, etc.  But sometimes
   we want one-character strings -- e.g., in tangle.ch and weave.ch.
   There's no real alternative to wasting the two bytes of memory (plus
   malloc overhead) here, but it doesn't matter.  */

char *
chartostring (char ch)
{
  char * str = xmalloc (2);
  str[0] = ch;
  str[1] = 0;
  return str;
}
