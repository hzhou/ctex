#include <stdbool.h>
#include <stddef.h>


#ifndef HAVE_GETTEXT
#define HAVE_GETTEXT 0
#endif

#if HAVE_GETTEXT
#include <locale.h>
#include <libintl.h>
#else
#define setlocale(A,B) ""
#define bindtextdomain(A,B) ""
#define textdomain(A) ""
#define gettext(A) A
#endif

#define HAVE_BOOLEAN

#include <myw2c.h>

#define and_and 04
#define lt_lt 020
#define gt_gt 021
#define plus_plus 013
#define minus_minus 01
#define minus_gt 031
#define non_eq 032
#define lt_eq 034
#define gt_eq 035
#define eq_eq 036
#define or_or 037
#define dot_dot_dot 016
#define colon_colon 06
#define period_ast 026
#define minus_gt_ast 027 \

#define buf_size 1000
#define longest_name 10000
#define long_buf_size (buf_size+longest_name)
#define xisspace(c) (isspace((uint8_t) c) &&((uint8_t) c<0200) )
#define xisupper(c) (isupper((uint8_t) c) &&((uint8_t) c<0200) )  \

#define max_include_depth 10 \

#define max_file_name_length 1024
#define cur_file file[include_depth]
#define cur_file_name file_name[include_depth]
#define cur_line line[include_depth]
#define web_file file[0]
#define web_file_name file_name[0] \

#define lines_dont_match (change_limit-change_buffer!=limit-buffer|| \
strncmp(buffer,change_buffer,(size_t) (limit-buffer) ) )  \

#define if_section_start_make_pending(b) {*limit= '!'; \
for(loc= buffer;xisspace(*loc) ;loc++) ; \
*limit= ' '; \
if(*loc=='@'&&(xisspace(*(loc+1) ) ||*(loc+1) =='*') ) change_pending= b; \
} \

#define max_sections 10239 \
 \

#define too_long() {include_depth--; \
err_print(_("! Include file name too long") ) ;goto restart;} \
 \

#define max_bytes 1000000 \

#define max_names 10239 \
 \

#define length(c) (size_t) ((c+1) ->byte_start-(c) ->byte_start)
#define print_id(c) term_write((c) ->byte_start,length((c) ) )  \

#define hash_size 8501 \

#define llink link
#define rlink dummy.Rlink
#define root name_dir->rlink \
 \

#define first_chunk(p) ((p) ->byte_start+2)
#define prefix_length(p) (int) ((unsigned char) *((p) ->byte_start) *256+ \
(unsigned char) *((p) ->byte_start+1) )
#define set_prefix_length(p,m) (*((p) ->byte_start) = (m) /256, \
*((p) ->byte_start+1) = (m) %256)  \

#define less 0
#define equal 1
#define greater 2
#define prefix 3
#define extension 4 \

#define bad_extension 5 \

#define spotless 0
#define harmless_message 1
#define error_message 2
#define fatal_message 3
#define mark_harmless {if(history==spotless) history= harmless_message;}
#define mark_error history= error_message \

#define RETURN_OK 0
#define RETURN_WARN 5
#define RETURN_ERROR 10
#define RETURN_FAIL 20 \

#define confusion(s) fatal(_("! This can't happen: ") ,s)  \
 \

#define show_banner 1
#define show_progress 1
#define show_stats flags['s']
#define show_happiness flags['h']
#define temporary_output flags['t']
#define make_xrefs flags['x'] \

#define flag_change (**argv!='-')
#define update_terminal fflush(stdout)  \

#define new_line putchar('\n')
#define putxchar putchar
#define term_write(a,b) fflush(stdout) ,fwrite(a,sizeof(char) ,b,stdout)
#define C_printf(c,a) fprintf(C_file,c,a)
#define C_putc(c) putc(c,C_file)  \

#define max_banner 50 \

