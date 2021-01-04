#ifndef MYTEXD_H
#define MYTEXD_H

#undef TRIP
#undef TRAP
#define STAT
#define INI
#define INITEX
#define TeX
#define pdfTeX
#ifdef TEXMF_DEBUG
#endif /* TEXMF_DEBUG */

#define PDFTEXCOERCE
#define hashoffset ( 514 ) 
#define trieopsize ( 35111L ) 
#define negtrieopsize ( -35111L ) 
#define mintrieop ( 0 ) 
#define maxtrieop ( 65535L ) 
#define poolname ( TEXMFPOOLNAME ) 
#define enginename ( TEXMFENGINENAME ) 
#define inftriesize ( 8000 ) 
#define suptriesize ( 4194303L ) 
#define infmaxstrings ( 3000 ) 
#define supmaxstrings ( 2097151L ) 
#define infstringsfree ( 100 ) 
#define supstringsfree ( supmaxstrings ) 
#define infbufsize ( 500 ) 
#define supbufsize ( 30000000L ) 
#define infnestsize ( 40 ) 
#define supnestsize ( 4000 ) 
#define infmaxinopen ( 6 ) 
#define supmaxinopen ( 127 ) 
#define infparamsize ( 60 ) 
#define supparamsize ( 32767 ) 
#define infsavesize ( 600 ) 
#define supsavesize ( 80000L ) 
#define infstacksize ( 200 ) 
#define supstacksize ( 30000 ) 
#define infdvibufsize ( 800 ) 
#define supdvibufsize ( 65536L ) 
#define inffontmemsize ( 20000 ) 
#define supfontmemsize ( 147483647L ) 
#define supfontmax ( 9000 ) 
#define inffontmax ( 50 ) 
#define infpoolsize ( 32000 ) 
#define suppoolsize ( 40000000L ) 
#define infpoolfree ( 1000 ) 
#define suppoolfree ( suppoolsize ) 
#define infstringvacancies ( 8000 ) 
#define supstringvacancies ( suppoolsize - 23000 ) 
#define suphashextra ( supmaxstrings ) 
#define infhashextra ( 0 ) 
#define suphyphsize ( 65535L ) 
#define infhyphsize ( 610 ) 
#define infexpanddepth ( 10 ) 
#define supexpanddepth ( 10000000L ) 
#define infpdfmemsize ( 10000 ) 
#define suppdfmemsize ( 10000000L ) 
#define pdfopbufsize ( 16384 ) 
#define infpdfosbufsize ( 1 ) 
#define suppdfosbufsize ( 5000000L ) 
#define pdfosmaxobjs ( 100 ) 
#define infobjtabsize ( 1000 ) 
#define supobjtabsize ( 8388607L ) 
#define infdestnamessize ( 1000 ) 
#define supdestnamessize ( 500000L ) 
#define infpkdpi ( 72 ) 
#define suppkdpi ( 8000 ) 
#define pdfobjtypemax ( 9 ) 
#define vfmaxrecursion ( 10 ) 
#define vfstacksize ( 100 ) 
#define pdfmaxlinklevel ( 10 ) 

#include "myw2c.h"

#define INTEGER_MAX INT_MAX
#define FATAL(fmt) do {printf(fmt); exit(1); } while (0)
#define FATAL1(fmt,a) do { printf(fmt,a); exit(1); } while (0)
#define FATAL2(fmt,a,b) do { printf(fmt,a,b); exit(1); } while (0)
#define FATAL3(fmt,a,b,c) do { printf(fmt,a,b,c); exit(1); } while (0)
#define FATAL4(fmt,a,b,c,d) do { printf(fmt,a,b,c,d); exit(1); } while (0)
#define FATAL5(fmt,a,b,c,d,e) do { printf(fmt,a,b,c,d,e); exit(1); } while (0)
#define EDITOR "vim"

typedef unsigned char eightbits  ;
typedef FILE * alphafile  ;
typedef FILE * bytefile  ;
typedef int poolpointer  ;
typedef int strnumber  ;
typedef int scaled  ;
typedef int nonnegativeinteger  ;
typedef unsigned char smallnumber  ;
typedef unsigned char quarterword  ;
typedef int halfword  ;

#include "cpascal.h"
#include "texmfmp.h"
#include "texmfmem.h"
#include "pdftexdir/pdftex.h"
#include "synctexdir/synctex-pdftex.h"
#include "synctexdir/synctex.h"
#include "lib/lib.h"

