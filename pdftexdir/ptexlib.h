/* ptexlib.h: macros for pdfTeX library code.
Copyright 1996-2018 Han The Thanh, <thanh@pdftex.org>

This file is part of pdfTeX.

pdfTeX is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

pdfTeX is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PDFTEXLIB
#  define PDFTEXLIB

#ifdef _WIN32
#undef fopen
#undef xfopen
#undef fputs
#undef putc
#define fopen fsyscp_fopen
#define xfopen fsyscp_xfopen
#define fputs win32_fputs
#define putc win32_putc
#endif

/* WEB2C macros and prototypes */
#  if !defined(PDFTEXCOERCE) && !defined(PDFETEXCOERCE)
#    ifdef pdfTeX
#      undef pdfTeX             /* to avoid warning about redefining pdfTeX in pdftexd.h */
#    endif                      /* pdfTeX */
#    define EXTERN extern
#    include "mytexd.h"
#  endif

/* pdftexlib macros */
#  include "ptexmac.h"

/* avl */
#  include "avlstuff.h"

/* ../lib/lib.a */
#  include "../lib/lib.h"

/* pdftexlib type declarations */
typedef struct {
    const char *pdfname;
    const char *t1name;
    float value;
    bool valid;
} key_entry;

struct _subfont_entry;
typedef struct _subfont_entry subfont_entry;

struct _subfont_entry {
    char *infix;                /* infix for this subfont, eg "01" */
    long charcodes[256];        /* the mapping for this subfont as read from sfd */
    subfont_entry *next;
};

typedef struct {
    char *name;                 /* sfd name, eg "Unicode" */
    subfont_entry *subfont;     /* linked list of subfonts */
} sfd_entry;

typedef struct {
    int fe_objnum;          /* object number */
    char *name;                 /* encoding file name */
    char **glyph_names;         /* array of glyph names */
    struct avl_table *tx_tree;  /* tree of encoding positions marked as used by TeX */
} fe_entry;

typedef struct {
    char *name;                 /* glyph name */
    long code;                  /* -1 = undefined; -2 = multiple codes, stored
                                   as char * in unicode_seq; otherwise unicode value */
    char *unicode_seq;          /* multiple unicode sequence */
} glyph_unicode_entry;

#  define FD_FLAGS_NOT_SET_IN_MAPLINE -1
#  define FD_FLAGS_DEFAULT_EMBED  4     /* a symbol font */
#  define FD_FLAGS_DEFAULT_NON_EMBED 0x22
                                        /* a nonsymbolic serif font */

typedef struct {
    /* parameters scanned from the map file: */
    char *tfm_name;             /* TFM file name (1st field in map line) */
    char *sfd_name;             /* subfont directory name, like @sfd_name@ */
    char *ps_name;              /* PostScript name (optional 2nd field in map line) */
    int fd_flags;           /* font descriptor /Flags (PDF Ref. section 5.7.1) */
    int slant;              /* SlantFont */
    int extend;             /* ExtendFont */
    char *encname;              /* encoding file name */
    char *ff_name;              /* font file name */
    unsigned short type;        /* various flags */
    short pid;                  /* Pid for truetype fonts */
    short eid;                  /* Eid for truetype fonts */
    /* parameters NOT scanned from the map file: */
    subfont_entry *subfont;     /* subfont mapping */
    unsigned short links;       /* link flags from tfm_tree and ps_tree */
    bool in_use;             /* true if this structure has been referenced already */
} fm_entry;

/**********************************************************************/

typedef struct {
    int val;                    /* value */
    bool set;                /* true if parameter has been set */
} intparm;

typedef struct fd_entry_ {
    int fd_objnum;          /* object number of the font descriptor object */
    char *fontname;             /* /FontName (without subset tag) */
    char *subset_tag;           /* 6-character subset tag */
    bool ff_found;
    int ff_objnum;          /* object number of the font program stream */
    int fn_objnum;          /* font name object number (embedded PDF) */
    bool all_glyphs;         /* embed all glyphs? */
    bool write_ttf_glyph_names;
    intparm font_dim[FONT_KEYS_NUM];
    fe_entry *fe;               /* pointer to encoding structure */
    char **builtin_glyph_names; /* builtin encoding as read from the Type1 font file */
    fm_entry *fm;               /* pointer to font map structure */
    struct avl_table *tx_tree;  /* tree of non-reencoded TeX characters marked as used */
    struct avl_table *gl_tree;  /* tree of all marked glyphs */
} fd_entry;

