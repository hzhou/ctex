#include <string.h>
#ifndef HAVE_GETTEXT
#define HAVE_GETTEXT 0
#endif

#if HAVE_GETTEXT
#include <libintl.h>
#else
#define gettext(A) A
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include <ctype.h>
#include <stdlib.h>

#define banner "This is CTANGLE, Version 3.64"

#define max_bytes 1000000 \

#define max_toks 1000000
#define max_names 10239 \

#define max_texts 10239
#define hash_size 8501
#define longest_name 10000
#define stack_size 50
#define buf_size 1000 \

#define _(S) gettext(S)  \

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

#define xisalpha(c) (isalpha((uint8_t) c) &&((uint8_t) c<0200) )
#define xisdigit(c) (isdigit((uint8_t) c) &&((uint8_t) c<0200) )
#define xisspace(c) (isspace((uint8_t) c) &&((uint8_t) c<0200) )
#define xislower(c) (islower((uint8_t) c) &&((uint8_t) c<0200) )
#define xisupper(c) (isupper((uint8_t) c) &&((uint8_t) c<0200) )
#define xisxdigit(c) (isxdigit((uint8_t) c) &&((uint8_t) c<0200) )  \

#define length(c) (size_t) ((c+1) ->byte_start-(c) ->byte_start)
#define print_id(c) term_write((c) ->byte_start,length((c) ) )
#define llink link
#define rlink dummy.Rlink
#define root name_dir->rlink \

#define chunk_marker 0 \

#define spotless 0
#define harmless_message 1
#define error_message 2
#define fatal_message 3
#define mark_harmless {if(history==spotless) history= harmless_message;}
#define mark_error history= error_message
#define confusion(s) fatal(_("! This can't happen: ") ,s)  \

#define max_file_name_length 1024
#define cur_file file[include_depth]
#define cur_file_name file_name[include_depth]
#define web_file_name file_name[0]
#define cur_line line[include_depth] \

#define show_happiness flags['h']
#define temporary_output flags['t']
#define make_xrefs flags['x'] \

#define update_terminal fflush(stdout)
#define new_line putchar('\n')
#define putxchar putchar
#define term_write(a,b) fflush(stdout) ,fwrite(a,sizeof(char) ,b,stdout)
#define C_printf(c,a) fprintf(C_file,c,a)
#define C_putc(c) putc(c,C_file)  \

#define equiv equiv_or_xref \

#define section_flag max_texts \

#define string 02
#define join 0177
#define output_defs_flag (2*024000-1)  \

#define cur_end cur_state.end_field
#define cur_byte cur_state.byte_field
#define cur_name cur_state.name_field
#define cur_repl cur_state.repl_field
#define cur_section cur_state.section_field \

#define section_number 0201
#define identifier 0202 \

#define normal 0
#define num_or_id 1
#define post_slash 2
#define unbreakable 3
#define verbatim 4 \

#define max_files 256
#define translit_length 10 \

#define ignore 0
#define ord 0302
#define control_text 0303
#define translit_code 0304
#define output_defs_code 0305
#define format_code 0306
#define definition 0307
#define begin_C 0310
#define section_name 0311
#define new_section 0312 \

#define constant 03 \

#define isxalpha(c) ((c) =='_'||(c) =='$')  \

#define ishigh(c) ((unsigned char) (c) > 0177)  \
 \

#define compress(c) if(loc++<=limit) return(c)  \

#define macro 0
#define app_repl(c) {if(tok_ptr==tok_mem_end) overflow(_("token") ) ;*tok_ptr++= c;} \

#define max_banner 50 \

typedef enum {
    ctangle, cweave, ctwill
} cweb;
extern cweb program;
extern int phase;

extern char section_text[];
extern char *section_text_end;
extern char *id_first;
extern char *id_loc;

extern char buffer[];
extern char *buffer_end;
extern char *loc;
extern char *limit;

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
typedef name_pointer *hash_pointer;
extern char byte_mem[];
extern char *byte_mem_end;
extern name_info name_dir[];
extern name_pointer name_dir_end;
extern name_pointer name_ptr;
extern char *byte_ptr;
extern name_pointer hash[];
extern hash_pointer hash_end;
extern hash_pointer h;
extern bool names_match(name_pointer, const char *, size_t, uint8_t);
extern name_pointer id_lookup(const char *, const char *, char);

extern name_pointer section_lookup(char *, char *, int);
extern void init_node(name_pointer);
extern void init_p(name_pointer, uint8_t);
extern void print_prefix_name(name_pointer);
extern void print_section_name(name_pointer);
extern void sprint_section_name(char *, name_pointer);

extern int history;
extern int wrap_up(void);
extern void err_print(const char *);
extern void fatal(const char *, const char *);
extern void overflow(const char *);

extern int include_depth;
extern FILE *file[];
extern FILE *change_file;
extern char C_file_name[];
extern char tex_file_name[];
extern char idx_file_name[];
extern char scn_file_name[];
extern char check_file_name[];
extern char file_name[][max_file_name_length];

extern char change_file_name[];
extern int line[];
extern int change_line;
extern int change_depth;
extern bool input_has_ended;
extern bool changing;
extern bool web_file_open;
extern bool get_line(void);
extern void check_complete(void);
extern void reset_input(void);

extern uint16_t section_count;
extern bool changed_section[];
extern bool change_pending;
extern bool print_where;

