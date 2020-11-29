#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include <unistd.h>

typedef int bool;
#define true 1
#define false 0

char * uppercasify(const char *s);
FILE * xfopen(const char *filename, const char *mode);
void xfclose(FILE *f, const char *filename);
char * mykpse_find_file(const char *fname, const char *ext);
FILE * mykpse_open_file(const char *fname);
bool f_eof(FILE *file);
bool f_eoln(FILE *file);
void f_readln(FILE *file);

static void mykpse_add_path(const char *dir);
static char * internal_find_file(const char *fname, const char *ext, const char *path);

char mykpse_buf[1024];
char Paths[10][256];
int n_Paths;

char * uppercasify(const char *s)
{
    int n;
    char *s2;

    n = strlen(s);
    s2 = malloc(n + 1);
    for (int  i = 0; i<n; i++) {
        s2[i] = toupper(s[i]);
    }
    s2[n] = '\0';
    return s2;
}

FILE * xfopen(const char *filename, const char *mode)
{
    FILE *file;

    assert(filename && mode);
    file = fopen(filename, mode);
    if (file == NULL) {
        printf("Failed to open file %s, mode=%s\n", filename, mode);
    }
    return file;
}

void xfclose(FILE *f, const char *filename)
{
    assert(f);
    if (fclose(f) == EOF) {
        printf("Failed to close file %p\n", filename);
    }
}

char * mykpse_find_file(const char *fname, const char *ext)
{
    char *s;

    if (n_Paths == 0) {
        mykpse_add_path(".");
    }

    s = strrchr(fname, '.');
    if (s && ext && strcmp((s + 1), ext) == 0) {
        ext = NULL;
    }

    for (int  i = 0; i<n_Paths; i++) {
        s = internal_find_file(fname, ext, Paths[i]);
        if (s) {
            return s;
        }
    }
    return NULL;
}

FILE * mykpse_open_file(const char *fname)
{
    char *s;

    s = mykpse_find_file(fname, NULL);
    if (s) {
        return fopen(fname, "r");
    }

    return NULL;
}

bool f_eof(FILE *file)
{
    int c;

    if (!file) {
        return true;
    }
    if (feof(file)) {
        return true;
    }

    c = getc(file);
    if (c == EOF) {
        return true;
    }

    ungetc(c, file);
    return false;
}

bool f_eoln(FILE *file)
{
    int c;

    if (feof(file)) {
        return true;
    }

    c = getc(file);
    if (c == EOF) {
        return true;
    }

    ungetc(c, file);
    return c == '\n' || c == '\r';
}

void f_readln(FILE *file)
{
    int c;

    while (1) {
        c = getc(file);
        if (c == '\n' || c == '\r' || c == EOF) {
            break;
        }
    }
}

void mykpse_add_path(const char *dir)
{
    int n;

    if (n_Paths < 10) {
        n = strlen(dir);
        if (n < 256) {
            strcpy(Paths[n_Paths], dir);
            n_Paths++;
        }
    }
}

char * internal_find_file(const char *fname, const char *ext, const char *path)
{
    int n;

    n = strlen(fname) + strlen(path) + 2;
    if (ext) {
        n += strlen(ext) + 1;
    }

    if (strlen(fname) + strlen(path) + 2 < 1024) {
        strcpy(mykpse_buf, path);
        strcat(mykpse_buf, "/");
        strcat(mykpse_buf, fname);
        if (ext) {
            strcat(mykpse_buf, ".");
            strcat(mykpse_buf, ext);
        }

        if (access(mykpse_buf, F_OK) != -1) {
            return mykpse_buf;
        }
    }
    return NULL;
}
