/* cpascal.h: implement various bits of standard and other Pascal that
   we use in the change files.  Public domain.
   
   This is the top-level include file for all the web2c-generated C
   programs except TeX and Metafont themselves, which use texmf.h.  It's
   not included by the web2c programs, though.  */

#ifndef CPASCAL_H
#define CPASCAL_H

#ifdef WIN32
#pragma warning( disable : 4018 4244 )  
#endif

#define FATAL_PERROR(msg) do { printf("Error: %s\n", msg); exit(1); } while(0)

/* Pieces of predefined Pascal web2c doesn't convert.  */

/* Absolute value.  Without the casts to int here, the Ultrix and
   AIX compilers (at least) produce bad code (or maybe it's that I don't
   understand all the casting rules in C) for tests on memory fields. 
   Specifically, a test in diag_round (in Metafont) on a quarterword
   comes out differently without the cast, thus causing the trap test to
   fail.  (A path at line 86 is constructed slightly differently).  */
/* If the system had an abs #define already, get rid of it.  */
#undef abs
#define abs(x) ((int)(x) >= 0 ? (int)(x) : (int)-(x))

#define odd(x)		((x) & 1)
#define maxint INTEGER_MAX

#define floorunscaled(i) ((i)>>16)
#define floorscaled(i) ((i)&(-65536))
#define roundunscaled(i) ((((i)>>15)+1)>>1)
#define roundfraction(i) ((((i)>>11)+1)>>1)
#ifndef TeX
/* In TeX, the half routine is always applied to positive integers.
   In MF and MP, it isn't; therefore, we can't portably use the C shift
   operator -- whether zeros or the sign bit will be shifted in on
   negative left operands is implementation-defined.
   
   It might be worth going through MF and using halfp where possible, as
   in MP.  */
#define half(i) ( ((i)<0) ? (((i)+1)>>1) : ((i)>>1) )
#endif
#define halfp(i) ((i) >> 1)

/* Standard Pascal file routines.  These are used for both binary and
   text files, but binary is more common.  If you want it 100% right,
   fix the change files to pass the fopen mode to reset in all cases and
   send me the changes; it doesn't matter for Unix, so I'm not going to
   spend any more time on it.  */
#define reset(f,n) f = xfopen (n, FOPEN_R_MODE)
#define rewrite(f,n) f = xfopen (n, FOPEN_W_MODE)
#define resetbin(f,n) f = xfopen (n, FOPEN_RBIN_MODE)
#define rewritebin(f,n) f = xfopen (n, FOPEN_WBIN_MODE)

/* We hope this will be efficient than the `x = x - 1' that decr would
   otherwise be translated to.  Likewise for incr.  */
#define decr(x) --(x)
#define incr(x) ++(x)

/* Extra stuff used in various change files for various reasons.  */

/* Pascal has no address-of operator, and we need pointers to integers
   to set up the option table.  */
#define addressof(x) (&(x))

/* So dvicopy can use stdin/stdout.  */
#if defined (__DJGPP__) || defined (WIN32)
#include <io.h>
/* Don't set console device to binary.  */
#define makebinaryfile(arg) ((void)(!isatty(fileno(arg)) && setmode(fileno(arg), O_BINARY)), arg)
#else
#define makebinaryfile(arg) (arg)
#endif

/* It's not worth fixing fixwrites to handle Pascal-style n:m write
   specifiers for reals, so the change files call print_real instead.  */
#define printreal(r,n,m) fprintreal (stdout, r, n, m)

/* Write the byte X to the file F.  */
#define putbyte(x,f) \
 do { if (putc ((char) (x) & 255, f) == EOF) \
        FATAL1 ("putbyte(%ld) failed", (long) x); } while (0)

/* To work around casting problems.  */
#define ucharcast(x) ((unsigned char) (x))
#define int64cast(x) ((integer64) (x))
#define stringcast(x) ((char *) (x))
#define conststringcast(x) ((const char *) (x))
#define ustringcast(x) ((unsigned char *) (x))