extern int argc;
extern char **argv;
extern bool flags[];

extern FILE *C_file;
extern FILE *tex_file;
extern FILE *idx_file;
extern FILE *scn_file;
extern FILE *check_file;
extern FILE *active_file;

extern void common_init(void);
extern void print_stats(void);
extern void cb_show_banner(void);

extern char cb_banner[];

typedef struct {
    uint8_t *tok_start;
    uint16_t text_link;
} text;
typedef text *text_pointer;

typedef struct {
    uint8_t *end_field;
    uint8_t *byte_field;
    name_pointer name_field;
    text_pointer repl_field;
    uint16_t section_field;
} output_state;
typedef output_state *stack_pointer;

text text_info[max_texts];
text_pointer text_info_end = text_info + max_texts - 1;
text_pointer text_ptr;
uint8_t tok_mem[max_toks];
uint8_t *tok_mem_end = tok_mem + max_toks - 1;
uint8_t *tok_ptr;

text_pointer last_unnamed;

output_state cur_state;

output_state stack[stack_size + 1];
stack_pointer stack_ptr;
stack_pointer stack_end = stack + stack_size;

int cur_val;

uint8_t out_state;
bool protect;

name_pointer output_files[max_files];
name_pointer *cur_out_file, *end_output_files, *an_output_file;
char cur_section_name_char;
char output_file_name[longest_name];

bool output_defs_seen = 0;

char translit[128][translit_length];

uint8_t ccode[256];

bool comment_continues = 0;

name_pointer cur_section_name;
int no_where;

text_pointer cur_text;
uint8_t next_control;

extern uint16_t section_count;

static void phase_two(void);

static void output_defs(void);
static void out_char(uint8_t);

static void phase_one(void);

static void skip_limbo(void);

static uint8_t get_next(void);
static uint8_t skip_ahead(void);
static bool skip_comment(bool);
static void flush_buffer(void);
static void get_output(void);
static void pop_level(int);
static void push_level(name_pointer);
static void scan_repl(uint8_t);
static void scan_section(void);
static void store_two_bytes(uint16_t);

int main(int ac, char **av)
{
    argc = ac;
    argv = av;
    program = ctangle;

    text_info->tok_start = tok_ptr = tok_mem;
    text_ptr = text_info + 1;
    text_ptr->tok_start = tok_mem;


    init_node(name_dir);
    last_unnamed = text_info;
    text_info->text_link = 0;
    cur_out_file = end_output_files = output_files + max_files;
    {
        int i;
        for (i = 0; i < 128; i++)
            sprintf(translit[i], "X%02X", (unsigned) (128 + i));
    }

    {
        int c;
        for (c = 0; c < 256; c++)
            ccode[c] = ignore;
        ccode[' '] = ccode['\t'] = ccode['\n'] = ccode['\v'] = ccode['\r'] = ccode['\f'] = ccode['*'] = new_section;
        ccode['@'] = '@';
        ccode['='] = string;
        ccode['d'] = ccode['D'] = definition;
        ccode['f'] = ccode['F'] = ccode['s'] = ccode['S'] = format_code;
        ccode['c'] = ccode['C'] = ccode['p'] = ccode['P'] = begin_C;
        ccode['^'] = ccode[':'] = ccode['.'] = ccode['t'] = ccode['T'] = ccode['q'] = ccode['Q'] = control_text;
        ccode['h'] = ccode['H'] = output_defs_code;
        ccode['l'] = ccode['L'] = translit_code;
        ccode['&'] = join;
        ccode['<'] = ccode['('] = section_name;
        ccode['\''] = ord;
    }

    section_text[0] = ' ';

    strncpy(cb_banner, banner, max_banner - 1);
    common_init();
    cb_show_banner();
    phase_one();
    phase_two();
    return wrap_up();
}

bool names_match(name_pointer p, const char *first, size_t l, uint8_t t)
{
    (void) t;
    if (length(p) != l)
        return 0;
    return !strncmp(first, p->byte_start, l);
}

void init_node(name_pointer node)
{
    node->equiv = (void *) text_info;
}

void init_p(name_pointer p, uint8_t t)
{
    (void) p;
    (void) t;
}

static void store_two_bytes(uint16_t x)
{
    if (tok_ptr + 2 > tok_mem_end)
        overflow(_("token"));
    *tok_ptr++ = x >> 8;
    *tok_ptr++ = x & 0377;
}

static void push_level(name_pointer p)
{
    if (stack_ptr == stack_end)
        overflow(_("stack"));
    *stack_ptr = cur_state;
    stack_ptr++;
    if (p != NULL) {
        cur_name = p;
        cur_repl = (text_pointer) p->equiv;
        cur_byte = cur_repl->tok_start;
        cur_end = (cur_repl + 1)->tok_start;
        cur_section = 0;
    }
}

static void pop_level(int flag)
{
    if (flag && cur_repl->text_link < section_flag) {
        cur_repl = cur_repl->text_link + text_info;
        cur_byte = cur_repl->tok_start;
        cur_end = (cur_repl + 1)->tok_start;
        return;
    }
    stack_ptr--;
    if (stack_ptr > stack)
        cur_state = *stack_ptr;
}

