#define banner "This is TIE, CWEB Version 2.4."
#define copyright "Copyright (c) 1989,1992 by THD/ITI. All rights reserved."

#define incr(v)v+= 1
#define decr(v)v-= 1
#define loop while(1)
#define do_nothing
#define false 0
#define true 1
#define spotless 0
#define troublesome 1
#define fatal 2

#define first_text_char 0
#define last_text_char 255

#define map_xchr(c)(text_char)(c)

#define map_xord(c)(ASCII_Code)(c)

#define tab_mark 9
#define nl_mark 10
#define form_feed 12

#define term_out stdout
#define print(a)fprintf(term_out,a)
#define print2(a,b)fprintf(term_out,a,b)
#define print3(a,b,c)fprintf(term_out,a,b,c)
#define print_c(v)fputc(v,term_out);
#define new_line(v)fputc('\n',v)
#define term_new_line new_line(term_out)

#define print_ln(v){fprintf(term_out,v);term_new_line;}

#define print2_ln(a,b){print2(a,b);term_new_line;}
#define print3_ln(a,b,c){print3(a,b,c);term_new_line;}

#define print_nl(v){term_new_line;print(v);}

#define print2_nl(a,b){term_new_line;print2(a,b);}


#define update_terminal fflush(term_out)

#define error_loc(m)err_loc(m);history= troublesome;}
#define err_print(m){print_nl(m);error_loc

#define fatal_error(m){ \
    print(m);print_c('.');history= fatal; \
    term_new_line;jump_out(); \
}

#define jump_out() exit(1)

#define none (max_file_index+1)



#include <stdio.h>



#ifdef __STDC__
#include <stdlib.h>
#else
#include <malloc.h>
#endif



#define buf_size 512
#define max_file_index 9






typedef int boolean;
typedef char *string;



#define max_ASCII (126+1)
typedef unsigned char ASCII_Code;




typedef unsigned char text_char;
typedef FILE *text_file;



#define search 0
#define test 1
#define reading 2
#define ignore 3
typedef int in_file_modes;
#define unknown 0
#define master 1
#define chf 2
typedef int file_types;



#define normal 0
#define pre 1
#define post 2
typedef int out_md_type;



typedef int buffer_index;
typedef int file_index;



typedef struct _idsc {
    string name_of_file;
    ASCII_Code buffer[buf_size];
    in_file_modes mode;
    long line;
    file_types type_of_file;
    buffer_index limit;
    text_file the_file;
} input_description;




static int history = spotless;




static ASCII_Code xord[last_text_char + 1];

static text_char xchr[max_ASCII + 1];




static file_index actual_input, test_input, no_ch;
static file_types prod_chf = unknown;
static out_md_type out_mode;



static input_description *input_organization[max_file_index + 1];






static boolean input_has_ended = false;



static text_file out_file;
static string out_name;




void err_loc(int i)
{
    print3_ln(" (file %s, l.%ld).", input_organization[i]->name_of_file, input_organization[i]->line);
}




void get_line(file_index i)
{
    register input_description *inp_desc = input_organization[i];
    if (inp_desc->mode == ignore)
        return;
    if (feof(inp_desc->the_file)) {
        inp_desc->mode = ignore;
        inp_desc->limit = -1;
        if (inp_desc->type_of_file == master)
            input_has_ended = true;
        return;
    }




    {
        int final_limit;
        int c;

        incr(inp_desc->line);
        if (inp_desc->type_of_file == master && inp_desc->line % 100 == 0) {
            if (inp_desc->line % 500 == 0)
                print2("%ld", inp_desc->line);
            else
                print_c('.');
            update_terminal;
        }



        inp_desc->limit = final_limit = 0;
        while (inp_desc->limit < buf_size) {
            c = fgetc(inp_desc->the_file);

            if (c == EOF) {
                if (inp_desc->limit <= 0) {
                    inp_desc->mode = ignore;
                    inp_desc->limit = -1;
                    if (inp_desc->type_of_file == master)
                        input_has_ended = true;
                    return;
                } else {
                    c = nl_mark;
                    break;
                }
            }



            inp_desc->buffer[inp_desc->limit++] = c = map_xord(c);
            if (c == nl_mark)
                break;
            if (c != 32 && c != tab_mark)
                final_limit = inp_desc->limit;
        }

        if (c != nl_mark) {
            err_print("! Input line too long") (i);

            while ((c = fgetc(inp_desc->the_file)) != EOF && map_xord(c) != nl_mark)
                do_nothing;
        }






        inp_desc->limit = final_limit;
    }



}



