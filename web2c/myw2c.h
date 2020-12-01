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
#include <math.h>
#include <errno.h>

#include <unistd.h>

typedef char * string;
typedef const char * const_string;
typedef bool boolean;

/* temporary -- we should modify the source */
#define longinteger long
#define schar char

#ifndef Fputs
#define Fputs(F, str) fputs(str, F)
#endif
#ifndef vgetc
#define vgetc(f)      (void)getc(f)
#endif

#define WEB2C_NORETURN
#define SCHAR_TYPE char
#define STREQ(a, b) (strcmp(a, b) == 0)
#define STRNEQ(a, b, n) (strncmp(a, b, n) == 0)
#define FILESTRCASEEQ(a, b) STREQ(a,b)

#define xmalloc malloc
#define xrealloc realloc
#define xfseek(f,off,whence,filename) fseek(f,off,whence)
#define xftell(f,filename) ftell(f)
#define xstrdup strdup
#define uexit exit

#define kpathsea_version_string " - CUSTOM"
#define kpathsea_debug false
#define kpse_invocation_name "mykpse"

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