static void get_output(void)
{
    uint16_t a;
  restart:if (stack_ptr == stack)
        return;
    if (cur_byte == cur_end) {
        cur_val = -((int) cur_section);
        pop_level(1);
        if (cur_val == 0)
            goto restart;
        out_char(section_number);
        return;
    }
    a = *cur_byte++;
    if (out_state == verbatim && a != string && a != constant && a != '\n')
        C_putc(a);
    else if (a < 0200)
        out_char(a);
    else {
        a = (a - 0200) * 0400 + *cur_byte++;
        switch (a / 024000) {
            case 0:
                cur_val = a;
                out_char(identifier);
                break;
            case 1:
                if (a == output_defs_flag)
                    output_defs();
                else {  /*34: */

                    a -= 024000;
                    if ((a + name_dir)->equiv != (void *) text_info)
                        push_level(a + name_dir);
                    else if (a != 0) {
                        fputs(_("\n! Not present: <"), stdout);
                        print_section_name(a + name_dir);
                        err_print(">");

                    }
                    goto restart;
                }

                ;
                break;
            default:
                cur_val = a - 050000;
                if (cur_val > 0)
                    cur_section = cur_val;
                out_char(section_number);
        }
    }
}

static void flush_buffer(void)
{
    C_putc('\n');
    cur_line++;
}

static void phase_two(void)
{
    web_file_open = 0;
    cur_line = 1;

    stack_ptr = stack + 1;
    cur_name = name_dir;
    cur_repl = text_info->text_link + text_info;
    cur_byte = cur_repl->tok_start;
    cur_end = (cur_repl + 1)->tok_start;
    cur_section = 0;

    if (!output_defs_seen)
        output_defs();

    if (text_info->text_link == 0 && cur_out_file == end_output_files) {
        fputs(_("\n! No program text was specified."), stdout);
        mark_harmless;

    } else {
        if (cur_out_file == end_output_files) {
            printf(_("\nWriting the output file (%s) "), C_file_name);
        } else {
            fputs(_("\nWriting the output files: "), stdout);
            printf(" (%s)", C_file_name);
            update_terminal;
            if (text_info->text_link == 0)
                goto writeloop;
        }
        while (stack_ptr > stack)
            get_output();
        flush_buffer();
        printf(" %d lines\n", cur_line);

      writeloop:       /*43: */
        fclose(C_file);
        C_file = NULL;
        if ((C_file = fopen(C_file_name, "r")) != NULL) {

            char x[BUFSIZ], y[BUFSIZ];
            int x_size, y_size, comparison = false;

            if ((check_file = fopen(check_file_name, "r")) == NULL)
                fatal(_("! Cannot open output file "), check_file_name);


            if (temporary_output)
                /*100: */
                do {
                    x_size = fread(x, 1, BUFSIZ, C_file);
                    y_size = fread(y, 1, BUFSIZ, check_file);
                    comparison = (x_size == y_size);
                    if (comparison)
                        comparison = !memcmp(x, y, x_size);
                }
                while (comparison && !feof(C_file)
                       && !feof(check_file));

            fclose(C_file);
            C_file = NULL;
            fclose(check_file);
            check_file = NULL;

            if (comparison)
                remove(check_file_name);
            else {
                remove(C_file_name);
                rename(check_file_name, C_file_name);
            }

        } else
            rename(check_file_name, C_file_name);

        for (an_output_file = end_output_files; an_output_file > cur_out_file;) {
            an_output_file--;
            sprint_section_name(output_file_name, *an_output_file);
            if ((C_file = fopen(output_file_name, "a")) == NULL)
                fatal(_("! Cannot open output file "), output_file_name);

            else
                fclose(C_file);
            if ((C_file = fopen(check_file_name, "wb")) == NULL)
                fatal(_("! Cannot open output file "), check_file_name);

            printf("\n(%s)", output_file_name);
            update_terminal;

            cur_line = 1;
            stack_ptr = stack + 1;
            cur_name = (*an_output_file);
            cur_repl = (text_pointer) cur_name->equiv;
            cur_byte = cur_repl->tok_start;
            cur_end = (cur_repl + 1)->tok_start;
            while (stack_ptr > stack)
                get_output();
            flush_buffer();
            fclose(C_file);
            C_file = NULL;

            if (0 == strcmp("/dev/stdout", output_file_name)) {

                char in_buf[BUFSIZ + 1];
                int in_size, comparison = true;
                if ((check_file = fopen(check_file_name, "r")) == NULL)
                    fatal(_("! Cannot open output file "), check_file_name);


                do {
                    in_size = fread(in_buf, 1, BUFSIZ, check_file);
                    in_buf[in_size] = '\0';
                    fprintf(stdout, "%s", in_buf);
                }
                while (!feof(check_file));
                fclose(check_file);
                check_file = NULL;

                if (comparison)
                    remove(check_file_name);
                else {
                    remove(output_file_name);
                    rename(check_file_name, output_file_name);
                }

            }

            else if (0 == strcmp("/dev/stderr", output_file_name)) {
                char in_buf[BUFSIZ + 1];
                int in_size, comparison = true;
                if ((check_file = fopen(check_file_name, "r")) == NULL)
                    fatal(_("! Cannot open output file "), check_file_name);

                do {
                    in_size = fread(in_buf, 1, BUFSIZ, check_file);
                    in_buf[in_size] = '\0';
                    fprintf(stderr, "%s", in_buf);
                }
                while (!feof(check_file));
                fclose(check_file);
                check_file = NULL;

                if (comparison)
                    remove(check_file_name);
                else {
                    remove(output_file_name);
                    rename(check_file_name, output_file_name);
                }

            }

            else if (0 == strcmp("/dev/null", output_file_name)) {
                int comparison = true;

                if (comparison)
                    remove(check_file_name);
                else {
                    remove(output_file_name);
                    rename(check_file_name, output_file_name);
                }

            }

            else {
                if ((C_file = fopen(output_file_name, "r")) != NULL) {

                    char x[BUFSIZ], y[BUFSIZ];
                    int x_size, y_size, comparison = false;

                    if ((check_file = fopen(check_file_name, "r")) == NULL)
                        fatal(_("! Cannot open output file "), check_file_name);


                    if (temporary_output)
                        /*100: */
                        do {
                            x_size = fread(x, 1, BUFSIZ, C_file);
                            y_size = fread(y, 1, BUFSIZ, check_file);
                            comparison = (x_size == y_size);
                            if (comparison)
                                comparison = !memcmp(x, y, x_size);
                        }
                        while (comparison && !feof(C_file)
                               && !feof(check_file));

                    fclose(C_file);
                    C_file = NULL;
                    fclose(check_file);
                    check_file = NULL;

                    if (comparison)
                        remove(check_file_name);
                    else {
                        remove(output_file_name);
                        rename(check_file_name, output_file_name);
                    }

                } else
                    rename(check_file_name, output_file_name);
            }

        }
        strcpy(check_file_name, "");
        if (show_happiness) {
            new_line;
            fputs(_("Done."), stdout);
        }
    }
}