#define MAX_HALFWORD 0xfffffff
#define MIN_HALFWORD -0xfffffff

typedef FILE * wordfile  ;
typedef unsigned char glueord  ;
typedef struct {
    short modefield ;
  halfword headfield, tailfield ;
  halfword eTeXauxfield ;
  int pgfield, mlfield ;
  memoryword auxfield ;
} liststaterecord  ;
typedef unsigned char groupcode  ;
typedef struct {
    quarterword statefield, indexfield ;
  halfword startfield, locfield, limitfield, namefield ;
  int synctextagfield ;
} instaterecord  ;
typedef int internalfontnumber  ;
typedef int fontindex  ;
typedef short ninebits  ;
typedef int dviindex  ;
typedef struct {
    int int0, int1 ;
  long int2 ;
  int int3, int4 ;
} objentry  ;
typedef eightbits charusedarray [32] ;
typedef eightbits charmaparray [33] ;
typedef int * fmentryptr  ;
typedef int vfstackindex  ;
typedef struct {
    scaled stackh, stackv, stackw, stackx, stacky, stackz ;
} vfstackrecord  ;
typedef int triepointer  ;
typedef unsigned short trieopcode  ;
typedef unsigned short hyphpointer  ;
typedef struct {
    strnumber objname ;
  int objnum ;
} destnameentry  ;
typedef struct {
    int nestinglevel ;
  halfword linknode ;
  halfword reflinknode ;
} pdflinkstackrecord  ;
typedef int savepointer  ;

#include "cpascal.h"
#include "pdftexdir/ptexlib.h"