typedef struct cw_entry_ {
    int cw_objnum;          /* object number of the font program object */
    int *width;             /* array [0...255] of character width values */
} cw_entry;

typedef struct fo_entry_ {
    int fo_objnum;          /* object number of the font dictionary */
    internalfontnumber tex_font;        /* needed only for \pdffontattr{} */
    fm_entry *fm;               /* pointer to font map structure for this font dictionary */
    fd_entry *fd;               /* pointer to /FontDescriptor object structure */
    fe_entry *fe;               /* pointer to encoding structure */
    cw_entry *cw;               /* pointer to character /Widths array object structure */
    int first_char;         /* first character used in this font */
    int last_char;          /* last character used in this font */
    int tounicode_objnum;   /* object number of ToUnicode */
} fo_entry;

/**********************************************************************/

typedef struct {
    char *ff_name;              /* base name of font file */
    char *ff_path;              /* full path to font file */
} ff_entry;

typedef short shalfword;
typedef struct {
    int charcode, cwidth, cheight, xoff, yoff, xescape, rastersize;
    halfword *raster;
} chardesc;

/* pdftexlib variable declarations */
extern bool true_dimen;
extern char **t1_glyph_names, *t1_builtin_glyph_names[];
extern char *cur_file_name;
extern int t1_length1, t1_length2, t1_length3;
extern int ttf_length;
extern strnumber last_tex_string;
extern size_t last_ptr_index;
extern char *fb_array;
extern FILE *t3_file;
extern const char *ptexbanner;

/* pdftexlib function prototypes */

/* prototypes used in C code as well as pdftoepdf.cc */
#include <pdftexdir/pdftex-common.h>

/* mapfile.c */
extern bool hasfmentry(internalfontnumber);
extern bool isscalable(internalfontnumber);
extern void fm_free(void);
extern void fm_read_info(void);
extern ff_entry *check_ff_exist(char *, bool);
extern void pdfmapfile(int);
extern void pdfmapline(int);
extern void pdfinitmapfile(const char * map_name);
extern fm_entry *new_fm_entry(void);
extern void delete_fm_entry(fm_entry *);
extern int avl_do_entry(fm_entry *, int);
extern int check_std_t1font(char *s);

/* papersiz.c */
extern int myatodim(char **);
extern int myatol(char **);

/* pkin.c */
extern int readchar(bool, chardesc *);

/* subfont.c */
extern void sfd_free(void);
extern bool handle_subfont_fm(fm_entry *, int);

/* tounicode.c */
extern void glyph_unicode_free(void);
extern void deftounicode(strnumber, strnumber);
extern int write_tounicode(char **, const char *, const char *);

/* utils.c */
extern bool str_eq_cstr(strnumber, char *);
extern int xfflush(FILE *);
extern int xgetc(FILE *);
extern int xputc(int, FILE *);
extern scaled extxnoverd(scaled, scaled, scaled);
extern size_t xfwrite(void *, size_t size, size_t nmemb, FILE *);
extern strnumber getresnameprefix(void);
extern strnumber maketexstring(const char *);
extern int fb_offset(void);
extern void fb_flush(void);
extern void fb_putchar(eightbits b);
extern void fb_seek(int);
extern void libpdffinish(void);
extern void make_subset_tag(fd_entry *);
extern void setjobid(int, int, int, int);
extern void writestreamlength(long, long);
extern void printID(strnumber);
extern void printIDalt(strnumber);
extern void printcreationdate(void);
extern void printmoddate(void);
extern void escapename(poolpointer in);
extern void escapestring(poolpointer in);
extern void escapehex(poolpointer in);
extern void unescapehex(poolpointer in);
extern void getmd5sum(strnumber s, bool file);
extern void matchstrings(strnumber s, strnumber t, int subcount, bool icase);
extern void getmatch(int i);
extern void makepdftexbanner(void);
extern void removepdffile(void);
extern void garbagewarning(void);
extern void initversionstring(char **versions);
extern int newcolorstack(int s, int literal_mode, bool pagestart);
extern int colorstackused(void);
extern int colorstackset(int colstack_no, int s);
extern int colorstackpush(int colstack_no, int s);
extern int colorstackpop(int colstack_no);
extern int colorstackcurrent(int colstack_no);
extern int colorstackskippagestart(int colstack_no);
extern void checkpdfsave(int cur_h, int cur_v);
extern void checkpdfrestore(int cur_h, int cur_v);
extern void pdfshipoutbegin(bool shipping_page);
extern void pdfshipoutend(bool shipping_page);
extern int pdfsetmatrix(poolpointer in, scaled cur_h, scaled cur_v);
extern void matrixtransformpoint(scaled x, scaled y);
extern void matrixtransformrect(scaled llx, scaled lly, scaled urx, scaled ury);
extern bool matrixused(void);
extern void matrixrecalculate(scaled urx);
extern scaled getllx(void);
extern scaled getlly(void);
extern scaled geturx(void);
extern scaled getury(void);
extern void allocvffnts(void);