/* `aopenin' is used for all kinds of input text files, so it
   needs to know what path to use.  Used by BibTeX, MF, TeX.  */
#define aopenin(f,p) open_input (&(f), p, FOPEN_RBIN_MODE)
#define aopenout(f)  open_output (&(f), FOPEN_W_MODE)
#define aclose close_file

/* Used in BibTeX for subsidiary aux files. */
#define aopeninwithdirname(f,p,s) open_input_with_dirname (&(f), p, s)

/* How to output to the GF or DVI file.  */
#define WRITE_OUT(a, b)							\
  if ((size_t) fwrite ((char *) &OUT_BUF[a], sizeof (OUT_BUF[a]),       \
                    (size_t) ((size_t)(b) - (size_t)(a) + 1), OUT_FILE) \
      != (size_t) ((size_t) (b) - (size_t) (a) + 1))                    \
    FATAL_PERROR ("fwrite");

#ifdef GFTODVI
#define writedvi WRITE_OUT 
#define OUT_FILE dvifile
#define OUT_BUF dvibuf
#endif

/* PatGen 2 uses this.  */
#define input2ints(a,b) zinput2ints (&a, &b)

/* We need this only if TeX is being debugged.  */
#define input3ints(a,b,c) zinput3ints (&a, &b, &c)

/* Allocate an array of a given type. Add 1 to size to account for the
   fact that Pascal arrays are used from [1..size], unlike C arrays which
   use [0..size). */
#define xmallocarray(type,size) ((type*)xmalloc((size+1)*sizeof(type)))
/* Same for reallocating an array. */
#define xreallocarray(ptr,type,size) ((type*)xrealloc(ptr,(size+1)*sizeof(type)))
/* Allocate and clear an array of a given type. Add 1 to nmemb and size. */
#define xcallocarray(type,nmemb,size) ((type*)xcalloc(nmemb+1,(size+1)*sizeof(type)))

/* BibTeX needs this to dynamically reallocate arrays.  Too bad we can't
   rely on stringification, or we could avoid the ARRAY_NAME arg.
   Actually allocate one more than requests, so we can index the last
   entry, as Pascal wants to do.  */
#define BIBXRETALLOCNOSET(array_name, array_var, type, size_var, new_size) \
  fprintf (logfile, "Reallocated %s (elt_size=%ld) to %ld items from %ld.\n", \
           array_name, (long) sizeof (type), (long) new_size, (long) size_var); \
  XRETALLOC (array_var, new_size + 1, type)
/* Same as above, but also increase SIZE_VAR when no more arrays
   with the same size parameter will be resized.  */
#define BIBXRETALLOC(array_name, array_var, type, size_var, new_size) do { \
  BIBXRETALLOCNOSET(array_name, array_var, type, size_var, new_size); \
  size_var = new_size; \
} while (0)
/* Same as above, but for the pseudo-TYPE ASCII_code[LENGTH+1].  */
#define BIBXRETALLOCSTRING(array_name, array_var, length, size_var, new_size) \
  fprintf (logfile, "Reallocated %s (elt_size=%ld) to %ld items from %ld.\n", \
           array_name, (long) (length + 1), (long) new_size, (long) size_var); \
  XRETALLOC (array_var, (new_size) * (length + 1), ASCIIcode)
  
/* Need precisely int for getopt, etc. */
#define cinttype int

/* Need this because web2c doesn't translate `var1,var2:^char' correctly
   -- var2 lacks the *.  */
#define cstring char *

#define constcstring const char *

/* For strings of unsigned chars, used as array indices.  */
#define constw2custring const_w2custring
typedef unsigned char *w2custring;
typedef const unsigned char *const_w2custring;

/* TeX et al. have a variable free, but we also need the C routine.  */
#define libcfree free