static void output_defs(void)
{
    uint16_t a;
    push_level(NULL);
    for (cur_text = text_info + 1; cur_text < text_ptr; cur_text++)
        if (cur_text->text_link == 0) {
            cur_byte = cur_text->tok_start;
            cur_end = (cur_text + 1)->tok_start;
            C_printf("%s", "#define ");
            out_state = normal;
            protect = 1;
            while (cur_byte < cur_end) {
                a = *cur_byte++;
                if (cur_byte == cur_end && a == '\n')
                    break;
                if (out_state == verbatim && a != string && a != constant && a != '\n')
                    C_putc(a);

                else if (a < 0200)
                    out_char(a);
                else {
                    a = (a - 0200) * 0400 + *cur_byte++;
                    if (a < 024000) {
                        cur_val = a;
                        out_char(identifier);
                    } else if (a < 050000) {
                        confusion(_("macro defs have strange char"));
                    } else {
                        cur_val = a - 050000;
                        cur_section = cur_val;
                        out_char(section_number);
                    }

                }
            }
            protect = 0;
            flush_buffer();
        }
    pop_level(0);
}

static void out_char(uint8_t cur_char)
{
    char *j, *k;
  restart:
    switch (cur_char) {
        case '\n':
            if (protect && out_state != verbatim)
                C_putc(' ');
            if (protect || out_state == verbatim)
                C_putc('\\');
            flush_buffer();
            if (out_state != verbatim)
                out_state = normal;
            break;

        case identifier:
            if (out_state == num_or_id)
                C_putc(' ');
            j = (cur_val + name_dir)->byte_start;
            k = (cur_val + name_dir + 1)->byte_start;
            while (j < k) {
                if ((unsigned char) (*j) < 0200)
                    C_putc(*j);

                else
                    C_printf("%s", translit[(unsigned char) (*j) - 0200]);
                j++;
            }
            out_state = num_or_id;
            break;

        case section_number:
            if (cur_val > 0)
                C_printf("/*%d:*/", cur_val);
            else if (cur_val < 0)
                C_printf("/*:%d*/", -cur_val);
            else if (protect) {
                cur_byte += 4;
                cur_char = '\n';
                goto restart;
            } else {
                uint16_t a;
                a = 0400 ** cur_byte++;
                a += *cur_byte++;
                C_printf("\n#line %d \"", a);

                cur_val = *cur_byte++;
                cur_val = 0400 * (cur_val - 0200) + *cur_byte++;
                for (j = (cur_val + name_dir)->byte_start, k = (cur_val + name_dir + 1)->byte_start; j < k; j++) {
                    if (*j == '\\' || *j == '"')
                        C_putc('\\');
                    C_putc(*j);
                }
                C_printf("%s", "\"\n");
            }
            break;

        case plus_plus:
            C_putc('+');
            C_putc('+');
            out_state = normal;
            break;
        case minus_minus:
            C_putc('-');
            C_putc('-');
            out_state = normal;
            break;
        case minus_gt:
            C_putc('-');
            C_putc('>');
            out_state = normal;
            break;
        case gt_gt:
            C_putc('>');
            C_putc('>');
            out_state = normal;
            break;
        case eq_eq:
            C_putc('=');
            C_putc('=');
            out_state = normal;
            break;
        case lt_lt:
            C_putc('<');
            C_putc('<');
            out_state = normal;
            break;
        case gt_eq:
            C_putc('>');
            C_putc('=');
            out_state = normal;
            break;
        case lt_eq:
            C_putc('<');
            C_putc('=');
            out_state = normal;
            break;
        case non_eq:
            C_putc('!');
            C_putc('=');
            out_state = normal;
            break;
        case and_and:
            C_putc('&');
            C_putc('&');
            out_state = normal;
            break;
        case or_or:
            C_putc('|');
            C_putc('|');
            out_state = normal;
            break;
        case dot_dot_dot:
            C_putc('.');
            C_putc('.');
            C_putc('.');
            out_state = normal;
            break;
        case colon_colon:
            C_putc(':');
            C_putc(':');
            out_state = normal;
            break;
        case period_ast:
            C_putc('.');
            C_putc('*');
            out_state = normal;
            break;
        case minus_gt_ast:
            C_putc('-');
            C_putc('>');
            C_putc('*');
            out_state = normal;
            break;
        case '=':
        case '>':
            C_putc(cur_char);
            C_putc(' ');
            out_state = normal;
            break;
        case join:
            out_state = unbreakable;
            break;
        case constant:
            if (out_state == verbatim) {
                out_state = num_or_id;
                break;
            }
            if (out_state == num_or_id)
                C_putc(' ');
            out_state = verbatim;
            break;
        case string:
            if (out_state == verbatim)
                out_state = normal;
            else
                out_state = verbatim;
            break;
        case '/':
            C_putc('/');
            out_state = post_slash;
            break;
        case '*':
            if (out_state == post_slash)
                C_putc(' ');

        default:
            C_putc(cur_char);
            out_state = normal;
            break;
    }
}

