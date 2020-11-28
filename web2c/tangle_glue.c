#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void usage_tangle();
char * extendfilename(char *s_name, char *s_ext);
char * basenamechangesuffix(char *s_name, char *s_ext, char *s_ext2);

void usage_tangle()
{
    printf("Usage tangle WEBFILE[.web] [CHANGEFILE[.ch]]\n");
    printf("  Tangle WEBFILE with CHANGEFILE into a pascal program.\n");
    printf("\n");
    printf("--help\tdisplay this help and exit\n");
    printf("--version\toutput version information and exit\n");
    printf("\n");
}

char * extendfilename(char *s_name, char *s_ext)
{
    int n;
    int n_ext;
    char *s;

    if (strrchr(s_name, '.')) {
        return strdup(s_name);
    } else {
        n = strlen(s_name);
        n_ext = strlen(s_ext);

        s=(char*)malloc((n+n_ext+2));
        strncpy(s, s_name, n);
        s[n] = '.';
        strcpy(s + n + 1, s_ext);
        return s;
    }
}

char * basenamechangesuffix(char *s_name, char *s_ext, char *s_ext2)
{
    char *s;
    int n;
    int n_ext;

    s = strrchr(s_name, '.');
    assert(strcmp(s + 1, s_ext) == 0);
    n = s - s_name;
    n_ext = strlen(s_ext2);

    s=(char*)malloc((n+n_ext+2));
    strncpy(s, s_name, n);
    s[n] = '.';
    strcpy(s + n + 1, s_ext2);
    return s;
}