#define PATH_SEPARATOR separators[0]
#define DIR_SEPARATOR separators[1]
#define DEVICE_SEPARATOR separators[2] \

#define _(S) gettext(S)  \

typedef enum { ctangle, cweave, ctwill } cweb;
const char *program_name_list[] = {
    "ctangle",
    "cweave",
    "ctwill",
};

cweb program;

static int set_program_name(const char *name)
{
    if (strcmp(name, "ctangle")) {
        program = ctangle;
    } else if (strcmp(name, "cweave")) {
        program = cweave;
    } else if (strcmp(name, "ctwill")) {
        program = ctwill;
    } else {
        printf("Unrecognized program name %s\n", name);
        exit(1);
    }
}


char section_text[longest_name + 1];
char *section_text_end = section_text + longest_name;
char *id_first;
char *id_loc;


char buffer[long_buf_size];
char *buffer_end = buffer + buf_size - 2;
char *limit = buffer;
char *loc = buffer;


int include_depth;
FILE *file[max_include_depth];
FILE *change_file;
char file_name[max_include_depth][max_file_name_length];

char change_file_name[max_file_name_length];
int line[max_include_depth];
int change_line;
int change_depth;
bool input_has_ended;
bool changing;
bool web_file_open = 0;


uint16_t section_count;
bool changed_section[max_sections];
bool change_pending;

bool print_where = 0;


typedef struct name_info {
    char *byte_start;

    struct name_info *link;


    union {
        struct name_info *Rlink;

        char Ilk;
    } dummy;


    void *equiv_or_xref;


} name_info;
typedef name_info *name_pointer;
char byte_mem[max_bytes];
char *byte_mem_end = byte_mem + max_bytes - 1;
name_info name_dir[max_names];
name_pointer name_dir_end = name_dir + max_names - 1;


name_pointer name_ptr;
char *byte_ptr;


typedef name_pointer *hash_pointer;
name_pointer hash[hash_size];
hash_pointer hash_end = hash + hash_size - 1;
hash_pointer h;


int history = spotless;


int argc;
char **argv;
char C_file_name[max_file_name_length];
char tex_file_name[max_file_name_length];
char idx_file_name[max_file_name_length];
char scn_file_name[max_file_name_length];
char check_file_name[max_file_name_length];
bool flags[128];
const char *use_language = "";


FILE *C_file;
FILE *tex_file;
FILE *idx_file;
FILE *scn_file;
FILE *check_file;
FILE *active_file;
char *found_filename;


int phase;


char change_buffer[buf_size];
char *change_limit;


char cb_banner[max_banner];
char *texmf_locale;
#ifndef SEPARATORS
#define SEPARATORS "://"
#endif
char separators[] = SEPARATORS;



extern bool names_match(name_pointer, const char *, size_t, uint8_t);


extern void init_p(name_pointer, uint8_t);


extern void init_node(name_pointer);


static int section_name_cmp(char **, int, name_pointer);


extern void err_print(const char *);


extern int wrap_up(void);
extern void print_stats(void);


extern void fatal(const char *, const char *);
extern void overflow(const char *);


static void scan_args(void);


bool get_line(void);
name_pointer id_lookup(const char *, const char *, char);
name_pointer section_lookup(char *, char *, int);
void check_complete(void);
void common_init(void);
void print_prefix_name(name_pointer);
void print_section_name(name_pointer);
void reset_input(void);
void sprint_section_name(char *, name_pointer);


static bool input_ln(FILE *);
static int web_strcmp(char *, int, char *, int);
static name_pointer add_section_name(name_pointer, int, char *, char *, int);
static void extend_section_name(name_pointer, char *, char *, int);
static void check_change(void);
static void prime_the_change_buffer(void);


static void usage(void);
void cb_show_banner(void);