static uint8_t skip_ahead(void)
{
    uint8_t c;
    while (1) {
        if (loc > limit && (get_line() == 0))
            return (new_section);
        *(limit + 1) = '@';
        while (*loc != '@')
            loc++;
        if (loc <= limit) {
            loc++;
            c = ccode[(uint8_t) * loc];
            loc++;
            if (c != ignore || *(loc - 1) == '>')
                return (c);
        }
    }
}

static bool skip_comment(bool is_long_comment)
{
    char c;
    while (1) {
        if (loc > limit) {
            if (is_long_comment) {
                if (get_line())
                    return (comment_continues = 1);
                else {
                    err_print(_("! Input ended in mid-comment"));

                    return (comment_continues = 0);
                }
            } else
                return (comment_continues = 0);
        }
        c = *(loc++);
        if (is_long_comment && c == '*' && *loc == '/') {
            loc++;
            return (comment_continues = 0);
        }
        if (c == '@') {
            if (ccode[(uint8_t) * loc] == new_section) {
                err_print(_("! Section name ended in mid-comment"));
                loc--;

                return (comment_continues = 0);
            } else
                loc++;
        }
    }
}

static uint8_t get_next(void)
{
    static int preprocessing = 0;
    uint8_t c;
    while (1) {
        if (loc > limit) {
            if (preprocessing && *(limit - 1) != '\\')
                preprocessing = 0;
            if (get_line() == 0)
                return (new_section);
            else if (print_where && !no_where) {
                print_where = 0;

                store_two_bytes(0150000);
                if (changing && include_depth == change_depth) {
                    id_first = change_file_name;
                    store_two_bytes((uint16_t) change_line);
                } else {
                    id_first = cur_file_name;
                    store_two_bytes((uint16_t) cur_line);
                }
                id_loc = id_first + strlen(id_first);
                {
                    int a_l = id_lookup(id_first, id_loc, 0) - name_dir;
                    app_repl((a_l / 0400) + 0200);
                    app_repl(a_l % 0400);
                }

            } else
                return ('\n');
        }
        c = *loc;
        if (comment_continues || (c == '/' && (*(loc + 1) == '*' || *(loc + 1) == '/'))) {
            skip_comment(comment_continues || *(loc + 1) == '*');

            if (comment_continues)
                return ('\n');
            else
                continue;
        }
        loc++;
        if (xisdigit(c) || c == '.') {  /*66: */
            id_first = loc - 1;
            if (*id_first == '.' && !xisdigit(*loc))
                goto mistake;
            if (*id_first == '0') {
                if (*loc == 'x' || *loc == 'X') {
                    loc++;
                    while (xisxdigit(*loc))
                        loc++;
                    goto found;
                }
            }
            while (xisdigit(*loc))
                loc++;
            if (*loc == '.') {
                loc++;
                while (xisdigit(*loc))
                    loc++;
            }
            if (*loc == 'e' || *loc == 'E') {
                if (*++loc == '+' || *loc == '-')
                    loc++;
                while (xisdigit(*loc))
                    loc++;
            }
          found:while (*loc == 'u' || *loc == 'U' || *loc == 'l' || *loc == 'L' || *loc == 'f' || *loc == 'F')
                loc++;
            id_loc = loc;
            return (constant);
        }

        else if (c == '\'' || c == '"' || ((c == 'L' || c == 'u' || c == 'U')
                                           && (*loc == '\'' || *loc == '"')) || ((c == 'u' && *loc == '8')
                                                                                 && (*(loc + 1) == '\'' || *(loc + 1) == '"'))) {
            char delim = c;
            id_first = section_text + 1;
            id_loc = section_text;
            *++id_loc = delim;
            if (delim == 'L' || delim == 'u' || delim == 'U') {
                if (delim == 'u' && *loc == '8') {
                    *++id_loc = *loc++;
                }
                delim = *loc++;
                *++id_loc = delim;
            }
            while (1) {
                if (loc >= limit) {
                    if (*(limit - 1) != '\\') {
                        err_print(_("! String didn't end"));
                        loc = limit;
                        break;

                    }
                    if (get_line() == 0) {
                        err_print(_("! Input ended in middle of string"));
                        loc = buffer;
                        break;

                    } else if (++id_loc <= section_text_end)
                        *id_loc = '\n';

                }
                if ((c = *loc++) == delim) {
                    if (++id_loc <= section_text_end)
                        *id_loc = c;
                    break;
                }
                if (c == '\\') {
                    if (loc >= limit)
                        continue;
                    if (++id_loc <= section_text_end)
                        *id_loc = '\\';
                    c = *loc++;
                }
                if (++id_loc <= section_text_end)
                    *id_loc = c;
            }
            if (id_loc >= section_text_end) {
                fputs(_("\n! String too long: "), stdout);

                term_write(section_text + 1, 25);
                err_print("...");
            }
            id_loc++;
            return (string);
        }

        else if (isalpha(c) || isxalpha(c) || ishigh(c)) {
            id_first = --loc;
            while (isalpha((uint8_t) * ++loc)
                   || isdigit((uint8_t) * loc)
                   || isxalpha((uint8_t) * loc)
                   || ishigh((uint8_t) * loc));
            id_loc = loc;
            return (identifier);
        }

        else if (c == '@') {    /*68: */
            c = ccode[(uint8_t) * loc++];
            switch (c) {
                case ignore:
                    continue;
                case translit_code:
                    err_print(_("! Use @l in limbo only"));
                    continue;

                case control_text:
                    while ((c = skip_ahead()) == '@');

                    if (*(loc - 1) != '>')
                        err_print(_("! Double @ should be used in control text"));

                    continue;
                case section_name:
                    cur_section_name_char = *(loc - 1);
                    {
                        char *k;

                        k = section_text;
                        while (1) {
                            if (loc > limit && get_line() == 0) {
                                err_print(_("! Input ended in section name"));

                                loc = buffer + 1;
                                break;
                            }
                            c = *loc;

                            if (c == '@') {
                                c = *(loc + 1);
                                if (c == '>') {
                                    loc += 2;
                                    break;
                                }
                                if (ccode[(uint8_t) c] == new_section) {
                                    err_print(_("! Section name didn't end"));
                                    break;
                                }
                                if (ccode[(uint8_t) c] == section_name) {
                                    err_print(_("! Nesting of section names not allowed"));
                                    break;
                                }
                                *(++k) = '@';
                                loc++;
                            }

                            loc++;
                            if (k < section_text_end)
                                k++;
                            if (xisspace(c)) {
                                c = ' ';
                                if (*(k - 1) == ' ')
                                    k--;
                            }
                            *k = c;
                        }
                        if (k >= section_text_end) {
                            fputs(_("\n! Section name too long: "), stdout);

                            term_write(section_text + 1, 25);
                            printf("...");
                            mark_harmless;
                        }
                        if (*k == ' ' && k > section_text)
                            k--;

                        if (k - section_text > 3 && strncmp(k - 2, "...", 3) == 0)
                            cur_section_name = section_lookup(section_text + 1, k - 3, 1);
                        else
                            cur_section_name = section_lookup(section_text + 1, k, 0);
                        if (cur_section_name_char == '(')
                        {
                            for (an_output_file = cur_out_file; an_output_file < end_output_files; an_output_file++)
                                if (*an_output_file == cur_section_name)
                                    break;
                            if (an_output_file == end_output_files) {
                                if (cur_out_file > output_files)
                                    *--cur_out_file = cur_section_name;
                                else {
                                    overflow(_("output files"));
                                }
                            }
                        }

                        return (section_name);
                    }

                case string:   /*74: */
                    {
                        id_first = loc++;
                        *(limit + 1) = '@';
                        *(limit + 2) = '>';
                        while (*loc != '@' || *(loc + 1) != '>')
                            loc++;
                        if (loc >= limit)
                            err_print(_("! Verbatim string didn't end"));

                        id_loc = loc;
                        loc += 2;
                        return (string);
                    }

                case ord:      /*69: */

                    id_first = loc;
                    if (*loc == '\\') {
                        if (*++loc == '\'')
                            loc++;
                    }
                    while (*loc != '\'') {
                        if (*loc == '@') {
                            if (*(loc + 1) != '@')
                                err_print(_("! Double @ should be used in ASCII constant"));

                            else
                                loc++;
                        }
                        loc++;
                        if (loc > limit) {
                            err_print(_("! String didn't end"));
                            loc = limit - 1;
                            break;

                        }
                    }
                    loc++;
                    return (ord);

                default:
                    return (c);
            }
        }

        else if (xisspace(c)) {
            if (!preprocessing || loc > limit)
                continue;

            else
                return (' ');
        } else if (c == '#' && loc == buffer + 1)
            preprocessing = 1;
      mistake: /*64: */

        switch (c) {
            case '+':
                if (*loc == '+')
                    compress(plus_plus);
                break;
            case '-':
                if (*loc == '-') {
                    compress(minus_minus);
                } else {
                    if (*loc == '>') {
                        if (*(loc + 1) == '*') {
                            loc++;
                            compress(minus_gt_ast);
                        } else
                            compress(minus_gt);
                    }
                }
                break;
            case '.':
                if (*loc == '*') {
                    compress(period_ast);
                } else if (*loc == '.' && *(loc + 1) == '.') {
                    loc++;
                    compress(dot_dot_dot);
                }
                break;
            case ':':
                if (*loc == ':')
                    compress(colon_colon);
                break;
            case '=':
                if (*loc == '=')
                    compress(eq_eq);
                break;
            case '>':
                if (*loc == '=') {
                    compress(gt_eq);
                } else if (*loc == '>')
                    compress(gt_gt);
                break;
            case '<':
                if (*loc == '=') {
                    compress(lt_eq);
                } else if (*loc == '<')
                    compress(lt_lt);
                break;
            case '&':
                if (*loc == '&')
                    compress(and_and);
                break;
            case '|':
                if (*loc == '|')
                    compress(or_or);
                break;
            case '!':
                if (*loc == '=')
                    compress(non_eq);
                break;
        }

        return (c);
    }
}