EXTERN int bad  ;
EXTERN unsigned char xord[256]  ;
EXTERN unsigned char xchr[256]  ;
EXTERN unsigned char xprn[256]  ;
EXTERN halfword mubyteread[256]  ;
EXTERN strnumber mubytewrite[256]  ;
EXTERN halfword mubytecswrite[128]  ;
EXTERN int mubyteskip  ;
EXTERN int mubytekeep  ;
EXTERN int mubyteskeep  ;
EXTERN int mubyteprefix  ;
EXTERN bool mubytetablein  ;
EXTERN bool mubytetableout  ;
EXTERN bool mubyterelax  ;
EXTERN bool mubytestart  ;
EXTERN bool mubytesstart  ;
EXTERN halfword mubytetoken  ;
EXTERN halfword mubytestoken  ;
EXTERN int mubytesout  ;
EXTERN int mubyteslog  ;
EXTERN int specsout  ;
EXTERN bool noconvert  ;
EXTERN bool activenoconvert  ;
EXTERN bool writenoexpanding  ;
EXTERN bool csconverting  ;
EXTERN bool specialprinting  ;
EXTERN bool messageprinting  ;
EXTERN unsigned char * nameoffile  ;
EXTERN int namelength  ;
EXTERN unsigned char * buffer  ;
EXTERN int first  ;
EXTERN int last  ;
EXTERN int maxbufstack  ;
#ifdef INITEX
EXTERN bool iniversion  ;
EXTERN bool dumpoption  ;
EXTERN bool dumpline  ;
#endif /* INITEX */
EXTERN constcstring dumpname  ;
EXTERN int bounddefault  ;
EXTERN constcstring boundname  ;
#define membot 0
EXTERN int mainmemory  ;
EXTERN int extramembot  ;
EXTERN int memmin  ;
EXTERN int memtop  ;
EXTERN int extramemtop  ;
EXTERN int memmax  ;
EXTERN int errorline  ;
EXTERN int halferrorline  ;
EXTERN int maxprintline  ;
EXTERN int maxstrings  ;
EXTERN int stringsfree  ;
EXTERN int stringvacancies  ;
EXTERN int poolsize  ;
EXTERN int poolfree  ;
EXTERN int fontmemsize  ;
EXTERN int fontmax  ;
EXTERN int fontk  ;
EXTERN int hyphsize  ;
EXTERN int triesize  ;
EXTERN int bufsize  ;
EXTERN int stacksize  ;
EXTERN int maxinopen  ;
EXTERN int paramsize  ;
EXTERN int nestsize  ;
EXTERN int savesize  ;
EXTERN int dvibufsize  ;
EXTERN int expanddepth  ;
EXTERN cinttype parsefirstlinep  ;
EXTERN cinttype filelineerrorstylep  ;
EXTERN cinttype eightbitp  ;
EXTERN cinttype haltonerrorp  ;
EXTERN bool quotedfilename  ;
EXTERN bool srcspecialsp  ;
EXTERN bool insertsrcspecialauto  ;
EXTERN bool insertsrcspecialeverypar  ;
EXTERN bool insertsrcspecialeveryparend  ;
EXTERN bool insertsrcspecialeverycr  ;
EXTERN bool insertsrcspecialeverymath  ;
EXTERN bool insertsrcspecialeveryhbox  ;
EXTERN bool insertsrcspecialeveryvbox  ;
EXTERN bool insertsrcspecialeverydisplay  ;
EXTERN unsigned char * strpool  ;
EXTERN poolpointer * strstart  ;
EXTERN poolpointer poolptr  ;
EXTERN strnumber strptr  ;
EXTERN poolpointer initpoolptr  ;
EXTERN strnumber initstrptr  ;
#ifdef INITEX
EXTERN alphafile poolfile  ;
#endif /* INITEX */
EXTERN alphafile logfile  ;
EXTERN unsigned char selector  ;
EXTERN unsigned char dig[23]  ;
EXTERN int tally  ;
EXTERN int termoffset  ;
EXTERN int fileoffset  ;
EXTERN unsigned char trickbuf[256]  ;
EXTERN int trickcount  ;
EXTERN int firstcount  ;
EXTERN unsigned char interaction  ;
EXTERN unsigned char interactionoption  ;
EXTERN bool deletionsallowed  ;
EXTERN bool setboxallowed  ;
EXTERN unsigned char history  ;
EXTERN int8_t errorcount  ;
EXTERN strnumber helpline[6]  ;
EXTERN unsigned char helpptr  ;
EXTERN bool useerrhelp  ;
EXTERN int interrupt  ;
EXTERN bool OKtointerrupt  ;
EXTERN bool aritherror  ;
EXTERN scaled texremainder  ;
EXTERN int randoms[55]  ;
EXTERN unsigned char jrandom  ;
EXTERN scaled randomseed  ;
EXTERN int twotothe[31]  ;
EXTERN int speclog[29]  ;
EXTERN halfword tempptr  ;
EXTERN memoryword * yzmem  ;
EXTERN memoryword * mem  ;
EXTERN halfword lomemmax  ;
EXTERN halfword himemmin  ;
EXTERN int varused, dynused  ;
EXTERN halfword avail  ;
EXTERN halfword memend  ;
EXTERN halfword rover  ;
#ifdef TEXMF_DEBUG
EXTERN bool freearr[10]  ;
EXTERN bool wasfree[10]  ;
EXTERN halfword wasmemend, waslomax, washimin  ;
EXTERN bool panicking  ;
#endif /* TEXMF_DEBUG */
EXTERN int fontinshortdisplay  ;
EXTERN int depththreshold  ;
EXTERN int breadthmax  ;
EXTERN liststaterecord * nest  ;
EXTERN int nestptr  ;
EXTERN int maxneststack  ;
EXTERN liststaterecord curlist  ;
EXTERN short shownmode  ;
EXTERN halfword savetail  ;
EXTERN unsigned char oldsetting  ;
EXTERN memoryword * eqtb  ;
EXTERN quarterword 
#define xeqlevel (zzzaa -29277)
  zzzaa[909]  ;