boolean lines_dont_match(file_index i, file_index j)
{
    buffer_index k, lmt;
    if (input_organization[i]->limit != input_organization[j]->limit)
        return (true);
    lmt = input_organization[i]->limit;
    for (k = 0; k < lmt; k++)
        if (input_organization[i]->buffer[k] != input_organization[j]->buffer[k])
            return (true);
    return (false);
}



void init_change_file(file_index i, boolean b)
{
    register input_description *inp_desc = input_organization[i];

    loop {
        ASCII_Code c;
        get_line(i);
        if (inp_desc->mode == ignore)
            return;
        if (inp_desc->limit < 2)
            continue;
        if (inp_desc->buffer[0] != 64)
            continue;
        c = inp_desc->buffer[1];
        if (c >= 88 && c <= 90)
            c += 122 - 90;
        if (c == 120)
            break;
        if (c == 121 || c == 122)
            if (b)
                err_print("! Where is the matching @x?") (i);

    }




    do {
        get_line(i);
        if (inp_desc->mode == ignore) {
            err_print("! Change file ended after @x") (i);

            return;
        }
    } while (inp_desc->limit <= 0);



}



void put_line(file_index j)
{
    buffer_index i;
    buffer_index lmt;
    ASCII_Code *p;
    lmt = input_organization[j]->limit;
    p = input_organization[j]->buffer;
    for (i = 0; i < lmt; i++)
        fputc(map_xchr(*p++), out_file);
    new_line(out_file);
}



boolean e_of_ch_module(file_index i)
{
    register input_description *inp_desc = input_organization[i];
    if (inp_desc->limit < 0) {
        print_nl("! At the end of change file missing @z ");

        print2("%s", input_organization[i]->name_of_file);
        term_new_line;
        return (true);
    } else if (inp_desc->limit >= 2)
        if (inp_desc->buffer[0] == 64 && (inp_desc->buffer[1] == 90 || inp_desc->buffer[1] == 122))
            return (true);
    return (false);
}



boolean e_of_ch_preamble(file_index i)
{
    register input_description *inp_desc = input_organization[i];
    if (inp_desc->limit >= 2 && inp_desc->buffer[0] == 64)
        if (inp_desc->buffer[1] == 89 || inp_desc->buffer[1] == 121)
            return (true);
    return (false);
}




void usage()
{
    print("Usage: tie -[mc] outfile master changefile(s)");
    term_new_line;
    jump_out();
}