static void scan_repl(uint8_t t)
{
    uint16_t a;
    if (t == section_name) {    /*77: */

        store_two_bytes(0150000);
        if (changing && include_depth == change_depth) {
            id_first = change_file_name;
            store_two_bytes((uint16_t) change_line);
        } else {
            id_first = cur_file_name;
            store_two_bytes((uint16_t) cur_line);
        }
        id_loc = id_first + strlen(id_first);
        {
            int a_l = id_lookup(id_first, id_loc, 0) - name_dir;
            app_repl((a_l / 0400) + 0200);
            app_repl(a_l % 0400);
        }

    }
    while (1)
        switch (a = get_next()) {

            case identifier:
                a = id_lookup(id_first, id_loc, 0) - name_dir;
                app_repl((a / 0400) + 0200);
                app_repl(a % 0400);
                break;
            case section_name:
                if (t != section_name)
                    goto done;
                else {
                    {
                        char *try_loc = loc;
                        while (*try_loc == ' ' && try_loc < limit)
                            try_loc++;
                        if (*try_loc == '+' && try_loc < limit)
                            try_loc++;
                        while (*try_loc == ' ' && try_loc < limit)
                            try_loc++;
                        if (*try_loc == '=')
                            err_print(_("! Missing `@ ' before a named section"));



                    }

                    a = cur_section_name - name_dir;
                    app_repl((a / 0400) + 0250);
                    app_repl(a % 0400);

                    store_two_bytes(0150000);
                    if (changing && include_depth == change_depth) {
                        id_first = change_file_name;
                        store_two_bytes((uint16_t) change_line);
                    } else {
                        id_first = cur_file_name;
                        store_two_bytes((uint16_t) cur_line);
                    }
                    id_loc = id_first + strlen(id_first);
                    {
                        int a_l = id_lookup(id_first, id_loc, 0) - name_dir;
                        app_repl((a_l / 0400) + 0200);
                        app_repl(a_l % 0400);
                    }

                    break;
                }
            case output_defs_code:
                if (t != section_name)
                    err_print(_("! Misplaced @h"));

                else {
                    output_defs_seen = 1;
                    a = output_defs_flag;
                    app_repl((a / 0400) + 0200);
                    app_repl(a % 0400);

                    store_two_bytes(0150000);
                    if (changing && include_depth == change_depth) {
                        id_first = change_file_name;
                        store_two_bytes((uint16_t) change_line);
                    } else {
                        id_first = cur_file_name;
                        store_two_bytes((uint16_t) cur_line);
                    }
                    id_loc = id_first + strlen(id_first);
                    {
                        int a_l = id_lookup(id_first, id_loc, 0) - name_dir;
                        app_repl((a_l / 0400) + 0200);
                        app_repl(a_l % 0400);
                    }

                }
                break;
            case constant:
            case string:

                app_repl(a);
                while (id_first < id_loc) {
                    if (*id_first == '@') {
                        if (*(id_first + 1) == '@')
                            id_first++;
                        else
                            err_print(_("! Double @ should be used in string"));

                    }
                    app_repl(*id_first++);
                }
                app_repl(a);
                break;

            case ord:
                {
                    int c = (uint8_t) * id_first;
                    if (c == '\\') {
                        c = *++id_first;
                        if (c >= '0' && c <= '7') {
                            c -= '0';
                            if (*(id_first + 1) >= '0' && *(id_first + 1) <= '7') {
                                c = 8 * c + *(++id_first) - '0';
                                if (*(id_first + 1) >= '0' && *(id_first + 1) <= '7' && c < 32)
                                    c = 8 * c + *(++id_first) - '0';
                            }
                        } else
                            switch (c) {
                                case 't':
                                    c = '\t';
                                    break;
                                case 'n':
                                    c = '\n';
                                    break;
                                case 'b':
                                    c = '\b';
                                    break;
                                case 'f':
                                    c = '\f';
                                    break;
                                case 'v':
                                    c = '\v';
                                    break;
                                case 'r':
                                    c = '\r';
                                    break;
                                case 'a':
                                    c = '\7';
                                    break;
                                case '?':
                                    c = '?';
                                    break;
                                case 'x':
                                    if (xisdigit(*(id_first + 1)))
                                        c = *(++id_first) - '0';
                                    else if (xisxdigit(*(id_first + 1))) {
                                        ++id_first;
                                        c = toupper((uint8_t) * id_first) - 'A' + 10;
                                    }
                                    if (xisdigit(*(id_first + 1)))
                                        c = 16 * c + *(++id_first) - '0';
                                    else if (xisxdigit(*(id_first + 1))) {
                                        ++id_first;
                                        c = 16 * c + toupper((uint8_t) * id_first) - 'A' + 10;
                                    }
                                    break;
                                case '\\':
                                    c = '\\';
                                    break;
                                case '\'':
                                    c = '\'';
                                    break;
                                case '\"':
                                    c = '\"';
                                    break;
                                default:
                                    err_print(_("! Unrecognized escape sequence"));

                            }
                    }

                    app_repl(constant);
                    if (c >= 100)
                        app_repl('0' + c / 100);
                    if (c >= 10)
                        app_repl('0' + (c / 10) % 10);
                    app_repl('0' + c % 10);
                    app_repl(constant);
                }
                break;

            case definition:
            case format_code:
            case begin_C:
                if (t != section_name)
                    goto done;
                else {
                    err_print(_("! @d, @f and @c are ignored in C text"));
                    continue;

                }
            case new_section:
                goto done;

            case ')':
                app_repl(a);
                if (t == macro)
                    app_repl(' ');
                break;
            default:
                app_repl(a);
        }
  done:next_control = (uint8_t) a;
    if (text_ptr > text_info_end)
        overflow(_("text"));
    cur_text = text_ptr;
    (++text_ptr)->tok_start = tok_ptr;
}

