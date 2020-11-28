#include <unistd.h>
#include <string.h>

const char * mykpse_find_file(const char *fname);

static char * my_find_file(const char *fname, const char *path);

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
            s = my_find_file(fname, Paths[i]);
            if (s) {
                return s;
            }
        }
    }
    return NULL;
}

char * my_find_file(const char *fname, const char *path)
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