void common_init(void)
{

    name_dir->byte_start = byte_ptr = byte_mem;
    name_ptr = name_dir + 1;
    name_ptr->byte_start = byte_mem;


    for (h = hash; h <= hash_end; *h++ = NULL);


    root = NULL;

    set_program_name(argv[0]);

    temporary_output = 1;

    scan_args();
    if (program == ctangle) {
        if ((C_file = fopen(C_file_name, "a")) == NULL)
            fatal(_("! Cannot open output file "), C_file_name);
        else
            fclose(C_file);
        strcpy(check_file_name, C_file_name);
        if (check_file_name[0] != '\0') {
            char *dot_pos = strrchr(check_file_name, '.');
            if (dot_pos == NULL)
                strcat(check_file_name, ".ttp");
            else
                strcpy(dot_pos, ".ttp");
        }
        if ((C_file = fopen(check_file_name, "wb")) == NULL)
            fatal(_("! Cannot open output file "), check_file_name);

    } else {
        if ((tex_file = fopen(tex_file_name, "a")) == NULL)
            fatal(_("! Cannot open output file "), tex_file_name);
        else
            fclose(tex_file);
        strcpy(check_file_name, tex_file_name);
        if (check_file_name[0] != '\0') {
            char *dot_pos = strrchr(check_file_name, '.');
            if (dot_pos == NULL)
                strcat(check_file_name, ".wtp");
            else
                strcpy(dot_pos, ".wtp");
        }
        if ((tex_file = fopen(check_file_name, "wb")) == NULL)
            fatal(_("! Cannot open output file "), check_file_name);
    }


}


static bool input_ln(FILE * fp)
{
    register int c = EOF;
    register char *k;
    if (feof(fp))
        return (0);
    limit = k = buffer;
    while (k <= buffer_end && (c = getc(fp)) != EOF && c != '\n')
        if ((*(k++) = c) != ' ' && c != '\r')
            limit = k;
    if (k > buffer_end)
        if ((c = getc(fp)) != EOF && c != '\n') {
            ungetc(c, fp);
            loc = buffer;
            err_print(_("! Input line too long"));

        }
    if (c == EOF && limit == buffer)
        return (0);

    return (1);
}


static void prime_the_change_buffer(void)
{
    change_limit = change_buffer;

    while (1) {
        change_line++;
        if (!input_ln(change_file))
            return;
        if (limit < buffer + 2)
            continue;
        if (buffer[0] != '@')
            continue;
        if (xisupper(buffer[1]))
            buffer[1] = tolower((uint8_t) buffer[1]);
        if (buffer[1] == 'x')
            break;
        if (buffer[1] == 'y' || buffer[1] == 'z' || buffer[1] == 'i') {
            loc = buffer + 2;
            err_print(_("! Missing @x in change file"));

        }
    }

    ;

    do {
        change_line++;
        if (!input_ln(change_file)) {
            err_print(_("! Change file ended after @x"));

            return;
        }
    }
    while (limit == buffer);

    ;

    {
        change_limit = change_buffer + (ptrdiff_t) (limit - buffer);
        strncpy(change_buffer, buffer, (size_t) (limit - buffer + 1));
    }

    ;
}


static void check_change(void)
{
    int n = 0;
    if (lines_dont_match)
        return;
    change_pending = 0;
    if (!changed_section[section_count]) {
        if_section_start_make_pending(1);
        if (!change_pending)
            changed_section[section_count] = 1;
    }
    while (1) {
        changing = 1;
        print_where = 1;
        change_line++;
        if (!input_ln(change_file)) {
            err_print(_("! Change file ended before @y"));

            change_limit = change_buffer;
            changing = 0;
            return;
        }
        if (limit > buffer + 1 && buffer[0] == '@') {
            char xyz_code = xisupper(buffer[1]) ? tolower((uint8_t) buffer[1]) : buffer[1];

            if (xyz_code == 'x' || xyz_code == 'z') {
                loc = buffer + 2;
                err_print(_("! Where is the matching @y?"));

            } else if (xyz_code == 'y') {
                if (n > 0) {
                    loc = buffer + 2;
                    printf("\n! Hmm... %d ", n);
                    err_print(_("of the preceding lines failed to match"));

                }
                change_depth = include_depth;
                return;
            }
            ;
        }

        {
            change_limit = change_buffer + (ptrdiff_t) (limit - buffer);
            strncpy(change_buffer, buffer, (size_t) (limit - buffer + 1));
        }

        ;
        changing = 0;
        cur_line++;
        while (!input_ln(cur_file)) {
            if (include_depth == 0) {
                err_print(_("! CWEB file ended during a change"));

                input_has_ended = 1;
                return;
            }
            include_depth--;
            cur_line++;
        }
        if (lines_dont_match)
            n++;
    }
}


