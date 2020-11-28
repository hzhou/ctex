#ifndef MYW2C_H
#define MYW2C_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <limits.h>

#include <unistd.h>

typedef char * string;
typedef const char * const_string;
typedef bool boolean;

#define SCHAR_TYPE char
#define STREQ(a, b) (strcmp(a, b) == 0)

char * mykpse_find_file(const char *fname);

char *uppercasify(const char *s);
FILE *xfopen(const char *fname, const char *mode);
void xfclose(FILE *f, const char *fname);

#endif /* not MYW2C_H */