EXTERN twohalves * hash  ;
EXTERN twohalves * yhash  ;
EXTERN halfword hashused  ;
EXTERN halfword hashextra  ;
EXTERN halfword hashtop  ;
EXTERN halfword eqtbtop  ;
EXTERN halfword hashhigh  ;
EXTERN bool nonewcontrolsequence  ;
EXTERN int cscount  ;
EXTERN twohalves prim[2101]  ;
EXTERN halfword primused  ;
EXTERN memoryword * savestack  ;
EXTERN int saveptr  ;
EXTERN int maxsavestack  ;
EXTERN quarterword curlevel  ;
EXTERN groupcode curgroup  ;
EXTERN int curboundary  ;
EXTERN int magset  ;
EXTERN eightbits curcmd  ;
EXTERN halfword curchr  ;
EXTERN halfword curcs  ;
EXTERN halfword curtok  ;
EXTERN instaterecord * inputstack  ;
EXTERN int inputptr  ;
EXTERN int maxinstack  ;
EXTERN instaterecord curinput  ;
EXTERN int inopen  ;
EXTERN int openparens  ;
EXTERN alphafile * inputfile  ;
EXTERN int line  ;
EXTERN int * linestack  ;
EXTERN strnumber * sourcefilenamestack  ;
EXTERN strnumber * fullsourcefilenamestack  ;
EXTERN unsigned char scannerstatus  ;
EXTERN halfword warningindex  ;
EXTERN halfword defref  ;
EXTERN halfword * paramstack  ;
EXTERN int paramptr  ;
EXTERN int maxparamstack  ;
EXTERN int alignstate  ;
EXTERN int baseptr  ;
EXTERN halfword parloc  ;
EXTERN halfword partoken  ;
EXTERN bool forceeof  ;
EXTERN bool isincsname  ;
EXTERN halfword curmark[5]  ;
EXTERN unsigned char longstate  ;
EXTERN halfword pstack[9]  ;
EXTERN int curval  ;
EXTERN unsigned char curvallevel  ;
EXTERN smallnumber radix  ;
EXTERN glueord curorder  ;
EXTERN alphafile readfile[16]  ;
EXTERN unsigned char readopen[17]  ;
EXTERN halfword condptr  ;
EXTERN unsigned char iflimit  ;
EXTERN smallnumber curif  ;
EXTERN int ifline  ;
EXTERN int skipline  ;
EXTERN strnumber curname  ;
EXTERN strnumber curarea  ;
EXTERN strnumber curext  ;
EXTERN poolpointer areadelimiter  ;
EXTERN poolpointer extdelimiter  ;
EXTERN int formatdefaultlength  ;
EXTERN cstring TEXformatdefault  ;
EXTERN bool nameinprogress  ;
EXTERN strnumber jobname  ;
EXTERN bool logopened  ;
EXTERN bytefile dvifile  ;
EXTERN strnumber outputfilename  ;
EXTERN strnumber texmflogname  ;
EXTERN bytefile tfmfile  ;
EXTERN fmemoryword * fontinfo  ;
EXTERN fontindex fmemptr  ;
EXTERN internalfontnumber fontptr  ;
EXTERN fourquarters * fontcheck  ;
EXTERN scaled * fontsize  ;
EXTERN scaled * fontdsize  ;
EXTERN fontindex * fontparams  ;
EXTERN strnumber * fontname  ;
EXTERN strnumber * fontarea  ;
EXTERN eightbits * fontbc  ;
EXTERN eightbits * fontec  ;
EXTERN halfword * fontglue  ;
EXTERN bool * fontused  ;
EXTERN int * hyphenchar  ;
EXTERN int * skewchar  ;
EXTERN fontindex * bcharlabel  ;
EXTERN ninebits * fontbchar  ;
EXTERN ninebits * fontfalsebchar  ;
EXTERN int * charbase  ;
EXTERN int * widthbase  ;
EXTERN int * heightbase  ;
EXTERN int * depthbase  ;
EXTERN int * italicbase  ;
EXTERN int * ligkernbase  ;
EXTERN int * kernbase  ;
EXTERN int * extenbase  ;
EXTERN int * parambase  ;
EXTERN fourquarters nullcharacter  ;
EXTERN int totalpages  ;
EXTERN scaled maxv  ;
EXTERN scaled maxh  ;
EXTERN int maxpush  ;
EXTERN int lastbop  ;
EXTERN int deadcycles  ;
EXTERN bool doingleaders  ;
EXTERN quarterword c  ;
EXTERN internalfontnumber f  ;
EXTERN scaled ruleht, ruledp, rulewd  ;
EXTERN halfword g  ;
EXTERN int lq, lr  ;
EXTERN eightbits * dvibuf  ;
EXTERN int halfbuf  ;
EXTERN int dvilimit  ;
EXTERN int dviptr  ;
EXTERN int dvioffset  ;
EXTERN int dvigone  ;
EXTERN halfword downptr, rightptr  ;
EXTERN scaled dvih, dviv  ;
EXTERN scaled curh, curv  ;
EXTERN internalfontnumber dvif  ;
EXTERN int curs  ;
EXTERN int pdfmemsize  ;
EXTERN int * pdfmem  ;
EXTERN int pdfmemptr  ;
EXTERN bytefile pdffile  ;
EXTERN eightbits * pdfbuf  ;
EXTERN int pdfbufsize  ;
EXTERN int pdfptr  ;
EXTERN eightbits * pdfopbuf  ;
EXTERN eightbits * pdfosbuf  ;
EXTERN int pdfosbufsize  ;
EXTERN int * pdfosobjnum  ;
EXTERN int * pdfosobjoff  ;
EXTERN halfword pdfosobjidx  ;
EXTERN int pdfoscntr  ;
EXTERN int pdfopptr  ;
EXTERN int pdfosptr  ;
EXTERN bool pdfosmode  ;
EXTERN bool pdfosenable  ;
EXTERN int pdfoscurobjnum  ;
EXTERN long pdfgone  ;
EXTERN long pdfsaveoffset  ;
EXTERN int zipwritestate  ;
EXTERN int fixedpdfmajorversion  ;
EXTERN int fixedpdfminorversion  ;
EXTERN int fixedpdfobjcompresslevel  ;
EXTERN bool pdfversionwritten  ;
EXTERN int fixedpdfoutput  ;
EXTERN bool fixedpdfoutputset  ;
EXTERN int fixedgamma  ;
EXTERN int fixedimagegamma  ;
EXTERN bool fixedimagehicolor  ;
EXTERN int fixedimageapplygamma  ;
EXTERN int epochseconds  ;
EXTERN int microseconds  ;
EXTERN int fixedpdfdraftmode  ;
EXTERN bool fixedpdfdraftmodeset  ;
EXTERN int pdfpagegroupval  ;
EXTERN scaled onebp  ;
EXTERN scaled onehundredbp  ;
EXTERN scaled onehundredinch  ;
EXTERN int tenpow[10]  ;
EXTERN int scaledout  ;
EXTERN bool initpdfoutput  ;
EXTERN internalfontnumber pdff  ;
EXTERN scaled pdfh  ;
EXTERN scaled pdfv  ;
EXTERN scaled pdftjstarth  ;
EXTERN scaled curdeltah  ;
EXTERN scaled pdfdeltah  ;
EXTERN scaled pdforiginh  ;
EXTERN scaled pdforiginv  ;
EXTERN bool pdfdoingstring  ;
EXTERN bool pdfdoingtext  ;
EXTERN scaled minbpval  ;
EXTERN scaled minfontval  ;
EXTERN int fixedpkresolution  ;
EXTERN int fixeddecimaldigits  ;
EXTERN int fixedgentounicode  ;
EXTERN int fixedinclusioncopyfont  ;
EXTERN int pkscalefactor  ;
EXTERN int pdfoutputoption  ;
EXTERN int pdfoutputvalue  ;
EXTERN int pdfdraftmodeoption  ;
EXTERN int pdfdraftmodevalue  ;
EXTERN int pdfcurTma  ;
EXTERN internalfontnumber pdflastf  ;
EXTERN internalfontnumber pdflastfs  ;
EXTERN internalfontnumber pdfdummyfont  ;
EXTERN int objtabsize  ;
EXTERN objentry * objtab  ;
EXTERN int headtab[10]  ;
EXTERN int pagestail  ;
EXTERN int objptr  ;
EXTERN int sysobjptr  ;
EXTERN int pdflastpages  ;
EXTERN int pdflastpage  ;
EXTERN int pdflaststream  ;
EXTERN long pdfstreamlength  ;
EXTERN long pdfstreamlengthoffset  ;
EXTERN bool pdfseekwritelength  ;
EXTERN eightbits pdflastbyte  ;
EXTERN int pdfappendlistarg  ;
EXTERN int ff  ;
EXTERN int pdfboxspecmedia  ;
EXTERN int pdfboxspeccrop  ;
EXTERN int pdfboxspecbleed  ;
EXTERN int pdfboxspectrim  ;
EXTERN int pdfboxspecart  ;
EXTERN int pdfimageprocset  ;
EXTERN bool pdftextprocset  ;
EXTERN eightbits * pdffonttype  ;
EXTERN strnumber * pdffontattr  ;
EXTERN bool * pdffontnobuiltintounicode  ;
EXTERN charusedarray * pdfcharused  ;
EXTERN scaled * pdffontsize  ;
EXTERN int * pdffontnum  ;
EXTERN fmentryptr * pdffontmap  ;
EXTERN halfword pdffontlist  ;
EXTERN strnumber pdfresnameprefix  ;
EXTERN strnumber lasttokensstring  ;
EXTERN int * vfpacketbase  ;
EXTERN internalfontnumber * vfdefaultfont  ;
EXTERN internalfontnumber * vflocalfontnum  ;
EXTERN int vfpacketlength  ;
EXTERN bytefile vffile  ;
EXTERN internalfontnumber vfnf  ;
EXTERN int * vfefnts  ;
EXTERN internalfontnumber * vfifnts  ;
EXTERN memoryword tmpw  ;
EXTERN int vfcurs  ;
EXTERN vfstackrecord vfstack[vfstacksize + 1]  ;
EXTERN vfstackindex vfstackptr  ;
EXTERN int savedpdfcurform  ;
EXTERN strnumber pdftexbanner  ;
EXTERN scaled totalstretch[4], totalshrink[4]  ;
EXTERN int lastbadness  ;
EXTERN halfword adjusttail  ;
EXTERN internalfontnumber * pdffontblink  ;
EXTERN internalfontnumber * pdffontelink  ;
EXTERN int * pdffontstretch  ;
EXTERN int * pdffontshrink  ;
EXTERN int * pdffontstep  ;
EXTERN int * pdffontexpandratio  ;
EXTERN bool * pdffontautoexpand  ;
EXTERN int * pdffontlpbase  ;
EXTERN int * pdffontrpbase  ;
EXTERN int * pdffontefbase  ;
EXTERN int * pdffontknbsbase  ;
EXTERN int * pdffontstbsbase  ;
EXTERN int * pdffontshbsbase  ;
EXTERN int * pdffontknbcbase  ;
EXTERN int * pdffontknacbase  ;
EXTERN int fontexpandratio  ;
EXTERN halfword lastleftmostchar  ;
EXTERN halfword lastrightmostchar  ;
EXTERN halfword hliststack[513]  ;
EXTERN short hliststacklevel  ;
EXTERN halfword preadjusttail  ;
EXTERN int packbeginline  ;
EXTERN twohalves emptyfield  ;
EXTERN fourquarters nulldelimiter  ;
EXTERN halfword curmlist  ;
EXTERN smallnumber curstyle  ;
EXTERN smallnumber cursize  ;
EXTERN scaled curmu  ;
EXTERN bool mlistpenalties  ;
EXTERN internalfontnumber curf  ;
EXTERN quarterword curc  ;
EXTERN fourquarters curi  ;
EXTERN int magicoffset  ;
EXTERN halfword curalign  ;
EXTERN halfword curspan  ;
EXTERN halfword curloop  ;
EXTERN halfword alignptr  ;
EXTERN halfword curhead, curtail  ;
EXTERN halfword curprehead, curpretail  ;
EXTERN halfword justbox  ;
EXTERN halfword passive  ;
EXTERN halfword printednode  ;
EXTERN halfword passnumber  ;
EXTERN scaled activewidth[9]  ;
EXTERN scaled curactivewidth[9]  ;
EXTERN scaled background[9]  ;
EXTERN scaled breakwidth[9]  ;
EXTERN bool autobreaking  ;
EXTERN halfword prevp  ;
EXTERN halfword firstp  ;
EXTERN halfword prevcharp  ;
EXTERN halfword nextcharp  ;
EXTERN bool tryprevbreak  ;
EXTERN halfword prevlegal  ;
EXTERN halfword prevprevlegal  ;
EXTERN bool prevautobreaking  ;
EXTERN scaled prevactivewidth[9]  ;
EXTERN halfword rejectedcurp  ;
EXTERN bool beforerejectedcurp  ;
EXTERN int maxstretchratio  ;
EXTERN int maxshrinkratio  ;
EXTERN int curfontstep  ;
EXTERN bool noshrinkerroryet  ;
EXTERN halfword curp  ;
EXTERN bool secondpass  ;
EXTERN bool finalpass  ;
EXTERN int threshold  ;
EXTERN int minimaldemerits[4]  ;
EXTERN int minimumdemerits  ;
EXTERN halfword bestplace[4]  ;
EXTERN halfword bestplline[4]  ;
EXTERN scaled discwidth[9]  ;
EXTERN halfword easyline  ;
EXTERN halfword lastspecialline  ;
EXTERN scaled firstwidth  ;
EXTERN scaled secondwidth  ;
EXTERN scaled firstindent  ;
EXTERN scaled secondindent  ;
EXTERN halfword bestbet  ;
EXTERN int fewestdemerits  ;
EXTERN halfword bestline  ;
EXTERN int actuallooseness  ;
EXTERN int linediff  ;
EXTERN short hc[66]  ;
EXTERN smallnumber hn  ;
EXTERN halfword ha, hb  ;
EXTERN internalfontnumber hf  ;
EXTERN short hu[64]  ;
EXTERN int hyfchar  ;
EXTERN unsigned char curlang, initcurlang  ;
EXTERN int lhyf, rhyf, initlhyf, initrhyf  ;
EXTERN halfword hyfbchar  ;
EXTERN unsigned char hyf[65]  ;
EXTERN halfword initlist  ;
EXTERN bool initlig  ;
EXTERN bool initlft  ;
EXTERN smallnumber hyphenpassed  ;
EXTERN halfword curl, curr  ;
EXTERN halfword curq  ;
EXTERN halfword ligstack  ;
EXTERN bool ligaturepresent  ;
EXTERN bool lfthit, rthit  ;
EXTERN triepointer * trietrl  ;
EXTERN triepointer * trietro  ;
EXTERN quarterword * trietrc  ;
EXTERN smallnumber hyfdistance[trieopsize + 1]  ;
EXTERN smallnumber hyfnum[trieopsize + 1]  ;
EXTERN trieopcode hyfnext[trieopsize + 1]  ;
EXTERN int opstart[256]  ;
EXTERN strnumber * hyphword  ;
EXTERN halfword * hyphlist  ;
EXTERN hyphpointer * hyphlink  ;
EXTERN int hyphcount  ;
EXTERN int hyphnext  ;
#ifdef INITEX
EXTERN int 
#define trieophash (zzzab - (int)(negtrieopsize))
  zzzab[trieopsize - negtrieopsize + 1]  ;