void reset_input(void)
{
    limit = buffer;
    loc = buffer + 1;
    buffer[0] = ' ';

    if ((found_filename = mykpse_find_file(web_file_name)) == NULL || (web_file = fopen(found_filename, "r")) == NULL) {
        printf("found_filename = %s\n", found_filename);
        fatal(_("! Cannot open input file "), web_file_name);
    } else if (strlen(found_filename) < max_file_name_length) {

        if (strcmp(web_file_name, found_filename))
            strcpy(web_file_name, found_filename + ((strncmp(found_filename, "./", 2) == 0) ? 2 : 0));
    } else
        fatal(_("! Filename too long\n"), found_filename);


    web_file_open = 1;
    if ((found_filename = mykpse_find_file(change_file_name)) == NULL || (change_file = fopen(found_filename, "r")) == NULL) {
        fatal(_("! Cannot open change file "), change_file_name);
    } else if (strlen(found_filename) < max_file_name_length) {

        if (strcmp(change_file_name, found_filename))
            strcpy(change_file_name, found_filename + ((strncmp(found_filename, "./", 2) == 0) ? 2 : 0));
    } else
        fatal(_("! Filename too long\n"), found_filename);

    ;
    include_depth = 0;
    cur_line = 0;
    change_line = 0;
    change_depth = include_depth;
    changing = 1;
    prime_the_change_buffer();
    changing = !changing;
    limit = buffer;
    loc = buffer + 1;
    buffer[0] = ' ';
    input_has_ended = 0;
}