int main(int argc, char **argv)
{
    {   /*12: */

        int i;
        xchr[32] = ' ';
        xchr[33] = '!';
        xchr[34] = '\"';
        xchr[35] = '#';
        xchr[36] = '$';
        xchr[37] = '%';
        xchr[38] = '&';
        xchr[39] = '\'';
        xchr[40] = '(';
        xchr[41] = ')';
        xchr[42] = '*';
        xchr[43] = '+';
        xchr[44] = ',';
        xchr[45] = '-';
        xchr[46] = '.';
        xchr[47] = '/';
        xchr[48] = '0';
        xchr[49] = '1';
        xchr[50] = '2';
        xchr[51] = '3';
        xchr[52] = '4';
        xchr[53] = '5';
        xchr[54] = '6';
        xchr[55] = '7';
        xchr[56] = '8';
        xchr[57] = '9';
        xchr[58] = ':';
        xchr[59] = ';';
        xchr[60] = '<';
        xchr[61] = '=';
        xchr[62] = '>';
        xchr[63] = '?';
        xchr[64] = '@';
        xchr[65] = 'A';
        xchr[66] = 'B';
        xchr[67] = 'C';
        xchr[68] = 'D';
        xchr[69] = 'E';
        xchr[70] = 'F';
        xchr[71] = 'G';
        xchr[72] = 'H';
        xchr[73] = 'I';
        xchr[74] = 'J';
        xchr[75] = 'K';
        xchr[76] = 'L';
        xchr[77] = 'M';
        xchr[78] = 'N';
        xchr[79] = 'O';
        xchr[80] = 'P';
        xchr[81] = 'Q';
        xchr[82] = 'R';
        xchr[83] = 'S';
        xchr[84] = 'T';
        xchr[85] = 'U';
        xchr[86] = 'V';
        xchr[87] = 'W';
        xchr[88] = 'X';
        xchr[89] = 'Y';
        xchr[90] = 'Z';
        xchr[91] = '[';
        xchr[92] = '\\';
        xchr[93] = ']';
        xchr[94] = '^';
        xchr[95] = '_';
        xchr[96] = '`';
        xchr[97] = 'a';
        xchr[98] = 'b';
        xchr[99] = 'c';
        xchr[100] = 'd';
        xchr[101] = 'e';
        xchr[102] = 'f';
        xchr[103] = 'g';
        xchr[104] = 'h';
        xchr[105] = 'i';
        xchr[106] = 'j';
        xchr[107] = 'k';
        xchr[108] = 'l';
        xchr[109] = 'm';
        xchr[110] = 'n';
        xchr[111] = 'o';
        xchr[112] = 'p';
        xchr[113] = 'q';
        xchr[114] = 'r';
        xchr[115] = 's';
        xchr[116] = 't';
        xchr[117] = 'u';
        xchr[118] = 'v';
        xchr[119] = 'w';
        xchr[120] = 'x';
        xchr[121] = 'y';
        xchr[122] = 'z';
        xchr[123] = '{';
        xchr[124] = '|';
        xchr[125] = '}';
        xchr[126] = '~';
        xchr[0] = ' ';
        xchr[0x7F] = ' ';



        for (i = 1; i < 32; xchr[i++] = ' ');
        xchr[tab_mark] = '\t';
        xchr[form_feed] = '\f';
        xchr[nl_mark] = '\n';



        for (i = first_text_char; i <= last_text_char; xord[i++] = 32)
            do_nothing;
        for (i = 1; i <= 126; i++)
            xord[xchr[i]] = i;

    }
    print_ln(banner);
    print_ln(copyright);
    actual_input = 0;
    out_mode = normal;

    {
        int act_arg;
        if (argc < 5 || argc > max_file_index + 4 - 1)
            usage();
        no_ch = -1;
        for (act_arg = 1; act_arg < argc; act_arg++) {
            if (argv[act_arg][0] == '-')
                /*57: */
                if (prod_chf != unknown)
                    usage();
                else
                    switch (argv[act_arg][1]) {
                        case 'c':
                        case 'C':
                            prod_chf = chf;
                            break;
                        case 'm':
                        case 'M':
                            prod_chf = master;
                            break;
                        default:
                            usage();
                    }



            else {      /*58: */
                if (no_ch == (-1)) {
                    out_name = argv[act_arg];
                } else {
                    register input_description *inp_desc;
                    inp_desc = (input_description *)
                        malloc(sizeof(input_description));
                    if (inp_desc == NULL)
                        fatal_error("! No memory for descriptor");

                    inp_desc->mode = search;
                    inp_desc->line = 0;
                    inp_desc->type_of_file = chf;
                    inp_desc->limit = 0;
                    inp_desc->name_of_file = argv[act_arg];
                    input_organization[no_ch] = inp_desc;
                }
                incr(no_ch);
            }



        }
        if (no_ch <= 0 || prod_chf == unknown)
            usage();
    }

    {
        out_file = fopen(out_name, "w");
        if (out_file == NULL) {
            fatal_error("! Could not open/create output file");

        }
    }

    {
        input_organization[0]->the_file = fopen(input_organization[0]->name_of_file, "r");
        if (input_organization[0]->the_file == NULL)
            fatal_error("! Could not open master file");

        print2("(%s)", input_organization[0]->name_of_file);
        term_new_line;
        input_organization[0]->type_of_file = master;
        get_line(0);
    }



    {
        file_index i;
        i = 1;
        while (i < no_ch) {
            input_organization[i]->the_file = fopen(input_organization[i]->name_of_file, "r");
            if (input_organization[i]->the_file == NULL)
                fatal_error("!Could not open change file");

            print2("(%s)", input_organization[i]->name_of_file);
            term_new_line;
            init_change_file(i, true);
            incr(i);
        }
    }

    actual_input = 0;
    input_has_ended = false;
    while (input_has_ended == false || actual_input != 0) {
        file_index test_file;

        {
            register input_description *inp_desc;
            while (actual_input > 0 && e_of_ch_module(actual_input)) {
                inp_desc = input_organization[actual_input];
                if (inp_desc->type_of_file == master) {

                    fatal_error("! This can't happen: change file is master file");

                }
                inp_desc->mode = search;
                init_change_file(actual_input, true);
                while ((input_organization[actual_input]->mode != reading && actual_input > 0))
                    decr(actual_input);
            }
        }



        if (input_has_ended && actual_input == 0)
            break;

        test_input = none;
        test_file = actual_input;
        while (test_input == none && test_file < no_ch - 1) {
            incr(test_file);
            switch (input_organization[test_file]->mode) {
                case search:
                    if (lines_dont_match(actual_input, test_file) == false) {
                        input_organization[test_file]->mode = test;
                        test_input = test_file;
                    }
                    break;
                case test:
                    if (lines_dont_match(actual_input, test_file) == true) {

                        input_organization[test_file]->mode = search;
                        err_print("! Sections do not match") (actual_input);

                        err_loc(test_file);
                        init_change_file(test_file, false);
                    } else
                        test_input = test_file;
                    break;
                case reading:
                    do_nothing;
                    break;
                case ignore:
                    do_nothing;
                    break;
            }
        }




        if (prod_chf == chf) {
            loop {

                if (out_mode == normal) {
                    if (test_input != none) {
                        fputc(map_xchr(64), out_file);
                        fputc(map_xchr(120), out_file);
                        new_line(out_file);
                        out_mode = pre;
                    } else
                        break;
                }





                if (out_mode == pre) {
                    if (test_input == none) {
                        fputc(map_xchr(64), out_file);
                        fputc(map_xchr(121), out_file);
                        new_line(out_file);
                        out_mode = post;
                    } else {
                        if (input_organization[actual_input]->type_of_file == master)
                            put_line(actual_input);
                        break;
                    }
                }




                if (out_mode == post) {
                    if (input_organization[actual_input]->type_of_file == chf) {
                        if (test_input == none)
                            put_line(actual_input);
                        break;
                    } else {
                        fputc(map_xchr(64), out_file);
                        fputc(map_xchr(122), out_file);
                        new_line(out_file);
                        new_line(out_file);
                        out_mode = normal;
                    }
                }



            }
        } else if (test_input == none)
            put_line(actual_input);




        get_line(actual_input);
        if (test_input != none) {
            get_line(test_input);
            if (e_of_ch_preamble(test_input) == true) {
                get_line(test_input);
                input_organization[test_input]->mode = reading;
                actual_input = test_input;
                test_input = none;
            }
        }

    }   /* while */

    if (out_mode == post) {
        fputc(map_xchr(64), out_file);
        fputc(map_xchr(122), out_file);
        new_line(out_file);
    }

    {
        file_index i;
        for (i = 1; i < no_ch; i++) {
            if (input_organization[i]->mode != ignore)
                err_print("! Change file entry did not match") (i);

        }
    }

    {
        string msg;
        switch (history) {
            case spotless:
                msg = "No errors were found";
                break;
            case troublesome:
                msg = "Pardon me, but I think I spotted something wrong.";
                break;
            case fatal:
                msg = "That was a fatal error, my friend";
                break;
        }
        print2_nl("(%s.)", msg);
        term_new_line;
        exit(history == spotless ? 0 : 1);
    }
}