EXTERN trieopcode trieused[256]  ;
EXTERN unsigned char trieoplang[trieopsize + 1]  ;
EXTERN trieopcode trieopval[trieopsize + 1]  ;
EXTERN int trieopptr  ;
#endif /* INITEX */
EXTERN trieopcode maxopused  ;
EXTERN bool smallop  ;
#ifdef INITEX
EXTERN unsigned char * triec  ;
EXTERN trieopcode * trieo  ;
EXTERN triepointer * triel  ;
EXTERN triepointer * trier  ;
EXTERN triepointer trieptr  ;
EXTERN triepointer * triehash  ;
#endif /* INITEX */
#ifdef INITEX
EXTERN bool * trietaken  ;
EXTERN triepointer triemin[256]  ;
EXTERN triepointer triemax  ;
EXTERN bool trienotready  ;
#endif /* INITEX */
EXTERN scaled bestheightplusdepth  ;
EXTERN halfword pagetail  ;
EXTERN unsigned char pagecontents  ;
EXTERN scaled pagemaxdepth  ;
EXTERN halfword bestpagebreak  ;
EXTERN int leastpagecost  ;
EXTERN scaled bestsize  ;
EXTERN scaled pagesofar[8]  ;
EXTERN halfword lastglue  ;
EXTERN int lastpenalty  ;
EXTERN scaled lastkern  ;
EXTERN int lastnodetype  ;
EXTERN int insertpenalties  ;
EXTERN bool outputactive  ;
EXTERN internalfontnumber mainf  ;
EXTERN fourquarters maini  ;
EXTERN fourquarters mainj  ;
EXTERN fontindex maink  ;
EXTERN halfword mainp  ;
EXTERN int mains  ;
EXTERN halfword bchar  ;
EXTERN halfword falsebchar  ;
EXTERN bool cancelboundary  ;
EXTERN bool insdisc  ;
EXTERN halfword curbox  ;
EXTERN halfword aftertoken  ;
EXTERN bool longhelpseen  ;
EXTERN strnumber formatident  ;
EXTERN wordfile fmtfile  ;
EXTERN alphafile writefile[16]  ;
EXTERN bool writeopen[18]  ;
EXTERN halfword writeloc  ;
EXTERN int pdflastobj  ;
EXTERN int pdflastxform  ;
EXTERN int pdflastximage  ;
EXTERN int pdflastximagepages  ;
EXTERN int pdflastximagecolordepth  ;
EXTERN halfword altrule  ;
EXTERN bool warnpdfpagebox  ;
EXTERN int pdflastannot  ;
EXTERN int pdflastlink  ;
EXTERN int pdflastxpos  ;
EXTERN int pdflastypos  ;
EXTERN int pdfsnapxrefpos  ;
EXTERN int pdfsnapyrefpos  ;
EXTERN int countdosnapy  ;
EXTERN int pdfretval  ;
EXTERN scaled curpagewidth  ;
EXTERN scaled curpageheight  ;
EXTERN scaled curhoffset  ;
EXTERN scaled curvoffset  ;
EXTERN halfword pdfobjlist  ;
EXTERN halfword pdfxformlist  ;
EXTERN halfword pdfximagelist  ;
EXTERN halfword lastthread  ;
EXTERN scaled pdfthreadht, pdfthreaddp, pdfthreadwd  ;
EXTERN halfword pdflastthreadid  ;
EXTERN bool pdflastthreadnamedid  ;
EXTERN int pdfthreadlevel  ;
EXTERN halfword pdfannotlist  ;
EXTERN halfword pdflinklist  ;
EXTERN halfword pdfdestlist  ;
EXTERN halfword pdfbeadlist  ;
EXTERN int pdfobjcount  ;
EXTERN int pdfxformcount  ;
EXTERN int pdfximagecount  ;
EXTERN int pdfcurform  ;
EXTERN int pdffirstoutline, pdflastoutline, pdfparentoutline  ;
EXTERN scaled pdfxformwidth, pdfxformheight, pdfxformdepth  ;
EXTERN halfword pdfinfotoks  ;
EXTERN halfword pdfcatalogtoks  ;
EXTERN int pdfcatalogopenaction  ;
EXTERN halfword pdfnamestoks  ;
EXTERN int pdfdestnamesptr  ;
EXTERN int destnamessize  ;
EXTERN destnameentry * destnames  ;
EXTERN int pkdpi  ;
EXTERN int imageorigx, imageorigy  ;
EXTERN halfword pdftrailertoks  ;
EXTERN halfword pdftraileridtoks  ;
EXTERN bool genfakedinterwordspace  ;
EXTERN bool genrunninglink  ;
EXTERN pdflinkstackrecord pdflinkstack[pdfmaxlinklevel + 1]  ;
EXTERN smallnumber pdflinkstackptr  ;
EXTERN bool isshippingpage  ;
EXTERN unsigned char eTeXmode  ;
EXTERN bool etexp  ;
EXTERN bool * eofseen  ;
EXTERN halfword LRptr  ;
EXTERN int LRproblems  ;
EXTERN smallnumber curdir  ;
EXTERN halfword pseudofiles  ;
EXTERN savepointer * grpstack  ;
EXTERN halfword * ifstack  ;
EXTERN halfword maxregnum  ;
EXTERN strnumber maxreghelpline  ;
EXTERN halfword saroot[7]  ;
EXTERN halfword curptr  ;
EXTERN memoryword sanull  ;
EXTERN halfword sachain  ;
EXTERN quarterword salevel  ;
EXTERN halfword lastlinefill  ;
EXTERN bool dolastlinefit  ;
EXTERN smallnumber activenodesize  ;
EXTERN scaled fillwidth[3]  ;
EXTERN scaled bestplshort[4]  ;
EXTERN scaled bestplglue[4]  ;
EXTERN triepointer hyphstart  ;
EXTERN triepointer hyphindex  ;
EXTERN halfword discptr[4]  ;
EXTERN poolpointer editnamestart  ;
EXTERN int editnamelength, editline  ;
EXTERN cinttype ipcon  ;
EXTERN bool stopatspace  ;
EXTERN strnumber savestrptr  ;
EXTERN poolpointer savepoolptr  ;
EXTERN cinttype shellenabledp  ;
EXTERN cinttype restrictedshell  ;
EXTERN char * outputcomment  ;
EXTERN unsigned char k, l  ;
EXTERN bool debugformatfile  ;
EXTERN int expanddepthcount  ;
EXTERN bool mltexp  ;
EXTERN bool mltexenabledp  ;
EXTERN int accentc, basec, replacec  ;
EXTERN fourquarters iac, ibc  ;
EXTERN double baseslant, accentslant  ;
EXTERN scaled basexheight  ;
EXTERN scaled basewidth, baseheight  ;
EXTERN scaled accentwidth, accentheight  ;
EXTERN scaled delta  ;
EXTERN bool enctexp  ;
EXTERN bool enctexenabledp  ;
EXTERN int synctexoption  ;
EXTERN int synctexoffset  ;

strnumber getjobname(strnumber);
strnumber makefullnamestring(void);
bool isnewsource (strnumber srcfilename, int lineno);
poolpointer makesrcspecial (strnumber srcfilename, int lineno);
void remembersourceinfo (strnumber srcfilename, int lineno);
void calledit (unsigned char *filename, poolpointer fnstart, int fnlength, int linenumber);

char *gettexstring(int str);

#include "my-pdftexcoerce.h"
#endif /* MYTEXD_H */