bool get_line(void)
{
  restart:
    if (changing && include_depth == change_depth) {
        change_line++;
        if (!input_ln(change_file)) {
            err_print(_("! Change file ended without @z"));

            buffer[0] = '@';
            buffer[1] = 'z';
            limit = buffer + 2;
        }
        if (limit > buffer) {
            if (change_pending) {
                if_section_start_make_pending(0);
                if (change_pending) {
                    changed_section[section_count] = 1;
                    change_pending = 0;
                }
            }
            *limit = ' ';
            if (buffer[0] == '@') {
                if (xisupper(buffer[1]))
                    buffer[1] = tolower((uint8_t) buffer[1]);
                if (buffer[1] == 'x' || buffer[1] == 'y') {
                    loc = buffer + 2;
                    err_print(_("! Where is the matching @z?"));

                } else if (buffer[1] == 'z') {
                    prime_the_change_buffer();
                    changing = !changing;
                    print_where = 1;
                }
            }
        }
    }
    ;
    if (!changing || include_depth > change_depth) {
        {
            cur_line++;
            while (!input_ln(cur_file)) {
                print_where = 1;
                if (include_depth == 0) {
                    input_has_ended = 1;
                    break;
                } else {
                    fclose(cur_file);
                    include_depth--;
                    if (changing && include_depth == change_depth)
                        break;
                    cur_line++;
                }
            }
            if (!changing && !input_has_ended)
                if (limit - buffer == change_limit - change_buffer)
                    if (buffer[0] == change_buffer[0])
                        if (change_limit > change_buffer)
                            check_change();
        }

        ;
        if (changing && include_depth == change_depth)
            goto restart;
    }
    if (input_has_ended)
        return 0;
    loc = buffer;
    *limit = ' ';
    if (buffer[0] == '@' && (buffer[1] == 'i' || buffer[1] == 'I')) {
        loc = buffer + 2;
        *limit = '"';
        while (*loc == ' ' || *loc == '\t')
            loc++;
        if (loc >= limit) {
            err_print(_("! Include file name not given"));

            goto restart;
        }
        if (include_depth >= max_include_depth - 1) {
            err_print(_("! Too many nested includes"));

            goto restart;
        }
        include_depth++;
        {
            char *cur_file_name_end = cur_file_name + max_file_name_length - 1;
            char *k = cur_file_name;

            if (*loc == '"') {
                loc++;
                while (*loc != '"' && k <= cur_file_name_end)
                    *k++ = *loc++;
                if (loc == limit)
                    k = cur_file_name_end + 1;
            } else
                while (*loc != ' ' && *loc != '\t' && *loc != '"' && k <= cur_file_name_end)
                    *k++ = *loc++;
            if (k > cur_file_name_end)
                too_long();

            *k = '\0';
            if ((found_filename = mykpse_find_file(cur_file_name)) != NULL && (cur_file = fopen(found_filename, "r")) != NULL) {

                if (strlen(found_filename) < max_file_name_length) {
                    if (strcmp(cur_file_name, found_filename))
                        strcpy(cur_file_name, found_filename + ((strncmp(found_filename, "./", 2) == 0) ? 2 : 0));
                } else
                    fatal(_("! Filename too long\n"), found_filename);
                cur_line = 0;
                print_where = 1;
                goto restart;
            }
            include_depth--;
            err_print(_("! Cannot open include file"));
            goto restart;
        }

        ;
    }
    return 1;
}


void check_complete(void)
{
    if (change_limit != change_buffer) {
        strncpy(buffer, change_buffer, (size_t) (change_limit - change_buffer + 1));
        limit = buffer + (ptrdiff_t) (change_limit - change_buffer);
        changing = 1;
        change_depth = include_depth;
        loc = buffer;
        err_print(_("! Change file entry did not match"));

    }
}


name_pointer id_lookup(const char *first, const char *last, char t)
{
    const char *i = first;
    int h;
    int l;
    name_pointer p;
    if (last == NULL)
        for (last = first; *last != '\0'; last++);
    l = (int) (last - first);

    h = (unsigned char) *i;
    while (++i < last)
        h = (h + h + (int) ((unsigned char) *i)) % hash_size;


    ;

    p = hash[h];
    while (p && !names_match(p, first, l, t))
        p = p->link;
    if (p == NULL) {
        p = name_ptr;
        p->link = hash[h];
        hash[h] = p;
    }
    ;
    if (p == name_ptr) {        /*39: */
        if (byte_ptr + l > byte_mem_end)
            overflow(_("byte memory"));
        if (name_ptr >= name_dir_end)
            overflow(_("name"));
        strncpy(byte_ptr, first, l);
        (++name_ptr)->byte_start = byte_ptr += l;
        init_p(p, t);
    }
    ;
    return (p);
}


void print_section_name(name_pointer p)
{
    char *ss, *s = first_chunk(p);
    name_pointer q = p + 1;
    while (p != name_dir) {
        ss = (p + 1)->byte_start - 1;
        if (*ss == ' ' && ss >= s) {
            term_write(s, (size_t) (ss - s));
            p = q->link;
            q = p;
        } else {
            term_write(s, (size_t) (ss + 1 - s));
            p = name_dir;
            q = NULL;
        }
        s = p->byte_start;
    }
    if (q)
        term_write("...", 3);
}


void sprint_section_name(char *dest, name_pointer p)
{
    char *ss, *s = first_chunk(p);
    name_pointer q = p + 1;
    while (p != name_dir) {
        ss = (p + 1)->byte_start - 1;
        if (*ss == ' ' && ss >= s) {
            p = q->link;
            q = p;
        } else {
            ss++;
            p = name_dir;
        }
        strncpy(dest, s, (size_t) (ss - s)), dest += ss - s;
        s = p->byte_start;
    }
    *dest = '\0';
}