static void scan_section(void)
{
    name_pointer p;
    text_pointer q;
    uint16_t a;
    section_count++;
    no_where = 1;
    next_control = 0;
    while (1) {

        while (next_control < definition)

            if ((next_control = skip_ahead()) == section_name) {
                loc -= 2;
                next_control = get_next();
            }

        if (next_control == definition) {
            {
                while ((next_control = get_next()) == '\n');
                if (next_control != identifier) {
                    err_print(_("! Definition flushed, must start with identifier"));

                    continue;
                }
                app_repl(((a = id_lookup(id_first, id_loc, 0) - name_dir) / 0400) + 0200);

                app_repl(a % 0400);
                if (*loc != '(') {
                    app_repl(string);
                    app_repl(' ');
                    app_repl(string);
                }
                scan_repl(macro);
                cur_text->text_link = 0;
            }

            continue;
        }
        if (next_control == begin_C) {
            p = name_dir;
            break;
        }
        if (next_control == section_name) {
            p = cur_section_name;

            while ((next_control = get_next()) == '+');
            if (next_control != '=' && next_control != eq_eq)
                continue;

            break;
        }
        return;
    }
    no_where = print_where = 0;
    store_two_bytes((uint16_t) (0150000 + section_count));

    scan_repl(section_name);

    if (p == name_dir || p == 0) {
        (last_unnamed)->text_link = cur_text - text_info;
        last_unnamed = cur_text;
    } else if (p->equiv == (void *) text_info)
        p->equiv = (void *) cur_text;

    else {
        q = (text_pointer) p->equiv;
        while (q->text_link < section_flag)
            q = q->text_link + text_info;
        q->text_link = cur_text - text_info;
    }
    cur_text->text_link = section_flag;

}

