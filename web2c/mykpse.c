#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>

const char * mykpse_find_file(const char *fname);
char * uppercasify(const char *s);
FILE * xfopen(const char *filename, const char *mode);
void xfclose(FILE *f, const char *filename);

static char * internal_find_file(const char *fname, const char *path);

char mykpse_buf[1024];
char Paths[10][256];
int n_Paths;

const char * mykpse_find_file(const char *fname)
{
    char *s;
    int n;

    s = strrchr(fname, '/');
    if (access(fname, F_OK) != -1) {
        if (s) {
            if (n_Paths < 10) {
                n = s - fname;
                if (n < 256) {
                    strncpy(Paths[n_Paths], fname, n);
                    Paths[n_Paths][n] = '\0';
                    n_Paths++;
                }
            }
        }
        return fname;
    } else if (s == NULL) {
        for (int  i = 0; i<n_Paths; i++) {
            s = internal_find_file(fname, Paths[i]);
            if (s) {
                return s;
            }
        }
    }
    return NULL;
}

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

char * internal_find_file(const char *fname, const char *path)
{
    if (strlen(fname) + strlen(path) + 2 < 1024) {
        strcpy(mykpse_buf, path);
        strcat(mykpse_buf, "/");
        strcat(mykpse_buf, fname);
        if (access(mykpse_buf, F_OK) != -1) {
            return mykpse_buf;
        }
    }
    return NULL;
}