void print_prefix_name(name_pointer p)
{
    char *s = first_chunk(p);
    int l = prefix_length(p);
    term_write(s, l);
    if (s + l < (p + 1)->byte_start)
        term_write("...", 3);
}


static int web_strcmp(char *j, int j_len, char *k, int k_len)
{
    char *j1 = j + j_len, *k1 = k + k_len;
    while (k < k1 && j < j1 && *j == *k)
        k++, j++;
    if (k == k1)
        if (j == j1)
            return equal;
        else
            return extension;
    else if (j == j1)
        return prefix;
    else if (*j < *k)
        return less;
    else
        return greater;
}


static name_pointer add_section_name(name_pointer par, int c, char *first, char *last, int ispref)
{
    name_pointer p = name_ptr;
    char *s = first_chunk(p);
    int name_len = (int) (last - first) + ispref;
    if (s + name_len > byte_mem_end)
        overflow(_("byte memory"));
    if (name_ptr + 1 >= name_dir_end)
        overflow(_("name"));
    (++name_ptr)->byte_start = byte_ptr = s + name_len;
    if (ispref) {
        *(byte_ptr - 1) = ' ';
        name_len--;
        name_ptr->link = name_dir;
        (++name_ptr)->byte_start = byte_ptr;
    }
    set_prefix_length(p, name_len);
    strncpy(s, first, name_len);
    p->llink = NULL;
    p->rlink = NULL;
    init_node(p);
    return par == NULL ? (root = p) : c == less ? (par->llink = p) : (par->rlink = p);
}


static void extend_section_name(name_pointer p, char *first, char *last, int ispref)
{
    char *s;
    name_pointer q = p + 1;
    int name_len = (int) (last - first) + ispref;
    if (name_ptr >= name_dir_end)
        overflow(_("name"));
    while (q->link != name_dir)
        q = q->link;
    q->link = name_ptr;
    s = name_ptr->byte_start;
    name_ptr->link = name_dir;
    if (s + name_len > byte_mem_end)
        overflow(_("byte memory"));
    (++name_ptr)->byte_start = byte_ptr = s + name_len;
    strncpy(s, first, name_len);
    if (ispref)
        *(byte_ptr - 1) = ' ';
}


name_pointer section_lookup(char *first, char *last, int ispref)
{
    int c = 0;
    name_pointer p = root;
    name_pointer q = NULL;
    name_pointer r = NULL;
    name_pointer par = NULL;

    int name_len = (int) (last - first) + 1;

    while (p) {
        c = web_strcmp(first, name_len, first_chunk(p), prefix_length(p));
        if (c == less || c == greater) {
            if (r == NULL)
                par = p;
            p = (c == less ? p->llink : p->rlink);
        } else {
            if (r != NULL) {
                fputs(_("\n! Ambiguous prefix: matches <"), stdout);

                print_prefix_name(p);
                fputs(_(">\n and <"), stdout);
                print_prefix_name(r);
                err_print(">");
                return name_dir;
            }
            r = p;
            p = p->llink;
            q = r->rlink;
        }
        if (p == NULL)
            p = q, q = NULL;
    }

    ;

    if (r == NULL)
        return add_section_name(par, c, first, last + 1, ispref);

    ;

    switch (section_name_cmp(&first, name_len, r)) {

        case prefix:
            if (!ispref) {
                fputs(_("\n! New name is a prefix of <"), stdout);

                print_section_name(r);
                err_print(">");
            } else if (name_len < prefix_length(r))
                set_prefix_length(r, name_len);

        case equal:
            return r;
        case extension:
            if (!ispref || first <= last)
                extend_section_name(r, first, last + 1, ispref);
            return r;
        case bad_extension:
            fputs(_("\n! New name extends <"), stdout);

            print_section_name(r);
            err_print(">");
            return r;
        default:
            fputs(_("\n! Section name incompatible with <"), stdout);

            print_prefix_name(r);
            fputs(_(">,\n which abbreviates <"), stdout);
            print_section_name(r);
            err_print(">");
            return r;
    }

    ;
}