/* We have a system-dependent prompt in tex.ch.  We don't want it in the
   char * pool, since (now that the pools are compiled into the
   binaries), that would make the .fmt unsharable.  So go through this
   circumlotion to print a C char *.  The lack of the closing ) is
   intentional, since the code adds more text sometimes.  Although the
   eof character can be changed with stty or whatever, we're certainly
   not going to try to extract the actual value from a terminal struct.
   Anyone who is savvy enough to change it will not be confused.  */
#ifdef WIN32
#define promptfilenamehelpmsg "(Press Enter to retry, or Control-Z to exit"
#else
#define promptfilenamehelpmsg "(Press Enter to retry, or Control-D to exit"
#endif

/* We use this rather than a simple fputs so that the char * will end up
   in the .log file, too.  */
#define printcstring(STR)        \
  do {                           \
    const char * ch_ptr = (STR); \
    while (*ch_ptr)              \
      printchar(*(ch_ptr++));    \
  } while (0)


/* Tangle removes underscores from names.  Put them back for things that
   are defined in C with _'s.  */
#define extendfilename	extend_filename
#define findsuffix	find_suffix
#define makesuffix	make_suffix
#define FOPENRBINMODE	FOPEN_RBIN_MODE
#define FOPENRMODE	FOPEN_R_MODE
#define getoptlongonly	getopt_long_only
#define hasarg		has_arg
#define ISDIRSEP(c)	(c == '/')
#define kpsebibformat	kpse_bib_format
#define kpsebstformat	kpse_bst_format
#define kpsefindfile	kpse_find_file
#define kpsefindmf	kpse_find_mf
#define kpsefindmft	kpse_find_mft
#define kpsefindofm	kpse_find_ofm
#define kpsefindovf	kpse_find_ovf
#define kpsefindtex	kpse_find_tex
#define kpsefindtfm	kpse_find_tfm
#define kpsefindvf	kpse_find_vf
#define kpsesetprogramname kpse_set_program_name
#define kpseresetprogramname kpse_reset_program_name
#define kpsegfformat	kpse_gf_format
#define kpselastformat	kpse_last_format
#define kpsemaketexdiscarderrors kpse_make_tex_discard_errors
#define kpsemfformat	kpse_mf_format
#define kpsemftformat	kpse_mft_format
#define kpsempformat	kpse_mp_format
#define kpseocpformat	kpse_ocp_format
#define kpseofmformat	kpse_ofm_format
#define kpseoplformat	kpse_opl_format
#define kpseotpformat	kpse_otp_format
#define kpseovpformat	kpse_ovp_format
#define kpseovfformat	kpse_ovf_format
#define kpseopenfile	kpse_open_file
#define kpsepkformat	kpse_pk_format
#define kpsetfmformat	kpse_tfm_format
#define kpsevfformat	kpse_vf_format
#define kpsewebformat	kpse_web_format
#define kpsevarvalue	kpse_var_value
#define kpsesrccmdline	kpse_src_cmdline
#define kpsesrccompile	kpse_src_compile
#define recorderchangefilename	recorder_change_filename
#define recorderenabled	recorder_enabled
#define texmfyesno      texmf_yesno

#define kpseinnameok(fname)	mykpse_find_file(fname, NULL)
#define kpseoutnameok(fname)	true
#define kpseinitprog(name, dpi, mode, font) kpse_set_program_name(name)
#define kpsesetprogramenabled(fmt, value, level) do {} while(0)
#define kpse_set_program_enabled kpsesetprogramenabled

/* We need a new type for the argument parsing, too.  */
typedef struct option getoptstruct;

/* We never need the `link' system call, which may be declared in
   <unistd.h>, but we do have variables named `link' in the webs.  */
#undef link
#define link link_var

/* Throw away VMS' library routine `getname', as WEB uses that name.  */
#ifdef VMS
#undef getname
#define getname vms_getname
#endif

/* Apparently POSIX 2008 has getline and glibc 2.9.90 exports it.
   tangle, weave, et al. use that symbol; try to define it away so
   something that a standard won't usurp.  */
#ifdef getline
#undef getline
#endif
#define getline web2c_getline

extern int loadpoolstrings (int);

#endif /* not CPASCAL_H */