/* vfpacket.c */
extern int newvfpacket(internalfontnumber);
extern void storepacket(internalfontnumber, int, strnumber);
extern void startpacket(internalfontnumber, eightbits);
extern eightbits packetbyte(void);
extern void poppacketstate(void);
extern void pushpacketstate(void);
extern void vf_free(void);

/* writeenc.c */
extern fe_entry *get_fe_entry(char *);
extern void enc_free(void);
extern void write_fontencodings(void);

/* writefont.c */
extern void dopdffont(int, internalfontnumber);
extern fd_entry *lookup_fd_entry(char *, int, int);
extern fd_entry *new_fd_entry(void);
extern void writefontstuff(void);
extern void register_fd_entry(fd_entry *);

/* writeimg.c */
extern bool checkimageb(int);
extern bool checkimagec(int);
extern bool checkimagei(int);
extern bool ispdfimage(int);
extern bool ispngimage(int);
extern int epdforigx(int);
extern int epdforigy(int);
extern int imagecolor(int);
extern int imageheight(int);
extern int imagerotate(int);
extern int imagepages(int);
extern int imagewidth(int);
extern int imagexres(int);
extern int imageyres(int);
extern int imagecolordepth(int);
extern int getimagegroupref(int);
extern void setimagegroupref(int,int);
extern int readimage(strnumber, int, strnumber, int, int,
                         int, int, int);
extern void deleteimage(int);
extern void img_free(void);
extern void updateimageprocset(int);
extern void writeimage(int);
extern void dumpimagemeta(void);
extern void undumpimagemeta(int, int, int);

/* writejbig2.c */
extern void flushjbig2page0objects(void);

/* writet1.c */
extern bool t1_subset(char *, char *, unsigned char *);
extern char **load_enc_file(char *);
extern void writet1(fd_entry *);
extern void t1_free(void);

/* writet3.c */
extern void writet3(fm_entry *, int, internalfontnumber);
extern scaled getpkcharwidth(internalfontnumber, scaled);

/* writettf.c */
extern void writettf(fd_entry *);
extern void writeotf(fd_entry *);
extern void ttf_free(void);

/* writezip.c */
extern void writezip(bool);
extern void zip_free(void);

/* avlstuff.c */
extern int comp_int_entry(const void *, const void *, void *);
extern int comp_string_entry(const void *, const void *, void *);
extern void avlputobj(int, int);
extern int avlfindobj(int, int, int);

/**********************************************************************/
static const key_entry font_key[FONT_KEYS_NUM] = {
    {"Ascent", "Ascender"}
    , {"CapHeight", "CapHeight"}
    , {"Descent", "Descender"}
    , {"ItalicAngle", "ItalicAngle"}
    , {"StemV", "StdVW"}
    , {"XHeight", "XHeight"}
    , {"FontBBox", "FontBBox"}
    , {"", "", 0}
    , {"", "", 0}
    , {"", "", 0}
    , {"FontName", "FontName"}
};

/**********************************************************************/
#endif                          /* PDFTEXLIB */
// vim: ts=4