static int section_name_cmp(char **pfirst, int len, name_pointer r)
{
    char *first = *pfirst;
    name_pointer q = r + 1;
    char *ss, *s = first_chunk(r);
    int c;
    int ispref;
    while (1) {
        ss = (r + 1)->byte_start - 1;
        if (*ss == ' ' && ss >= r->byte_start)
            ispref = 1, q = q->link;
        else
            ispref = 0, ss++, q = name_dir;
        switch (c = web_strcmp(first, len, s, ss - s)) {
            case equal:
                if (q == name_dir)
                    if (ispref) {
                        *pfirst = first + (ptrdiff_t) (ss - s);
                        return extension;
                    } else
                        return equal;
                else
                    return (q->byte_start == (q + 1)->byte_start) ? equal : prefix;
            case extension:
                if (!ispref)
                    return bad_extension;
                first += ss - s;
                if (q != name_dir) {
                    len -= (int) (ss - s);
                    s = q->byte_start;
                    r = q;
                    continue;
                }
                *pfirst = first;
                return extension;
            default:
                return c;
        }
    }
}


void err_print(const char *s)
{
    char *k, *l;
    printf(*s == '!' ? "\n%s" : "%s", s);
    if (web_file_open)
    {   /*59: */
        if (changing && include_depth == change_depth)
            printf(_(". (l. %d of change file)\n"), change_line);
        else if (include_depth == 0)
            printf(_(". (l. %d)\n"), cur_line);
        else
            printf(_(". (l. %d of include file %s)\n"), cur_line, cur_file_name);
        l = (loc >= limit ? limit : loc);
        if (l > buffer) {
            for (k = buffer; k < l; k++)
                if (*k == '\t')
                    putchar(' ');
                else
                    putchar(*k);
            putchar('\n');
            for (k = buffer; k < l; k++)
                putchar(' ');
        }
        for (k = l; k < limit; k++)
            putchar(*k);
        if (*limit == '|')
            putchar('|');
        putchar(' ');
    }
    ;
    update_terminal;
    mark_error;
}


int wrap_up(void)
{
    if (show_progress || show_happiness || (history > spotless))
        new_line;
    if (show_stats)
        print_stats();

    switch (history) {
        case spotless:
            if (show_happiness)
                puts(_("(No errors were found.)"));
            break;
        case harmless_message:
            puts(_("(Did you see the warning message above?)"));
            break;
        case error_message:
            puts(_("(Pardon me, but I think I spotted something wrong.)"));
            break;
        case fatal_message:
            puts(_("(That was a fatal error, my friend.)"));
    }



    if (C_file)
        fclose(C_file);
    if (tex_file)
        fclose(tex_file);
    if (check_file)
        fclose(check_file);
    if (strlen(check_file_name))
        remove(check_file_name);


    switch (history) {
        case harmless_message:
            return RETURN_WARN;
        case error_message:
            return RETURN_ERROR;
        case fatal_message:
            return RETURN_FAIL;
        default:
            return RETURN_OK;
    }
}

void fatal(const char *s, const char *t)
{
    if (*s)
        err_print(s);
    err_print(t);
    history = fatal_message;
    exit(wrap_up());
}

void overflow(const char *t)
{
    printf(_("\n! Sorry, %s capacity exceeded"), t);
    fatal("", "");
}

