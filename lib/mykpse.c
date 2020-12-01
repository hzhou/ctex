/* replacement for kpathsea library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../myw2c.h"
#include "lib.h"

char *kpse_program_name;
bool kpse_make_tex_discard_errors;

static const char *kpse_ext_list[] = {
    "tex",
    "mf",
    "mp",
    "vf",
    "tfm",
    "ocp",
    "ofm",
};

void kpse_set_program_name(char *name) {
    kpse_program_name = name;
}

const char *kpse_get_ext(kpse_file_format_type fmt) {
    if (fmt == kpse_tex_format) {
        return "tex";
    } else if (fmt == kpse_mf_format) {
        return "mf";
    } else if (fmt == kpse_mp_format) {
        return "mp";
    } else if (fmt == kpse_vf_format) {
        return "vf";
    } else if (fmt == kpse_tfm_format) {
        return "tfm";
    } else if (fmt == kpse_ocp_format) {
        return "ocp";
    } else if (fmt == kpse_ofm_format) {
        return "ofm";
    } else {
        return NULL;
    }
}

char *kpse_var_value(const char *name) {
    return NULL;
}

char *concat(const char *a, const char *b){
    int n_a = strlen(a);
    int n_b = strlen(b);
    char *s = malloc(n_a+n_b+1);
    strcpy(s, a);
    strcpy(s+n_a, b);
    return s;
}

char *concat3(const char *a, const char *b, const char *c){
    int n_a = strlen(a);
    int n_b = strlen(b);
    int n_c = strlen(c);
    char *s = malloc(n_a+n_b+n_c+1);
    strcpy(s, a);
    strcpy(s+n_a, b);
    strcpy(s+n_a+n_b, c);
    return s;
}