static void phase_one(void)
{
    phase = 1;
    section_count = 0;
    reset_input();
    skip_limbo();
    while (!input_has_ended)
        scan_section();
    check_complete();
    phase = 2;
}

static void skip_limbo(void)
{
    char c;
    while (1) {
        if (loc > limit && get_line() == 0)
            return;
        *(limit + 1) = '@';
        while (*loc != '@')
            loc++;
        if (loc++ <= limit) {
            c = *loc++;
            if (ccode[(uint8_t) c] == new_section)
                break;
            switch (ccode[(uint8_t) c]) {
                case translit_code:    /*94: */

                    while (xisspace(*loc) && loc < limit)
                        loc++;
                    loc += 3;
                    if (loc > limit || !xisxdigit(*(loc - 3))
                        || !xisxdigit(*(loc - 2)) || (*(loc - 3) >= '0' && *(loc - 3) <= '7')
                        || !xisspace(*(loc - 1)))
                        err_print(_("! Improper hex number following @l"));

                    else {
                        unsigned i;
                        char *beg;
                        sscanf(loc - 3, "%x", &i);
                        while (xisspace(*loc) && loc < limit)
                            loc++;
                        beg = loc;
                        while (loc < limit && (xisalpha(*loc) || xisdigit(*loc)
                                               || *loc == '_'))
                            loc++;
                        if (loc - beg >= translit_length)
                            err_print(_("! Replacement string in @l too long"));

                        else {
                            strncpy(translit[i - 0200], beg, (size_t) (loc - beg));
                            translit[i - 0200][loc - beg] = '\0';
                        }
                    }

                    break;
                case format_code:
                case '@':
                    break;
                case control_text:
                    if (c == 'q' || c == 'Q') {
                        while ((c = skip_ahead()) == '@');
                        if (*(loc - 1) != '>')
                            err_print(_("! Double @ should be used in control text"));

                        break;
                    }
                default:
                    err_print(_("! Double @ should be used in limbo"));

            }
        }
    }
}

void print_stats(void)
{
    puts(_("\nMemory usage statistics:"));
    printf(_("%ld names (out of %ld)\n"), (long) (name_ptr - name_dir), (long) max_names);
    printf(_("%ld replacement texts (out of %ld)\n"), (long) (text_ptr - text_info), (long) max_texts);
    printf(_("%ld bytes (out of %ld)\n"), (long) (byte_ptr - byte_mem), (long) max_bytes);
    printf(_("%ld tokens (out of %ld)\n"), (long) (tok_ptr - tok_mem), (long) max_toks);
}