static void scan_args(void)
{
    char *dot_pos;
    char *name_pos;
    register char *s;
    bool found_web = 0, found_change = 0, found_out = 0;

#if defined DEV_NULL
    strncpy(change_file_name, DEV_NULL, max_file_name_length - 2);
    change_file_name[max_file_name_length - 2] = '\0';
#elif defined _DEV_NULL
    strncpy(change_file_name, _DEV_NULL, max_file_name_length - 2);
    change_file_name[max_file_name_length - 2] = '\0';
#else
    strcpy(change_file_name, "/dev/null");
#endif

    while (--argc > 0) {
        if ((**(++argv) == '-' || **argv == '+') && *(*argv + 1)) {
            if (strcmp("-help", *argv) == 0 || strcmp("--help", *argv) == 0) {
                usage();
                exit(0);
            }

            if (strcmp("-version", *argv) == 0 || strcmp("--version", *argv) == 0) {
                printf("%s [ctex custom version]\n", program_name_list[program]);
                exit(0);
            }
        } else {
            s = name_pos = *argv;
            dot_pos = NULL;
            while (*s) {
                if (*s == '.')
                    dot_pos = s++;
                else if (*s == DIR_SEPARATOR || *s == DEVICE_SEPARATOR || *s == '/')
                    dot_pos = NULL, name_pos = ++s;
                else
                    s++;
            }

            if (!found_web)
            {   /*71: */
                if (s - *argv > max_file_name_length - 5)
                    fatal(_("! Filename too long\n"), *argv);


                ;
                if (dot_pos == NULL)
                    sprintf(web_file_name, "%s.w", *argv);
                else {
                    strcpy(web_file_name, *argv);
                    *dot_pos = 0;
                }
                sprintf(tex_file_name, "%s.tex", name_pos);
                sprintf(idx_file_name, "%s.idx", name_pos);
                sprintf(scn_file_name, "%s.scn", name_pos);
                sprintf(C_file_name, "%s.c", name_pos);
                found_web = 1;
            }


            else if (!found_change)
            {   /*72: */
                if (strcmp(*argv, "-") != 0) {
                    if (s - *argv > max_file_name_length - 4)
                        fatal(_("! Filename too long\n"), *argv);


                    ;
                    if (dot_pos == NULL)
                        sprintf(change_file_name, "%s.ch", *argv);
                    else
                        strcpy(change_file_name, *argv);
                }
                found_change = 1;
            }


            else if (!found_out)
            {   /*73: */
                if (s - *argv > max_file_name_length - 5)
                    fatal(_("! Filename too long\n"), *argv);


                ;
                if (dot_pos == NULL) {
                    sprintf(tex_file_name, "%s.tex", *argv);
                    sprintf(idx_file_name, "%s.idx", *argv);
                    sprintf(scn_file_name, "%s.scn", *argv);
                    sprintf(C_file_name, "%s.c", *argv);
                } else {
                    strcpy(tex_file_name, *argv);
                    strcpy(C_file_name, *argv);
                    if (make_xrefs) {
                        *dot_pos = 0;
                        sprintf(idx_file_name, "%s.idx", *argv);
                        sprintf(scn_file_name, "%s.scn", *argv);
                    }
                }
                found_out = 1;
            } else {
                usage();
                exit(1);
            }
        }
    }
    if (!found_web) {
        usage();
        exit(1);
    }
}

static void usage()
{
    if (program == ctangle) {
        printf("Usage %s WEBFILE[.w] [{CHANGEFILE[.ch]|-} [OUTFILE[.c]]]\n", program_name_list[program]);
        printf("  Tangle WEBFILE with CHANGEFILE into a C/C++ program.\n");
        printf("\n");
        printf("--help\tdisplay this help and exit\n");
        printf("--version\toutput version information and exit\n");
        printf("\n");
    } else {
        printf("No usage.\n");
    }
}

void cb_show_banner(void)
{
    assert(cb_banner[0] != '\0');
    textdomain("cweb-tl");

    printf("%s%s\n", _(cb_banner), ", CUSTOM");
    textdomain("cweb");

}
