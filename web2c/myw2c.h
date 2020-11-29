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

/* temporary -- we should modify the source */
#define integer int
#define longinteger long
#define schar char

#ifndef CPASCAL_H
#define uexit exit
#define Fputs(F, str) fputs(str, F)
#define vgetc(f)      (void)getc(f)

#else
#define WEB2C_NORETURN
#endif

#define SCHAR_TYPE char
#define STREQ(a, b) (strcmp(a, b) == 0)

#define xmalloc malloc
#define xfseek(f,off,whence,filename) fseek(f,off,whence)
#define xftell(f,filename) ftell(f)
#define xstrdup strdup

void mykpse_add_path(const char *dir);
char * mykpse_find_file(const char *fname, const char *ext);
FILE * mykpse_open_file(const char *fname);

bool f_eof(FILE *f);
bool f_eoln(FILE *f);
void f_readln(FILE *f);

char *uppercasify(const char *s);
FILE *xfopen(const char *fname, const char *mode);
void xfclose(FILE *f, const char *fname);

#endif /* not MYW2C_H */
