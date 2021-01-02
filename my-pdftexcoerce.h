void initialize(void);
#define initialize_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void println(void);
#define println_regmem
void zprintchar(unsigned char s);
#define printchar(s) zprintchar((unsigned char) (s))
#define printchar_regmem register memoryword *eqtb=zeqtb;
void zprint(int s);
#define print(s) zprint((int) (s))
#define print_regmem register memoryword *eqtb=zeqtb;
void zslowprint(int s);
#define slowprint(s) zslowprint((int) (s))
#define slowprint_regmem
void zprintnl(strnumber s);
#define printnl(s) zprintnl((strnumber) (s))
#define printnl_regmem
void zprintesc(strnumber s);
#define printesc(s) zprintesc((strnumber) (s))
#define printesc_regmem register memoryword *eqtb=zeqtb;
void zprintthedigs(eightbits k);
#define printthedigs(k) zprintthedigs((eightbits) (k))
#define printthedigs_regmem
void zprintint(long n);
#define printint(n) zprintint((long) (n))
#define printint_regmem
void zprintcs(int p);
#define printcs(p) zprintcs((int) (p))
#define printcs_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zsprintcs(halfword p);
#define sprintcs(p) zsprintcs((halfword) (p))
#define sprintcs_regmem
void zprintfilename(int n, int a, int e);
#define printfilename(n, a, e) zprintfilename((int) (n), (int) (a), (int) (e))
#define printfilename_regmem
void zprintsize(int s);
#define printsize(s) zprintsize((int) (s))
#define printsize_regmem
void zprintwritewhatsit(strnumber s, halfword p);
#define printwritewhatsit(s, p) zprintwritewhatsit((strnumber) (s), (halfword) (p))
#define printwritewhatsit_regmem register memoryword *mem=zmem;
void zprintsanum(halfword q);
#define printsanum(q) zprintsanum((halfword) (q))
#define printsanum_regmem register memoryword *mem=zmem;
void zprintcsnames(int hstart, int hfinish);
#define printcsnames(hstart, hfinish) zprintcsnames((int) (hstart), (int) (hfinish))
#define printcsnames_regmem
void printfileline(void);
#define printfileline_regmem
unsigned char zzreadbuffer(int *i);
#define readbuffer(i) zzreadbuffer((int *) &(i))
#define readbuffer_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zzprintbuffer(int *i);
#define printbuffer(i) zzprintbuffer((int *) &(i))
#define printbuffer_regmem register memoryword *eqtb=zeqtb;
WEB2C_NORETURN void jumpout(void);
#define jumpout_regmem
void error(void);
#define error_regmem
WEB2C_NORETURN void zfatalerror(strnumber s);
#define fatalerror(s) zfatalerror((strnumber) (s))
#define fatalerror_regmem
WEB2C_NORETURN void zoverflow(strnumber s, int n);
#define overflow(s, n) zoverflow((strnumber) (s), (int) (n))
#define overflow_regmem
WEB2C_NORETURN void zconfusion(strnumber s);
#define confusion(s) zconfusion((strnumber) (s))
#define confusion_regmem
bool initterminal(void);
#define initterminal_regmem
strnumber makestring(void);
#define makestring_regmem
bool zstreqbuf(strnumber s, int k);
#define streqbuf(s, k) zstreqbuf((strnumber) (s), (int) (k))
#define streqbuf_regmem
bool zstreqstr(strnumber s, strnumber t);
#define streqstr(s, t) zstreqstr((strnumber) (s), (strnumber) (t))
#define streqstr_regmem
strnumber zsearchstring(strnumber search);
#define searchstring(search) zsearchstring((strnumber) (search))
#define searchstring_regmem
strnumber slowmakestring(void);
#define slowmakestring_regmem
bool getstringsstarted(void);
#define getstringsstarted_regmem
void zprinttwo(int n);
#define printtwo(n) zprinttwo((int) (n))
#define printtwo_regmem
void zprinthex(int n);
#define printhex(n) zprinthex((int) (n))
#define printhex_regmem
void zprintromanint(int n);
#define printromanint(n) zprintromanint((int) (n))
#define printromanint_regmem
void printcurrentstring(void);
#define printcurrentstring_regmem
void terminput(void);
#define terminput_regmem
void zinterror(int n);
#define interror(n) zinterror((int) (n))
#define interror_regmem
void normalizeselector(void);
#define normalizeselector_regmem
void pauseforinstructions(void);
#define pauseforinstructions_regmem
int zhalf(int x);
#define half(x) zhalf((int) (x))
#define half_regmem
scaled zrounddecimals(smallnumber k);
#define rounddecimals(k) zrounddecimals((smallnumber) (k))
#define rounddecimals_regmem
void zprintscaled(scaled s);
#define printscaled(s) zprintscaled((scaled) (s))
#define printscaled_regmem
scaled zmultandadd(int n, scaled x, scaled y, scaled maxanswer);
#define multandadd(n, x, y, maxanswer) zmultandadd((int) (n), (scaled) (x), (scaled) (y), (scaled) (maxanswer))
#define multandadd_regmem
scaled zxovern(scaled x, int n);
#define xovern(x, n) zxovern((scaled) (x), (int) (n))
#define xovern_regmem
scaled zxnoverd(scaled x, int n, int d);
#define xnoverd(x, n, d) zxnoverd((scaled) (x), (int) (n), (int) (d))
#define xnoverd_regmem
halfword zbadness(scaled t, scaled s);
#define badness(t, s) zbadness((scaled) (t), (scaled) (s))
#define badness_regmem
int zmakefrac(int p, int q);
#define makefrac(p, q) zmakefrac((int) (p), (int) (q))
#define makefrac_regmem
int ztakefrac(int q, int f);
#define takefrac(q, f) ztakefrac((int) (q), (int) (f))
#define takefrac_regmem
int zmlog(int x);
#define mlog(x) zmlog((int) (x))
#define mlog_regmem
int zabvscd(int a, int b, int c, int d);
#define abvscd(a, b, c, d) zabvscd((int) (a), (int) (b), (int) (c), (int) (d))
#define abvscd_regmem
void newrandoms(void);
#define newrandoms_regmem
void zinitrandoms(int seed);
#define initrandoms(seed) zinitrandoms((int) (seed))
#define initrandoms_regmem
int zunifrand(int x);
#define unifrand(x) zunifrand((int) (x))
#define unifrand_regmem
int normrand(void);
#define normrand_regmem
void zprintword(memoryword w);
#define printword(w) zprintword((memoryword) (w))
#define printword_regmem
void zshowtokenlist(int p, int q, int l);
#define showtokenlist(p, q, l) zshowtokenlist((int) (p), (int) (q), (int) (l))
#define showtokenlist_regmem register memoryword *mem=zmem;
void runaway(void);
#define runaway_regmem register memoryword *mem=zmem;
halfword getavail(void);
#define getavail_regmem register memoryword *mem=zmem;
void zflushlist(halfword p);
#define flushlist(p) zflushlist((halfword) (p))
#define flushlist_regmem register memoryword *mem=zmem;
halfword zgetnode(int s);
#define getnode(s) zgetnode((int) (s))
#define getnode_regmem register memoryword *mem=zmem;
void zfreenode(halfword p, halfword s);
#define freenode(p, s) zfreenode((halfword) (p), (halfword) (s))
#define freenode_regmem register memoryword *mem=zmem;
void sortavail(void);
#define sortavail_regmem register memoryword *mem=zmem;
halfword newnullbox(void);
#define newnullbox_regmem register memoryword *mem=zmem;
halfword newrule(void);
#define newrule_regmem register memoryword *mem=zmem;
halfword znewligature(internalfontnumber f, quarterword c, halfword q);
#define newligature(f, c, q) znewligature((internalfontnumber) (f), (quarterword) (c), (halfword) (q))
#define newligature_regmem register memoryword *mem=zmem;
halfword znewligitem(quarterword c);
#define newligitem(c) znewligitem((quarterword) (c))
#define newligitem_regmem register memoryword *mem=zmem;
halfword newdisc(void);
#define newdisc_regmem register memoryword *mem=zmem;
halfword znewmath(scaled w, smallnumber s);
#define newmath(w, s) znewmath((scaled) (w), (smallnumber) (s))
#define newmath_regmem register memoryword *mem=zmem;
halfword znewspec(halfword p);
#define newspec(p) znewspec((halfword) (p))
#define newspec_regmem register memoryword *mem=zmem;
halfword znewparamglue(smallnumber n);
#define newparamglue(n) znewparamglue((smallnumber) (n))
#define newparamglue_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword znewglue(halfword q);
#define newglue(q) znewglue((halfword) (q))
#define newglue_regmem register memoryword *mem=zmem;
halfword znewskipparam(smallnumber n);
#define newskipparam(n) znewskipparam((smallnumber) (n))
#define newskipparam_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword znewkern(scaled w);
#define newkern(w) znewkern((scaled) (w))
#define newkern_regmem register memoryword *mem=zmem;
halfword znewpenalty(int m);
#define newpenalty(m) znewpenalty((int) (m))
#define newpenalty_regmem register memoryword *mem=zmem;
void zcheckmem(bool printlocs);
#define checkmem(printlocs) zcheckmem((bool) (printlocs))
#define checkmem_regmem register memoryword *mem=zmem;
void zsearchmem(halfword p);
#define searchmem(p) zsearchmem((halfword) (p))
#define searchmem_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zpdferror(strnumber t, strnumber p);
#define pdferror(t, p) zpdferror((strnumber) (t), (strnumber) (p))
#define pdferror_regmem
void zpdfwarning(strnumber t, strnumber p, bool prependnl, bool appendnl);
#define pdfwarning(t, p, prependnl, appendnl) zpdfwarning((strnumber) (t), (strnumber) (p), (bool) (prependnl), (bool) (appendnl))
#define pdfwarning_regmem
void zpdfosgetosbuf(int s);
#define pdfosgetosbuf(s) zpdfosgetosbuf((int) (s))
#define pdfosgetosbuf_regmem
void removelastspace(void);
#define removelastspace_regmem
void zpdfprintoctal(int n);
#define pdfprintoctal(n) zpdfprintoctal((int) (n))
#define pdfprintoctal_regmem
void zpdfprintchar(internalfontnumber f, int c);
#define pdfprintchar(f, c) zpdfprintchar((internalfontnumber) (f), (int) (c))
#define pdfprintchar_regmem
void zpdfprint(strnumber s);
#define pdfprint(s) zpdfprint((strnumber) (s))
#define pdfprint_regmem
bool zstrinstr(strnumber s, strnumber r, int i);
#define strinstr(s, r, i) zstrinstr((strnumber) (s), (strnumber) (r), (int) (i))
#define strinstr_regmem
void zpdfprintint(long n);
#define pdfprintint(n) zpdfprintint((long) (n))
#define pdfprintint_regmem
void zpdfprinttwo(int n);
#define pdfprinttwo(n) zpdfprinttwo((int) (n))
#define pdfprinttwo_regmem
strnumber ztokenstostring(halfword p);
#define tokenstostring(p) ztokenstostring((halfword) (p))
#define tokenstostring_regmem register memoryword *mem=zmem;
scaled zdividescaled(scaled s, scaled m, int dd);
#define dividescaled(s, m, dd) zdividescaled((scaled) (s), (scaled) (m), (int) (dd))
#define dividescaled_regmem
scaled zroundxnoverd(scaled x, int n, int d);
#define roundxnoverd(x, n, d) zroundxnoverd((scaled) (x), (int) (n), (int) (d))
#define roundxnoverd_regmem
void zappenddestname(strnumber s, int n);
#define appenddestname(s, n) zappenddestname((strnumber) (s), (int) (n))
#define appenddestname_regmem
void zpdfcreateobj(int t, int i);
#define pdfcreateobj(t, i) zpdfcreateobj((int) (t), (int) (i))
#define pdfcreateobj_regmem
int pdfnewobjnum(void);
#define pdfnewobjnum_regmem
void zpdfosswitch(bool pdfos);
#define pdfosswitch(pdfos) zpdfosswitch((bool) (pdfos))
#define pdfosswitch_regmem
void zpdfosprepareobj(int i, int pdfoslevel);
#define pdfosprepareobj(i, pdfoslevel) zpdfosprepareobj((int) (i), (int) (pdfoslevel))
#define pdfosprepareobj_regmem
void zpdfbeginobj(int i, int pdfoslevel);
#define pdfbeginobj(i, pdfoslevel) zpdfbeginobj((int) (i), (int) (pdfoslevel))
#define pdfbeginobj_regmem register memoryword *eqtb=zeqtb;
void zpdfnewobj(int t, int i, int pdfos);
#define pdfnewobj(t, i, pdfos) zpdfnewobj((int) (t), (int) (i), (int) (pdfos))
#define pdfnewobj_regmem
void pdfendobj(void);
#define pdfendobj_regmem
void zpdfbegindict(int i, int pdfoslevel);
#define pdfbegindict(i, pdfoslevel) zpdfbegindict((int) (i), (int) (pdfoslevel))
#define pdfbegindict_regmem register memoryword *eqtb=zeqtb;
void zpdfnewdict(int t, int i, int pdfos);
#define pdfnewdict(t, i, pdfos) zpdfnewdict((int) (t), (int) (i), (int) (pdfos))
#define pdfnewdict_regmem
void pdfenddict(void);
#define pdfenddict_regmem
void pdfoswriteobjstream(void);
#define pdfoswriteobjstream_regmem
halfword zappendptr(halfword p, int i);
#define appendptr(p, i) zappendptr((halfword) (p), (int) (i))
#define appendptr_regmem register memoryword *mem=zmem;
halfword zpdflookuplist(halfword p, int i);
#define pdflookuplist(p, i) zpdflookuplist((halfword) (p), (int) (i))
#define pdflookuplist_regmem register memoryword *mem=zmem;
halfword zprevrightmost(halfword s, halfword e);
#define prevrightmost(s, e) zprevrightmost((halfword) (s), (halfword) (e))
#define prevrightmost_regmem register memoryword *mem=zmem;
void zpdfcheckobj(int t, int n);
#define pdfcheckobj(t, n) zpdfcheckobj((int) (t), (int) (n))
#define pdfcheckobj_regmem
int zfindobj(int t, int i, bool byname);
#define findobj(t, i, byname) zfindobj((int) (t), (int) (i), (bool) (byname))
#define findobj_regmem
void zflushstr(strnumber s);
#define flushstr(s) zflushstr((strnumber) (s))
#define flushstr_regmem
int zgetobj(int t, int i, bool byname);
#define getobj(t, i, byname) zgetobj((int) (t), (int) (i), (bool) (byname))
#define getobj_regmem
int getmicrointerval(void);
#define getmicrointerval_regmem
void zprintfontidentifier(internalfontnumber f);
#define printfontidentifier(f) zprintfontidentifier((internalfontnumber) (f))
#define printfontidentifier_regmem register memoryword *eqtb=zeqtb;
void zshortdisplay(int p);
#define shortdisplay(p) zshortdisplay((int) (p))
#define shortdisplay_regmem register memoryword *mem=zmem;
void zprintfontandchar(int p);
#define printfontandchar(p) zprintfontandchar((int) (p))
#define printfontandchar_regmem register memoryword *mem=zmem;
void zprintmark(int p);
#define printmark(p) zprintmark((int) (p))
#define printmark_regmem register memoryword *mem=zmem;
void zprintruledimen(scaled d);
#define printruledimen(d) zprintruledimen((scaled) (d))
#define printruledimen_regmem
void zprintglue(scaled d, int order, strnumber s);
#define printglue(d, order, s) zprintglue((scaled) (d), (int) (order), (strnumber) (s))
#define printglue_regmem
void zprintspec(int p, strnumber s);
#define printspec(p, s) zprintspec((int) (p), (strnumber) (s))
#define printspec_regmem register memoryword *mem=zmem;
void zprintfamandchar(halfword p);
#define printfamandchar(p) zprintfamandchar((halfword) (p))
#define printfamandchar_regmem register memoryword *mem=zmem;
void zprintdelimiter(halfword p);
#define printdelimiter(p) zprintdelimiter((halfword) (p))
#define printdelimiter_regmem register memoryword *mem=zmem;
void zprintsubsidiarydata(halfword p, unsigned char c);
#define printsubsidiarydata(p, c) zprintsubsidiarydata((halfword) (p), (unsigned char) (c))
#define printsubsidiarydata_regmem register memoryword *mem=zmem;
void zprintstyle(int c);
#define printstyle(c) zprintstyle((int) (c))
#define printstyle_regmem
void zprintskipparam(int n);
#define printskipparam(n) zprintskipparam((int) (n))
#define printskipparam_regmem
void zshownodelist(int p);
#define shownodelist(p) zshownodelist((int) (p))
#define shownodelist_regmem register memoryword *mem=zmem;
void zshowbox(halfword p);
#define showbox(p) zshowbox((halfword) (p))
#define showbox_regmem register memoryword *eqtb=zeqtb;
void zdeletetokenref(halfword p);
#define deletetokenref(p) zdeletetokenref((halfword) (p))
#define deletetokenref_regmem register memoryword *mem=zmem;
void zdeleteglueref(halfword p);
#define deleteglueref(p) zdeleteglueref((halfword) (p))
#define deleteglueref_regmem register memoryword *mem=zmem;
void zflushnodelist(halfword p);
#define flushnodelist(p) zflushnodelist((halfword) (p))
#define flushnodelist_regmem register memoryword *mem=zmem;
halfword zcopynodelist(halfword p);
#define copynodelist(p) zcopynodelist((halfword) (p))
#define copynodelist_regmem register memoryword *mem=zmem;
void zprintmode(int m);
#define printmode(m) zprintmode((int) (m))
#define printmode_regmem
void zprintinmode(int m);
#define printinmode(m) zprintinmode((int) (m))
#define printinmode_regmem
void pushnest(void);
#define pushnest_regmem
void popnest(void);
#define popnest_regmem register memoryword *mem=zmem;
void showactivities(void);
#define showactivities_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zprintparam(int n);
#define printparam(n) zprintparam((int) (n))
#define printparam_regmem
void begindiagnostic(void);
#define begindiagnostic_regmem register memoryword *eqtb=zeqtb;
void zenddiagnostic(bool blankline);
#define enddiagnostic(blankline) zenddiagnostic((bool) (blankline))
#define enddiagnostic_regmem
void zprintlengthparam(int n);
#define printlengthparam(n) zprintlengthparam((int) (n))
#define printlengthparam_regmem
void zprintcmdchr(quarterword cmd, halfword chrcode);
#define printcmdchr(cmd, chrcode) zprintcmdchr((quarterword) (cmd), (halfword) (chrcode))
#define printcmdchr_regmem register memoryword *mem=zmem;
void zshoweqtb(halfword n);
#define showeqtb(n) zshoweqtb((halfword) (n))
#define showeqtb_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword zidlookup(int j, int l);
#define idlookup(j, l) zidlookup((int) (j), (int) (l))
#define idlookup_regmem
halfword zprimlookup(strnumber s);
#define primlookup(s) zprimlookup((strnumber) (s))
#define primlookup_regmem
void zprimitive(strnumber s, quarterword c, halfword o);
#define primitive(s, c, o) zprimitive((strnumber) (s), (quarterword) (c), (halfword) (o))
#define primitive_regmem register memoryword *eqtb=zeqtb;
void zrestoretrace(halfword p, strnumber s);
#define restoretrace(p, s) zrestoretrace((halfword) (p), (strnumber) (s))
#define restoretrace_regmem
void zprintgroup(bool e);
#define printgroup(e) zprintgroup((bool) (e))
#define printgroup_regmem
void zgrouptrace(bool e);
#define grouptrace(e) zgrouptrace((bool) (e))
#define grouptrace_regmem
bool pseudoinput(void);
#define pseudoinput_regmem register memoryword *mem=zmem;
void pseudoclose(void);
#define pseudoclose_regmem register memoryword *mem=zmem;
void groupwarning(void);
#define groupwarning_regmem register memoryword *eqtb=zeqtb;
void ifwarning(void);
#define ifwarning_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void filewarning(void);
#define filewarning_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zdeletesaref(halfword q);
#define deletesaref(q) zdeletesaref((halfword) (q))
#define deletesaref_regmem register memoryword *mem=zmem;
void zshowsa(halfword p, strnumber s);
#define showsa(p, s) zshowsa((halfword) (p), (strnumber) (s))
#define showsa_regmem register memoryword *mem=zmem;
void zsasave(halfword p);
#define sasave(p) zsasave((halfword) (p))
#define sasave_regmem register memoryword *mem=zmem;
void zsadestroy(halfword p);
#define sadestroy(p) zsadestroy((halfword) (p))
#define sadestroy_regmem register memoryword *mem=zmem;
void zsadef(halfword p, halfword e);
#define sadef(p, e) zsadef((halfword) (p), (halfword) (e))
#define sadef_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zsawdef(halfword p, int w);
#define sawdef(p, w) zsawdef((halfword) (p), (int) (w))
#define sawdef_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zgsadef(halfword p, halfword e);
#define gsadef(p, e) zgsadef((halfword) (p), (halfword) (e))
#define gsadef_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zgsawdef(halfword p, int w);
#define gsawdef(p, w) zgsawdef((halfword) (p), (int) (w))
#define gsawdef_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void sarestore(void);
#define sarestore_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void znewsavelevel(groupcode c);
#define newsavelevel(c) znewsavelevel((groupcode) (c))
#define newsavelevel_regmem register memoryword *eqtb=zeqtb;
void zeqdestroy(memoryword w);
#define eqdestroy(w) zeqdestroy((memoryword) (w))
#define eqdestroy_regmem register memoryword *mem=zmem;
void zeqsave(halfword p, quarterword l);
#define eqsave(p, l) zeqsave((halfword) (p), (quarterword) (l))
#define eqsave_regmem register memoryword *eqtb=zeqtb;
void zeqdefine(halfword p, quarterword t, halfword e);
#define eqdefine(p, t, e) zeqdefine((halfword) (p), (quarterword) (t), (halfword) (e))
#define eqdefine_regmem register memoryword *eqtb=zeqtb;
void zeqworddefine(halfword p, int w);
#define eqworddefine(p, w) zeqworddefine((halfword) (p), (int) (w))
#define eqworddefine_regmem register memoryword *eqtb=zeqtb;
void zgeqdefine(halfword p, quarterword t, halfword e);
#define geqdefine(p, t, e) zgeqdefine((halfword) (p), (quarterword) (t), (halfword) (e))
#define geqdefine_regmem register memoryword *eqtb=zeqtb;
void zgeqworddefine(halfword p, int w);
#define geqworddefine(p, w) zgeqworddefine((halfword) (p), (int) (w))
#define geqworddefine_regmem register memoryword *eqtb=zeqtb;
void zsaveforafter(halfword t);
#define saveforafter(t) zsaveforafter((halfword) (t))
#define saveforafter_regmem
void unsave(void);
#define unsave_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void preparemag(void);
#define preparemag_regmem register memoryword *eqtb=zeqtb;
void ztokenshow(halfword p);
#define tokenshow(p) ztokenshow((halfword) (p))
#define tokenshow_regmem register memoryword *mem=zmem;
void printmeaning(void);
#define printmeaning_regmem
void showcurcmdchr(void);
#define showcurcmdchr_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void showcontext(void);
#define showcontext_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zbegintokenlist(halfword p, quarterword t);
#define begintokenlist(p, t) zbegintokenlist((halfword) (p), (quarterword) (t))
#define begintokenlist_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void endtokenlist(void);
#define endtokenlist_regmem
void backinput(void);
#define backinput_regmem register memoryword *mem=zmem;
void backerror(void);
#define backerror_regmem
void inserror(void);
#define inserror_regmem
void beginfilereading(void);
#define beginfilereading_regmem
void endfilereading(void);
#define endfilereading_regmem
void clearforerrorprompt(void);
#define clearforerrorprompt_regmem
void mubyteupdate(void);
#define mubyteupdate_regmem register memoryword *mem=zmem;
void zdisposemunode(halfword p);
#define disposemunode(p) zdisposemunode((halfword) (p))
#define disposemunode_regmem register memoryword *mem=zmem;
void zdisposemutableout(halfword cs);
#define disposemutableout(cs) zdisposemutableout((halfword) (cs))
#define disposemutableout_regmem register memoryword *mem=zmem;
void checkoutervalidity(void);
#define checkoutervalidity_regmem register memoryword *mem=zmem;
void getnext(void);
#define getnext_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void firmuptheline(void);
#define firmuptheline_regmem register memoryword *eqtb=zeqtb;
void gettoken(void);
#define gettoken_regmem
void macrocall(void);
#define macrocall_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void insertrelax(void);
#define insertrelax_regmem
void znewindex(quarterword i, halfword q);
#define newindex(i, q) znewindex((quarterword) (i), (halfword) (q))
#define newindex_regmem register memoryword *mem=zmem;
void zfindsaelement(smallnumber t, halfword n, bool w);
#define findsaelement(t, n, w) zfindsaelement((smallnumber) (t), (halfword) (n), (bool) (w))
#define findsaelement_regmem register memoryword *mem=zmem;
void expand(void);
#define expand_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void getxtoken(void);
#define getxtoken_regmem
void xtoken(void);
#define xtoken_regmem
void scanleftbrace(void);
#define scanleftbrace_regmem
void scanoptionalequals(void);
#define scanoptionalequals_regmem
bool zscankeyword(strnumber s);
#define scankeyword(s) zscankeyword((strnumber) (s))
#define scankeyword_regmem register memoryword *mem=zmem;
void muerror(void);
#define muerror_regmem
void scaneightbitint(void);
#define scaneightbitint_regmem
void scancharnum(void);
#define scancharnum_regmem
void scanfourbitint(void);
#define scanfourbitint_regmem
void scanfifteenbitint(void);
#define scanfifteenbitint_regmem
void scantwentysevenbitint(void);
#define scantwentysevenbitint_regmem
void scanregisternum(void);
#define scanregisternum_regmem
void scanfourbitintor18(void);
#define scanfourbitintor18_regmem
void getxorprotected(void);
#define getxorprotected_regmem register memoryword *mem=zmem;
int zeffectivechar(bool errp, internalfontnumber f, quarterword c);
#define effectivechar(errp, f, c) zeffectivechar((bool) (errp), (internalfontnumber) (f), (quarterword) (c))
#define effectivechar_regmem register memoryword *eqtb=zeqtb;
int ztestnoligatures(internalfontnumber f);
#define testnoligatures(f) ztestnoligatures((internalfontnumber) (f))
#define testnoligatures_regmem
int zgettagcode(internalfontnumber f, eightbits c);
#define gettagcode(f, c) zgettagcode((internalfontnumber) (f), (eightbits) (c))
#define gettagcode_regmem
void scanfontident(void);
#define scanfontident_regmem register memoryword *eqtb=zeqtb;
void zfindfontdimen(bool writing);
#define findfontdimen(writing) zfindfontdimen((bool) (writing))
#define findfontdimen_regmem
void zscansomethinginternal(smallnumber level, bool negative);
#define scansomethinginternal(level, negative) zscansomethinginternal((smallnumber) (level), (bool) (negative))
#define scansomethinginternal_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void scanint(void);
#define scanint_regmem register memoryword *eqtb=zeqtb;
void zscandimen(bool mu, bool inf, bool shortcut);
#define scandimen(mu, inf, shortcut) zscandimen((bool) (mu), (bool) (inf), (bool) (shortcut))
#define scandimen_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zscanglue(smallnumber level);
#define scanglue(level) zscanglue((smallnumber) (level))
#define scanglue_regmem register memoryword *mem=zmem;
int zaddorsub(int x, int y, int maxanswer, bool negative);
#define addorsub(x, y, maxanswer, negative) zaddorsub((int) (x), (int) (y), (int) (maxanswer), (bool) (negative))
#define addorsub_regmem
int zquotient(int n, int d);
#define quotient(n, d) zquotient((int) (n), (int) (d))
#define quotient_regmem
int zfract(int x, int n, int d, int maxanswer);
#define fract(x, n, d, maxanswer) zfract((int) (x), (int) (n), (int) (d), (int) (maxanswer))
#define fract_regmem
void scanexpr(void);
#define scanexpr_regmem register memoryword *mem=zmem;
void scannormalglue(void);
#define scannormalglue_regmem
void scanmuglue(void);
#define scanmuglue_regmem
halfword scanrulespec(void);
#define scanrulespec_regmem register memoryword *mem=zmem;
void scangeneraltext(void);
#define scangeneraltext_regmem register memoryword *mem=zmem;
void pseudostart(void);
#define pseudostart_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword zstrtoks(poolpointer b);
#define strtoks(b) zstrtoks((poolpointer) (b))
#define strtoks_regmem register memoryword *mem=zmem;
halfword thetoks(void);
#define thetoks_regmem register memoryword *mem=zmem;
void insthetoks(void);
#define insthetoks_regmem register memoryword *mem=zmem;
void convtoks(void);
#define convtoks_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword zscantoks(bool macrodef, bool xpand);
#define scantoks(macrodef, xpand) zscantoks((bool) (macrodef), (bool) (xpand))
#define scantoks_regmem register memoryword *mem=zmem;
void zreadtoks(int n, halfword r, halfword j);
#define readtoks(n, r, j) zreadtoks((int) (n), (halfword) (r), (halfword) (j))
#define readtoks_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void passtext(void);
#define passtext_regmem register memoryword *eqtb=zeqtb;
void zchangeiflimit(smallnumber l, halfword p);
#define changeiflimit(l, p) zchangeiflimit((smallnumber) (l), (halfword) (p))
#define changeiflimit_regmem register memoryword *mem=zmem;
void conditional(void);
#define conditional_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void beginname(void);
#define beginname_regmem
bool zmorename(unsigned char c);
#define morename(c) zmorename((unsigned char) (c))
#define morename_regmem
void endname(void);
#define endname_regmem
void zpackfilename(strnumber n, strnumber a, strnumber e);
#define packfilename(n, a, e) zpackfilename((strnumber) (n), (strnumber) (a), (strnumber) (e))
#define packfilename_regmem
void zpackbufferedname(smallnumber n, int a, int b);
#define packbufferedname(n, a, b) zpackbufferedname((smallnumber) (n), (int) (a), (int) (b))
#define packbufferedname_regmem
strnumber makenamestring(void);
#define makenamestring_regmem
strnumber zamakenamestring(alphafile f);
#define amakenamestring(f) zamakenamestring((alphafile) (f))
#define amakenamestring_regmem
strnumber zbmakenamestring(bytefile f);
#define bmakenamestring(f) zbmakenamestring((bytefile) (f))
#define bmakenamestring_regmem
strnumber zzwmakenamestring(wordfile * f);
#define wmakenamestring(f) zzwmakenamestring((wordfile *) &(f))
#define wmakenamestring_regmem
void scanfilename(void);
#define scanfilename_regmem
void zpackjobname(strnumber s);
#define packjobname(s) zpackjobname((strnumber) (s))
#define packjobname_regmem
void zpromptfilename(strnumber s, strnumber e);
#define promptfilename(s, e) zpromptfilename((strnumber) (s), (strnumber) (e))
#define promptfilename_regmem
void openlogfile(void);
#define openlogfile_regmem register memoryword *eqtb=zeqtb;
void startinput(void);
#define startinput_regmem register memoryword *eqtb=zeqtb;
fourquarters zeffectivecharinfo(internalfontnumber f, quarterword c);
#define effectivecharinfo(f, c) zeffectivecharinfo((internalfontnumber) (f), (quarterword) (c))
#define effectivecharinfo_regmem register memoryword *eqtb=zeqtb;
internalfontnumber zreadfontinfo(halfword u, strnumber nom, strnumber aire, scaled s);
#define readfontinfo(u, nom, aire, s) zreadfontinfo((halfword) (u), (strnumber) (nom), (strnumber) (aire), (scaled) (s))
#define readfontinfo_regmem register memoryword *eqtb=zeqtb;
scaled zstorescaledf(scaled sq, scaled z);
#define storescaledf(sq, z) zstorescaledf((scaled) (sq), (scaled) (z))
#define storescaledf_regmem
void zcharwarning(internalfontnumber f, eightbits c);
#define charwarning(f, c) zcharwarning((internalfontnumber) (f), (eightbits) (c))
#define charwarning_regmem register memoryword *eqtb=zeqtb;
halfword znewcharacter(internalfontnumber f, eightbits c);
#define newcharacter(f, c) znewcharacter((internalfontnumber) (f), (eightbits) (c))
#define newcharacter_regmem register memoryword *mem=zmem;
void dviswap(void);
#define dviswap_regmem
void zdvifour(int x);
#define dvifour(x) zdvifour((int) (x))
#define dvifour_regmem
void zdvipop(int l);
#define dvipop(l) zdvipop((int) (l))
#define dvipop_regmem
void zdvifontdef(internalfontnumber f);
#define dvifontdef(f) zdvifontdef((internalfontnumber) (f))
#define dvifontdef_regmem
void zmovement(scaled w, eightbits o);
#define movement(w, o) zmovement((scaled) (w), (eightbits) (o))
#define movement_regmem register memoryword *mem=zmem;
void zprunemovements(int l);
#define prunemovements(l) zprunemovements((int) (l))
#define prunemovements_regmem register memoryword *mem=zmem;
void zspecialout(halfword p);
#define specialout(p) zspecialout((halfword) (p))
#define specialout_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zwriteout(halfword p);
#define writeout(p) zwriteout((halfword) (p))
#define writeout_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zoutwhat(halfword p);
#define outwhat(p) zoutwhat((halfword) (p))
#define outwhat_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword znewedge(smallnumber s, scaled w);
#define newedge(s, w) znewedge((smallnumber) (s), (scaled) (w))
#define newedge_regmem register memoryword *mem=zmem;
halfword zzreverse(halfword thisbox, halfword t, scaled * curg, double *curglue);
#define reverse(thisbox, t, curg, curglue) zzreverse((halfword) (thisbox), (halfword) (t), (scaled *) &(curg), (double *) &(curglue))
#define reverse_regmem register memoryword *mem=zmem;
void hlistout(void);
#define hlistout_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void vlistout(void);
#define vlistout_regmem register memoryword *mem=zmem;
void zdvishipout(halfword p);
#define dvishipout(p) zdvishipout((halfword) (p))
#define dvishipout_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
int getpdfcompresslevel(void);
#define getpdfcompresslevel_regmem register memoryword *eqtb=zeqtb;
int getpdfsuppresswarningdupmap(void);
#define getpdfsuppresswarningdupmap_regmem register memoryword *eqtb=zeqtb;
int getpdfsuppresswarningpagegroup(void);
#define getpdfsuppresswarningpagegroup_regmem register memoryword *eqtb=zeqtb;
int getpdfsuppressptexinfo(void);
#define getpdfsuppressptexinfo_regmem register memoryword *eqtb=zeqtb;
int getpdfomitcharset(void);
#define getpdfomitcharset_regmem register memoryword *eqtb=zeqtb;
internalfontnumber getnullfont(void);
#define getnullfont_regmem
internalfontnumber getfontbase(void);
#define getfontbase_regmem
halfword getnullcs(void);
#define getnullcs_regmem
halfword getnullptr(void);
#define getnullptr_regmem
int zgettexint(int code);
#define gettexint(code) zgettexint((int) (code))
#define gettexint_regmem register memoryword *eqtb=zeqtb;
scaled zgettexdimen(int code);
#define gettexdimen(code) zgettexdimen((int) (code))
#define gettexdimen_regmem register memoryword *eqtb=zeqtb;
scaled zgetxheight(internalfontnumber f);
#define getxheight(f) zgetxheight((internalfontnumber) (f))
#define getxheight_regmem
scaled zgetcharwidth(internalfontnumber f, eightbits c);
#define getcharwidth(f, c) zgetcharwidth((internalfontnumber) (f), (eightbits) (c))
#define getcharwidth_regmem
scaled zgetcharheight(internalfontnumber f, eightbits c);
#define getcharheight(f, c) zgetcharheight((internalfontnumber) (f), (eightbits) (c))
#define getcharheight_regmem
scaled zgetchardepth(internalfontnumber f, eightbits c);
#define getchardepth(f, c) zgetchardepth((internalfontnumber) (f), (eightbits) (c))
#define getchardepth_regmem
scaled zgetquad(internalfontnumber f);
#define getquad(f) zgetquad((internalfontnumber) (f))
#define getquad_regmem
scaled zgetslant(internalfontnumber f);
#define getslant(f) zgetslant((internalfontnumber) (f))
#define getslant_regmem
internalfontnumber newdummyfont(void);
#define newdummyfont_regmem
void zshortdisplayn(int p, int m);
#define shortdisplayn(p, m) zshortdisplayn((int) (p), (int) (m))
#define shortdisplayn_regmem register memoryword *mem=zmem;
int zpdfgetmem(int s);
#define pdfgetmem(s) zpdfgetmem((int) (s))
#define pdfgetmem_regmem
int zfixint(int val, int min, int max);
#define fixint(val, min, max) zfixint((int) (val), (int) (min), (int) (max))
#define fixint_regmem
void checkpdfversion(void);
#define checkpdfversion_regmem register memoryword *eqtb=zeqtb;
void ensurepdfopen(void);
#define ensurepdfopen_regmem
void pdfflush(void);
#define pdfflush_regmem
void pdfbeginstream(void);
#define pdfbeginstream_regmem register memoryword *eqtb=zeqtb;
void pdfendstream(void);
#define pdfendstream_regmem
void zadvcharwidth(internalfontnumber f, eightbits c);
#define advcharwidth(f, c) zadvcharwidth((internalfontnumber) (f), (eightbits) (c))
#define advcharwidth_regmem
void zpdfprintreal(int m, int d);
#define pdfprintreal(m, d) zpdfprintreal((int) (m), (int) (d))
#define pdfprintreal_regmem
void zpdfprintbp(scaled s);
#define pdfprintbp(s) zpdfprintbp((scaled) (s))
#define pdfprintbp_regmem
void zpdfprintmagbp(scaled s);
#define pdfprintmagbp(s) zpdfprintmagbp((scaled) (s))
#define pdfprintmagbp_regmem register memoryword *eqtb=zeqtb;
void zpdfsetorigin(scaled h, scaled v);
#define pdfsetorigin(h, v) zpdfsetorigin((scaled) (h), (scaled) (v))
#define pdfsetorigin_regmem
void zpdfsetorigintemp(scaled h, scaled v);
#define pdfsetorigintemp(h, v) zpdfsetorigintemp((scaled) (h), (scaled) (v))
#define pdfsetorigintemp_regmem
void pdfendstring(void);
#define pdfendstring_regmem
void pdfendstringnl(void);
#define pdfendstringnl_regmem
void zpdfsettextmatrix(scaled v, scaled vout, internalfontnumber f);
#define pdfsettextmatrix(v, vout, f) zpdfsettextmatrix((scaled) (v), (scaled) (vout), (internalfontnumber) (f))
#define pdfsettextmatrix_regmem
void zpdfusefont(internalfontnumber f, int fontnum);
#define pdfusefont(f, fontnum) zpdfusefont((internalfontnumber) (f), (int) (fontnum))
#define pdfusefont_regmem register memoryword *eqtb=zeqtb;
void zpdfinitfont(internalfontnumber f);
#define pdfinitfont(f) zpdfinitfont((internalfontnumber) (f))
#define pdfinitfont_regmem
void pdfinitfontcurval(void);
#define pdfinitfontcurval_regmem
void zpdfsetfont(internalfontnumber f);
#define pdfsetfont(f) zpdfsetfont((internalfontnumber) (f))
#define pdfsetfont_regmem register memoryword *mem=zmem;
void pdfbegintext(void);
#define pdfbegintext_regmem
void pdfreaddummyfont(void);
#define pdfreaddummyfont_regmem
void pdfinsertinterwordspace(void);
#define pdfinsertinterwordspace_regmem
void zpdfbeginstring(internalfontnumber f);
#define pdfbeginstring(f) zpdfbeginstring((internalfontnumber) (f))
#define pdfbeginstring_regmem
void pdfinsertfakespace(void);
#define pdfinsertfakespace_regmem
void pdfendtext(void);
#define pdfendtext_regmem
void zpdfsetrule(scaled x, scaled y, scaled w, scaled h);
#define pdfsetrule(x, y, w, h) zpdfsetrule((scaled) (x), (scaled) (y), (scaled) (w), (scaled) (h))
#define pdfsetrule_regmem
void zpdfrectangle(scaled left, scaled top, scaled right, scaled bottom);
#define pdfrectangle(left, top, right, bottom) zpdfrectangle((scaled) (left), (scaled) (top), (scaled) (right), (scaled) (bottom))
#define pdfrectangle_regmem
void zslowprintsubstr(int s, int maxlen);
#define slowprintsubstr(s, maxlen) zslowprintsubstr((int) (s), (int) (maxlen))
#define slowprintsubstr_regmem
void zliteral(strnumber s, int literalmode, bool warn);
#define literal(s, literalmode, warn) zliteral((strnumber) (s), (int) (literalmode), (bool) (warn))
#define literal_regmem
void zpdfprintfwint(long n, int w);
#define pdfprintfwint(n, w) zpdfprintfwint((long) (n), (int) (w))
#define pdfprintfwint_regmem
void zpdfoutbytes(long n, int w);
#define pdfoutbytes(n, w) zpdfoutbytes((long) (n), (int) (w))
#define pdfoutbytes_regmem
void zpdfintentry(strnumber s, int v);
#define pdfintentry(s, v) zpdfintentry((strnumber) (s), (int) (v))
#define pdfintentry_regmem
void zpdfintentryln(strnumber s, int v);
#define pdfintentryln(s, v) zpdfintentryln((strnumber) (s), (int) (v))
#define pdfintentryln_regmem
void zpdfindirect(strnumber s, int o);
#define pdfindirect(s, o) zpdfindirect((strnumber) (s), (int) (o))
#define pdfindirect_regmem
void zpdfindirectln(strnumber s, int o);
#define pdfindirectln(s, o) zpdfindirectln((strnumber) (s), (int) (o))
#define pdfindirectln_regmem
void zpdfprintstr(strnumber s);
#define pdfprintstr(s) zpdfprintstr((strnumber) (s))
#define pdfprintstr_regmem
void zpdfprintstrln(strnumber s);
#define pdfprintstrln(s) zpdfprintstrln((strnumber) (s))
#define pdfprintstrln_regmem
void zpdfstrentry(strnumber s, strnumber v);
#define pdfstrentry(s, v) zpdfstrentry((strnumber) (s), (strnumber) (v))
#define pdfstrentry_regmem
void zpdfstrentryln(strnumber s, strnumber v);
#define pdfstrentryln(s, v) zpdfstrentryln((strnumber) (s), (strnumber) (v))
#define pdfstrentryln_regmem
void zsettagcode(internalfontnumber f, eightbits c, int i);
#define settagcode(f, c, i) zsettagcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define settagcode_regmem
void zsetnoligatures(internalfontnumber f);
#define setnoligatures(f) zsetnoligatures((internalfontnumber) (f))
#define setnoligatures_regmem
int zinitfontbase(int v);
#define initfontbase(v) zinitfontbase((int) (v))
#define initfontbase_regmem
void zsetlpcode(internalfontnumber f, eightbits c, int i);
#define setlpcode(f, c, i) zsetlpcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setlpcode_regmem
void zsetrpcode(internalfontnumber f, eightbits c, int i);
#define setrpcode(f, c, i) zsetrpcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setrpcode_regmem
void zsetefcode(internalfontnumber f, eightbits c, int i);
#define setefcode(f, c, i) zsetefcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setefcode_regmem
void zsetknbscode(internalfontnumber f, eightbits c, int i);
#define setknbscode(f, c, i) zsetknbscode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setknbscode_regmem
void zsetstbscode(internalfontnumber f, eightbits c, int i);
#define setstbscode(f, c, i) zsetstbscode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setstbscode_regmem
void zsetshbscode(internalfontnumber f, eightbits c, int i);
#define setshbscode(f, c, i) zsetshbscode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setshbscode_regmem
void zsetknbccode(internalfontnumber f, eightbits c, int i);
#define setknbccode(f, c, i) zsetknbccode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setknbccode_regmem
void zsetknaccode(internalfontnumber f, eightbits c, int i);
#define setknaccode(f, c, i) zsetknaccode((internalfontnumber) (f), (eightbits) (c), (int) (i))
#define setknaccode_regmem
void zadjustinterwordglue(halfword p, halfword g);
#define adjustinterwordglue(p, g) zadjustinterwordglue((halfword) (p), (halfword) (g))
#define adjustinterwordglue_regmem register memoryword *mem=zmem;
halfword zgetautokern(internalfontnumber f, halfword l, halfword r);
#define getautokern(f, l, r) zgetautokern((internalfontnumber) (f), (halfword) (l), (halfword) (r))
#define getautokern_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
strnumber zexpandfontname(internalfontnumber f, int e);
#define expandfontname(f, e) zexpandfontname((internalfontnumber) (f), (int) (e))
#define expandfontname_regmem
internalfontnumber zautoexpandfont(internalfontnumber f, int e);
#define autoexpandfont(f, e) zautoexpandfont((internalfontnumber) (f), (int) (e))
#define autoexpandfont_regmem
void zcopyexpandparams(internalfontnumber k, internalfontnumber f, int e);
#define copyexpandparams(k, f, e) zcopyexpandparams((internalfontnumber) (k), (internalfontnumber) (f), (int) (e))
#define copyexpandparams_regmem
internalfontnumber ztfmlookup(strnumber s, scaled fs);
#define tfmlookup(s, fs) ztfmlookup((strnumber) (s), (scaled) (fs))
#define tfmlookup_regmem
internalfontnumber zloadexpandfont(internalfontnumber f, int e);
#define loadexpandfont(f, e) zloadexpandfont((internalfontnumber) (f), (int) (e))
#define loadexpandfont_regmem
int zfixexpandvalue(internalfontnumber f, int e);
#define fixexpandvalue(f, e) zfixexpandvalue((internalfontnumber) (f), (int) (e))
#define fixexpandvalue_regmem
internalfontnumber zgetexpandfont(internalfontnumber f, int e);
#define getexpandfont(f, e) zgetexpandfont((internalfontnumber) (f), (int) (e))
#define getexpandfont_regmem
internalfontnumber zexpandfont(internalfontnumber f, int e);
#define expandfont(f, e) zexpandfont((internalfontnumber) (f), (int) (e))
#define expandfont_regmem
void zsetexpandparams(internalfontnumber f, bool autoexpand, int stretchlimit, int shrinklimit, int fontstep, int expandratio);
#define setexpandparams(f, autoexpand, stretchlimit, shrinklimit, fontstep, expandratio) zsetexpandparams((internalfontnumber) (f), (bool) (autoexpand), (int) (stretchlimit), (int) (shrinklimit), (int) (fontstep), (int) (expandratio))
#define setexpandparams_regmem
void zvfexpandlocalfonts(internalfontnumber f);
#define vfexpandlocalfonts(f) zvfexpandlocalfonts((internalfontnumber) (f))
#define vfexpandlocalfonts_regmem
void readexpandfont(void);
#define readexpandfont_regmem
internalfontnumber zletterspacefont(halfword u, internalfontnumber f, int e);
#define letterspacefont(u, f, e) zletterspacefont((halfword) (u), (internalfontnumber) (f), (int) (e))
#define letterspacefont_regmem
void znewletterspacedfont(smallnumber a);
#define newletterspacedfont(a) znewletterspacedfont((smallnumber) (a))
#define newletterspacedfont_regmem register memoryword *eqtb=zeqtb;
bool zisletterspacedfont(internalfontnumber f);
#define isletterspacedfont(f) zisletterspacedfont((internalfontnumber) (f))
#define isletterspacedfont_regmem
internalfontnumber zcopyfontinfo(internalfontnumber f);
#define copyfontinfo(f) zcopyfontinfo((internalfontnumber) (f))
#define copyfontinfo_regmem
void zmakefontcopy(smallnumber a);
#define makefontcopy(a) zmakefontcopy((smallnumber) (a))
#define makefontcopy_regmem register memoryword *eqtb=zeqtb;
void zvferror(strnumber filename, strnumber msg);
#define vferror(filename, msg) zvferror((strnumber) (filename), (strnumber) (msg))
#define vferror_regmem
eightbits vfbyte(void);
#define vfbyte_regmem
int zvfreadsigned(int k);
#define vfreadsigned(k) zvfreadsigned((int) (k))
#define vfreadsigned_regmem
int zvfreadunsigned(int k);
#define vfreadunsigned(k) zvfreadunsigned((int) (k))
#define vfreadunsigned_regmem
void zvflocalfontwarning(internalfontnumber f, internalfontnumber k, strnumber s);
#define vflocalfontwarning(f, k, s) zvflocalfontwarning((internalfontnumber) (f), (internalfontnumber) (k), (strnumber) (s))
#define vflocalfontwarning_regmem
internalfontnumber zvfdeffont(internalfontnumber f);
#define vfdeffont(f) zvfdeffont((internalfontnumber) (f))
#define vfdeffont_regmem
void zdovf(internalfontnumber f);
#define dovf(f) zdovf((internalfontnumber) (f))
#define dovf_regmem
void pdfcheckvfcurval(void);
#define pdfcheckvfcurval_regmem
bool zautoexpandvf(internalfontnumber f);
#define autoexpandvf(f) zautoexpandvf((internalfontnumber) (f))
#define autoexpandvf_regmem
int zpacketreadsigned(int k);
#define packetreadsigned(k) zpacketreadsigned((int) (k))
#define packetreadsigned_regmem
int zpacketreadunsigned(int k);
#define packetreadunsigned(k) zpacketreadunsigned((int) (k))
#define packetreadunsigned_regmem
scaled zpacketscaled(int k, scaled fs);
#define packetscaled(k, fs) zpacketscaled((int) (k), (scaled) (fs))
#define packetscaled_regmem
void zdovfpacket(internalfontnumber vff, eightbits c);
#define dovfpacket(vff, c) zdovfpacket((internalfontnumber) (vff), (eightbits) (c))
#define dovfpacket_regmem
void zpdfoutliteral(halfword p);
#define pdfoutliteral(p) zpdfoutliteral((halfword) (p))
#define pdfoutliteral_regmem register memoryword *mem=zmem;
void zpdfoutcolorstack(halfword p);
#define pdfoutcolorstack(p) zpdfoutcolorstack((halfword) (p))
#define pdfoutcolorstack_regmem register memoryword *mem=zmem;
void pdfoutcolorstackstartpage(void);
#define pdfoutcolorstackstartpage_regmem
void zpdfoutsetmatrix(halfword p);
#define pdfoutsetmatrix(p) zpdfoutsetmatrix((halfword) (p))
#define pdfoutsetmatrix_regmem register memoryword *mem=zmem;
void zpdfoutsave(halfword p);
#define pdfoutsave(p) zpdfoutsave((halfword) (p))
#define pdfoutsave_regmem
void zpdfoutrestore(halfword p);
#define pdfoutrestore(p) zpdfoutrestore((halfword) (p))
#define pdfoutrestore_regmem
void zpdfspecial(halfword p);
#define pdfspecial(p) zpdfspecial((halfword) (p))
#define pdfspecial_regmem register memoryword *mem=zmem;
void zpdfprinttoks(halfword p);
#define pdfprinttoks(p) zpdfprinttoks((halfword) (p))
#define pdfprinttoks_regmem
void zpdfprinttoksln(halfword p);
#define pdfprinttoksln(p) zpdfprinttoksln((halfword) (p))
#define pdfprinttoksln_regmem
void zpdfwriteobj(int n);
#define pdfwriteobj(n) zpdfwriteobj((int) (n))
#define pdfwriteobj_regmem
void zflushwhatsitnode(halfword p, smallnumber s);
#define flushwhatsitnode(p, s) zflushwhatsitnode((halfword) (p), (smallnumber) (s))
#define flushwhatsitnode_regmem register memoryword *mem=zmem;
void zpdfwriteimage(int n);
#define pdfwriteimage(n) zpdfwriteimage((int) (n))
#define pdfwriteimage_regmem
void zpdfprintrectspec(halfword r);
#define pdfprintrectspec(r) zpdfprintrectspec((halfword) (r))
#define pdfprintrectspec_regmem register memoryword *mem=zmem;
void zwarndestdup(int id, smallnumber byname, strnumber s1, strnumber s2);
#define warndestdup(id, byname, s1, s2) zwarndestdup((int) (id), (smallnumber) (byname), (strnumber) (s1), (strnumber) (s2))
#define warndestdup_regmem register memoryword *eqtb=zeqtb;
void zwriteaction(halfword p);
#define writeaction(p) zwriteaction((halfword) (p))
#define writeaction_regmem register memoryword *mem=zmem;
void zsetrectdimens(halfword p, halfword parentbox, scaled x, scaled y, scaled w, scaled h, scaled d, scaled margin);
#define setrectdimens(p, parentbox, x, y, w, h, d, margin) zsetrectdimens((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y), (scaled) (w), (scaled) (h), (scaled) (d), (scaled) (margin))
#define setrectdimens_regmem register memoryword *mem=zmem;
void zdoannot(halfword p, halfword parentbox, scaled x, scaled y);
#define doannot(p, parentbox, x, y) zdoannot((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
#define doannot_regmem register memoryword *mem=zmem;
void zpushlinklevel(halfword p);
#define pushlinklevel(p) zpushlinklevel((halfword) (p))
#define pushlinklevel_regmem register memoryword *mem=zmem;
void poplinklevel(void);
#define poplinklevel_regmem
void zdolink(halfword p, halfword parentbox, scaled x, scaled y);
#define dolink(p, parentbox, x, y) zdolink((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
#define dolink_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void endlink(void);
#define endlink_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zappendlink(halfword parentbox, scaled x, scaled y, smallnumber i);
#define appendlink(parentbox, x, y, i) zappendlink((halfword) (parentbox), (scaled) (x), (scaled) (y), (smallnumber) (i))
#define appendlink_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zappendbead(halfword p);
#define appendbead(p) zappendbead((halfword) (p))
#define appendbead_regmem register memoryword *mem=zmem;
void zdothread(halfword p, halfword parentbox, scaled x, scaled y);
#define dothread(p, parentbox, x, y) zdothread((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
#define dothread_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zappendthread(halfword parentbox, scaled x, scaled y);
#define appendthread(parentbox, x, y) zappendthread((halfword) (parentbox), (scaled) (x), (scaled) (y))
#define appendthread_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void endthread(void);
#define endthread_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
int zopensubentries(halfword p);
#define opensubentries(p) zopensubentries((halfword) (p))
#define opensubentries_regmem
void zdodest(halfword p, halfword parentbox, scaled x, scaled y);
#define dodest(p, parentbox, x, y) zdodest((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
#define dodest_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zoutform(halfword p);
#define outform(p) zoutform((halfword) (p))
#define outform_regmem register memoryword *mem=zmem;
void zoutimage(halfword p);
#define outimage(p) zoutimage((halfword) (p))
#define outimage_regmem register memoryword *mem=zmem;
scaled zgapamount(halfword p, scaled curpos);
#define gapamount(p, curpos) zgapamount((halfword) (p), (scaled) (curpos))
#define gapamount_regmem register memoryword *mem=zmem;
halfword zgetvpos(halfword p, halfword q, halfword b);
#define getvpos(p, q, b) zgetvpos((halfword) (p), (halfword) (q), (halfword) (b))
#define getvpos_regmem register memoryword *mem=zmem;
void zdosnapycomp(halfword p, halfword b);
#define dosnapycomp(p, b) zdosnapycomp((halfword) (p), (halfword) (b))
#define dosnapycomp_regmem register memoryword *mem=zmem;
void zdosnapy(halfword p);
#define dosnapy(p) zdosnapy((halfword) (p))
#define dosnapy_regmem register memoryword *mem=zmem;
void pdfhlistout(void);
#define pdfhlistout_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void pdfvlistout(void);
#define pdfvlistout_regmem register memoryword *mem=zmem;
void fixpdfoutput(void);
#define fixpdfoutput_regmem register memoryword *eqtb=zeqtb;
void fixpdfdraftmode(void);
#define fixpdfdraftmode_regmem register memoryword *eqtb=zeqtb;
bool zsubstrofstr(strnumber s, strnumber t);
#define substrofstr(s, t) zsubstrofstr((strnumber) (s), (strnumber) (t))
#define substrofstr_regmem
void zpdfshipout(halfword p, bool shippingpage);
#define pdfshipout(p, shippingpage) zpdfshipout((halfword) (p), (bool) (shippingpage))
#define pdfshipout_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zshipout(halfword p);
#define shipout(p) zshipout((halfword) (p))
#define shipout_regmem register memoryword *eqtb=zeqtb;
bool zstrlessstr(strnumber s1, strnumber s2);
#define strlessstr(s1, s2) zstrlessstr((strnumber) (s1), (strnumber) (s2))
#define strlessstr_regmem
void zsortdestnames(int l, int r);
#define sortdestnames(l, r) zsortdestnames((int) (l), (int) (r))
#define sortdestnames_regmem
void zpdffixdest(int k);
#define pdffixdest(k) zpdffixdest((int) (k))
#define pdffixdest_regmem
void pdfprintinfo(void);
#define pdfprintinfo_regmem register memoryword *eqtb=zeqtb;
void zscanspec(groupcode c, bool threecodes);
#define scanspec(c, threecodes) zscanspec((groupcode) (c), (bool) (threecodes))
#define scanspec_regmem
bool zcheckexpandpars(internalfontnumber f);
#define checkexpandpars(f) zcheckexpandpars((internalfontnumber) (f))
#define checkexpandpars_regmem
scaled zcharstretch(internalfontnumber f, eightbits c);
#define charstretch(f, c) zcharstretch((internalfontnumber) (f), (eightbits) (c))
#define charstretch_regmem
scaled zcharshrink(internalfontnumber f, eightbits c);
#define charshrink(f, c) zcharshrink((internalfontnumber) (f), (eightbits) (c))
#define charshrink_regmem
scaled zgetkern(internalfontnumber f, eightbits lc, eightbits rc);
#define getkern(f, lc, rc) zgetkern((internalfontnumber) (f), (eightbits) (lc), (eightbits) (rc))
#define getkern_regmem
scaled zkernstretch(halfword p);
#define kernstretch(p) zkernstretch((halfword) (p))
#define kernstretch_regmem register memoryword *mem=zmem;
scaled zkernshrink(halfword p);
#define kernshrink(p) zkernshrink((halfword) (p))
#define kernshrink_regmem register memoryword *mem=zmem;
void zdosubstfont(halfword p, int exratio);
#define dosubstfont(p, exratio) zdosubstfont((halfword) (p), (int) (exratio))
#define dosubstfont_regmem register memoryword *mem=zmem;
scaled zcharpw(halfword p, smallnumber side);
#define charpw(p, side) zcharpw((halfword) (p), (smallnumber) (side))
#define charpw_regmem register memoryword *mem=zmem;
halfword znewmarginkern(scaled w, halfword p, smallnumber side);
#define newmarginkern(w, p, side) znewmarginkern((scaled) (w), (halfword) (p), (smallnumber) (side))
#define newmarginkern_regmem register memoryword *mem=zmem;
halfword zhpack(halfword p, scaled w, smallnumber m);
#define hpack(p, w, m) zhpack((halfword) (p), (scaled) (w), (smallnumber) (m))
#define hpack_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword zvpackage(halfword p, scaled h, smallnumber m, scaled l);
#define vpackage(p, h, m, l) zvpackage((halfword) (p), (scaled) (h), (smallnumber) (m), (scaled) (l))
#define vpackage_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zappendtovlist(halfword b);
#define appendtovlist(b) zappendtovlist((halfword) (b))
#define appendtovlist_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword newnoad(void);
#define newnoad_regmem register memoryword *mem=zmem;
halfword znewstyle(smallnumber s);
#define newstyle(s) znewstyle((smallnumber) (s))
#define newstyle_regmem register memoryword *mem=zmem;
halfword newchoice(void);
#define newchoice_regmem register memoryword *mem=zmem;
void showinfo(void);
#define showinfo_regmem register memoryword *mem=zmem;
halfword zfractionrule(scaled t);
#define fractionrule(t) zfractionrule((scaled) (t))
#define fractionrule_regmem register memoryword *mem=zmem;
halfword zoverbar(halfword b, scaled k, scaled t);
#define overbar(b, k, t) zoverbar((halfword) (b), (scaled) (k), (scaled) (t))
#define overbar_regmem register memoryword *mem=zmem;
halfword zcharbox(internalfontnumber f, quarterword c);
#define charbox(f, c) zcharbox((internalfontnumber) (f), (quarterword) (c))
#define charbox_regmem register memoryword *mem=zmem;
void zstackintobox(halfword b, internalfontnumber f, quarterword c);
#define stackintobox(b, f, c) zstackintobox((halfword) (b), (internalfontnumber) (f), (quarterword) (c))
#define stackintobox_regmem register memoryword *mem=zmem;
scaled zheightplusdepth(internalfontnumber f, quarterword c);
#define heightplusdepth(f, c) zheightplusdepth((internalfontnumber) (f), (quarterword) (c))
#define heightplusdepth_regmem
halfword zvardelimiter(halfword d, smallnumber s, scaled v);
#define vardelimiter(d, s, v) zvardelimiter((halfword) (d), (smallnumber) (s), (scaled) (v))
#define vardelimiter_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword zrebox(halfword b, scaled w);
#define rebox(b, w) zrebox((halfword) (b), (scaled) (w))
#define rebox_regmem register memoryword *mem=zmem;
halfword zmathglue(halfword g, scaled m);
#define mathglue(g, m) zmathglue((halfword) (g), (scaled) (m))
#define mathglue_regmem register memoryword *mem=zmem;
void zmathkern(halfword p, scaled m);
#define mathkern(p, m) zmathkern((halfword) (p), (scaled) (m))
#define mathkern_regmem register memoryword *mem=zmem;
void flushmath(void);
#define flushmath_regmem register memoryword *mem=zmem;
halfword zcleanbox(halfword p, smallnumber s);
#define cleanbox(p, s) zcleanbox((halfword) (p), (smallnumber) (s))
#define cleanbox_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zfetch(halfword a);
#define fetch(a) zfetch((halfword) (a))
#define fetch_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zmakeover(halfword q);
#define makeover(q) zmakeover((halfword) (q))
#define makeover_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zmakeunder(halfword q);
#define makeunder(q) zmakeunder((halfword) (q))
#define makeunder_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zmakevcenter(halfword q);
#define makevcenter(q) zmakevcenter((halfword) (q))
#define makevcenter_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zmakeradical(halfword q);
#define makeradical(q) zmakeradical((halfword) (q))
#define makeradical_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zmakemathaccent(halfword q);
#define makemathaccent(q) zmakemathaccent((halfword) (q))
#define makemathaccent_regmem register memoryword *mem=zmem;
void zmakefraction(halfword q);
#define makefraction(q) zmakefraction((halfword) (q))
#define makefraction_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
scaled zmakeop(halfword q);
#define makeop(q) zmakeop((halfword) (q))
#define makeop_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zmakeord(halfword q);
#define makeord(q) zmakeord((halfword) (q))
#define makeord_regmem register memoryword *mem=zmem;
void zmakescripts(halfword q, scaled delta);
#define makescripts(q, delta) zmakescripts((halfword) (q), (scaled) (delta))
#define makescripts_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
smallnumber zmakeleftright(halfword q, smallnumber style, scaled maxd, scaled maxh);
#define makeleftright(q, style, maxd, maxh) zmakeleftright((halfword) (q), (smallnumber) (style), (scaled) (maxd), (scaled) (maxh))
#define makeleftright_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void mlisttohlist(void);
#define mlisttohlist_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void pushalignment(void);
#define pushalignment_regmem register memoryword *mem=zmem;
void popalignment(void);
#define popalignment_regmem register memoryword *mem=zmem;
void getpreambletoken(void);
#define getpreambletoken_regmem register memoryword *eqtb=zeqtb;
void initalign(void);
#define initalign_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zinitspan(halfword p);
#define initspan(p) zinitspan((halfword) (p))
#define initspan_regmem register memoryword *eqtb=zeqtb;
void initrow(void);
#define initrow_regmem register memoryword *mem=zmem;
void initcol(void);
#define initcol_regmem register memoryword *mem=zmem;
bool fincol(void);
#define fincol_regmem register memoryword *mem=zmem;
void finrow(void);
#define finrow_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void finalign(void);
#define finalign_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void alignpeek(void);
#define alignpeek_regmem
halfword zfiniteshrink(halfword p);
#define finiteshrink(p) zfiniteshrink((halfword) (p))
#define finiteshrink_regmem register memoryword *mem=zmem;
void zpushnode(halfword p);
#define pushnode(p) zpushnode((halfword) (p))
#define pushnode_regmem
halfword popnode(void);
#define popnode_regmem
halfword zfindprotcharleft(halfword l, bool d);
#define findprotcharleft(l, d) zfindprotcharleft((halfword) (l), (bool) (d))
#define findprotcharleft_regmem register memoryword *mem=zmem;
halfword zfindprotcharright(halfword l, halfword r);
#define findprotcharright(l, r) zfindprotcharright((halfword) (l), (halfword) (r))
#define findprotcharright_regmem register memoryword *mem=zmem;
scaled ztotalpw(halfword q, halfword p);
#define totalpw(q, p) ztotalpw((halfword) (q), (halfword) (p))
#define totalpw_regmem register memoryword *mem=zmem;
void ztrybreak(int pi, smallnumber breaktype);
#define trybreak(pi, breaktype) ztrybreak((int) (pi), (smallnumber) (breaktype))
#define trybreak_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zpostlinebreak(bool d);
#define postlinebreak(d) zpostlinebreak((bool) (d))
#define postlinebreak_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
smallnumber zreconstitute(smallnumber j, smallnumber n, halfword bchar, halfword hchar);
#define reconstitute(j, n, bchar, hchar) zreconstitute((smallnumber) (j), (smallnumber) (n), (halfword) (bchar), (halfword) (hchar))
#define reconstitute_regmem register memoryword *mem=zmem;
void hyphenate(void);
#define hyphenate_regmem register memoryword *mem=zmem;
trieopcode znewtrieop(smallnumber d, smallnumber n, trieopcode v);
#define newtrieop(d, n, v) znewtrieop((smallnumber) (d), (smallnumber) (n), (trieopcode) (v))
#define newtrieop_regmem
triepointer ztrienode(triepointer p);
#define trienode(p) ztrienode((triepointer) (p))
#define trienode_regmem
triepointer zcompresstrie(triepointer p);
#define compresstrie(p) zcompresstrie((triepointer) (p))
#define compresstrie_regmem
void zfirstfit(triepointer p);
#define firstfit(p) zfirstfit((triepointer) (p))
#define firstfit_regmem
void ztriepack(triepointer p);
#define triepack(p) ztriepack((triepointer) (p))
#define triepack_regmem
void ztriefix(triepointer p);
#define triefix(p) ztriefix((triepointer) (p))
#define triefix_regmem
void newpatterns(void);
#define newpatterns_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void inittrie(void);
#define inittrie_regmem
void zlinebreak(bool d);
#define linebreak(d) zlinebreak((bool) (d))
#define linebreak_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
bool zeTeXenabled(bool b, quarterword j, halfword k);
#define eTeXenabled(b, j, k) zeTeXenabled((bool) (b), (quarterword) (j), (halfword) (k))
#define eTeXenabled_regmem
void showsavegroups(void);
#define showsavegroups_regmem register memoryword *mem=zmem;
void newhyphexceptions(void);
#define newhyphexceptions_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword zprunepagetop(halfword p, bool s);
#define prunepagetop(p, s) zprunepagetop((halfword) (p), (bool) (s))
#define prunepagetop_regmem register memoryword *mem=zmem;
halfword zvertbreak(halfword p, scaled h, scaled d);
#define vertbreak(p, h, d) zvertbreak((halfword) (p), (scaled) (h), (scaled) (d))
#define vertbreak_regmem register memoryword *mem=zmem;
bool zdomarks(smallnumber a, smallnumber l, halfword q);
#define domarks(a, l, q) zdomarks((smallnumber) (a), (smallnumber) (l), (halfword) (q))
#define domarks_regmem register memoryword *mem=zmem;
halfword zvsplit(halfword n, scaled h);
#define vsplit(n, h) zvsplit((halfword) (n), (scaled) (h))
#define vsplit_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void printtotals(void);
#define printtotals_regmem
void zfreezepagespecs(smallnumber s);
#define freezepagespecs(s) zfreezepagespecs((smallnumber) (s))
#define freezepagespecs_regmem register memoryword *eqtb=zeqtb;
void zboxerror(eightbits n);
#define boxerror(n) zboxerror((eightbits) (n))
#define boxerror_regmem register memoryword *eqtb=zeqtb;
void zensurevbox(eightbits n);
#define ensurevbox(n) zensurevbox((eightbits) (n))
#define ensurevbox_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zfireup(halfword c);
#define fireup(c) zfireup((halfword) (c))
#define fireup_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void buildpage(void);
#define buildpage_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void appspace(void);
#define appspace_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void insertdollarsign(void);
#define insertdollarsign_regmem
void youcant(void);
#define youcant_regmem
void reportillegalcase(void);
#define reportillegalcase_regmem
bool privileged(void);
#define privileged_regmem
bool itsallover(void);
#define itsallover_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void appendglue(void);
#define appendglue_regmem register memoryword *mem=zmem;
void appendkern(void);
#define appendkern_regmem register memoryword *mem=zmem;
void offsave(void);
#define offsave_regmem register memoryword *mem=zmem;
void extrarightbrace(void);
#define extrarightbrace_regmem
void normalparagraph(void);
#define normalparagraph_regmem register memoryword *eqtb=zeqtb;
void zboxend(int boxcontext);
#define boxend(boxcontext) zboxend((int) (boxcontext))
#define boxend_regmem register memoryword *mem=zmem;
void zbeginbox(int boxcontext);
#define beginbox(boxcontext) zbeginbox((int) (boxcontext))
#define beginbox_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zscanbox(int boxcontext);
#define scanbox(boxcontext) zscanbox((int) (boxcontext))
#define scanbox_regmem
void zpackage(smallnumber c);
#define package(c) zpackage((smallnumber) (c))
#define package_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
smallnumber znormmin(int h);
#define normmin(h) znormmin((int) (h))
#define normmin_regmem
void znewgraf(bool indented);
#define newgraf(indented) znewgraf((bool) (indented))
#define newgraf_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void indentinhmode(void);
#define indentinhmode_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void headforvmode(void);
#define headforvmode_regmem
void endgraf(void);
#define endgraf_regmem
void begininsertoradjust(void);
#define begininsertoradjust_regmem register memoryword *eqtb=zeqtb;
void makemark(void);
#define makemark_regmem register memoryword *mem=zmem;
void appendpenalty(void);
#define appendpenalty_regmem register memoryword *mem=zmem;
void deletelast(void);
#define deletelast_regmem register memoryword *mem=zmem;
void unpackage(void);
#define unpackage_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void appenditaliccorrection(void);
#define appenditaliccorrection_regmem register memoryword *mem=zmem;
void appenddiscretionary(void);
#define appenddiscretionary_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void builddiscretionary(void);
#define builddiscretionary_regmem register memoryword *mem=zmem;
void makeaccent(void);
#define makeaccent_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void alignerror(void);
#define alignerror_regmem
void noalignerror(void);
#define noalignerror_regmem
void omiterror(void);
#define omiterror_regmem
void doendv(void);
#define doendv_regmem
void cserror(void);
#define cserror_regmem
void zpushmath(groupcode c);
#define pushmath(c) zpushmath((groupcode) (c))
#define pushmath_regmem
void zjustcopy(halfword p, halfword h, halfword t);
#define justcopy(p, h, t) zjustcopy((halfword) (p), (halfword) (h), (halfword) (t))
#define justcopy_regmem register memoryword *mem=zmem;
void zjustreverse(halfword p);
#define justreverse(p) zjustreverse((halfword) (p))
#define justreverse_regmem register memoryword *mem=zmem;
void initmath(void);
#define initmath_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void starteqno(void);
#define starteqno_regmem register memoryword *eqtb=zeqtb;
void zscanmath(halfword p);
#define scanmath(p) zscanmath((halfword) (p))
#define scanmath_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zsetmathchar(int c);
#define setmathchar(c) zsetmathchar((int) (c))
#define setmathchar_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void mathlimitswitch(void);
#define mathlimitswitch_regmem register memoryword *mem=zmem;
void zscandelimiter(halfword p, bool r);
#define scandelimiter(p, r) zscandelimiter((halfword) (p), (bool) (r))
#define scandelimiter_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void mathradical(void);
#define mathradical_regmem register memoryword *mem=zmem;
void mathac(void);
#define mathac_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void appendchoices(void);
#define appendchoices_regmem register memoryword *mem=zmem;
halfword zfinmlist(halfword p);
#define finmlist(p) zfinmlist((halfword) (p))
#define finmlist_regmem register memoryword *mem=zmem;
void buildchoices(void);
#define buildchoices_regmem register memoryword *mem=zmem;
void subsup(void);
#define subsup_regmem register memoryword *mem=zmem;
void mathfraction(void);
#define mathfraction_regmem register memoryword *mem=zmem;
void mathleftright(void);
#define mathleftright_regmem register memoryword *mem=zmem;
void zappdisplay(halfword j, halfword b, scaled d);
#define appdisplay(j, b, d) zappdisplay((halfword) (j), (halfword) (b), (scaled) (d))
#define appdisplay_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void aftermath(void);
#define aftermath_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void resumeafterdisplay(void);
#define resumeafterdisplay_regmem register memoryword *eqtb=zeqtb;
void getrtoken(void);
#define getrtoken_regmem
void trapzeroglue(void);
#define trapzeroglue_regmem register memoryword *mem=zmem;
void zdoregistercommand(smallnumber a);
#define doregistercommand(a) zdoregistercommand((smallnumber) (a))
#define doregistercommand_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void alteraux(void);
#define alteraux_regmem
void alterprevgraf(void);
#define alterprevgraf_regmem
void alterpagesofar(void);
#define alterpagesofar_regmem
void alterinteger(void);
#define alterinteger_regmem
void alterboxdimen(void);
#define alterboxdimen_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void znewfont(smallnumber a);
#define newfont(a) znewfont((smallnumber) (a))
#define newfont_regmem register memoryword *eqtb=zeqtb;
void newinteraction(void);
#define newinteraction_regmem
void prefixedcommand(void);
#define prefixedcommand_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void doassignments(void);
#define doassignments_regmem
void openorclosein(void);
#define openorclosein_regmem
void issuemessage(void);
#define issuemessage_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void shiftcase(void);
#define shiftcase_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void showwhatever(void);
#define showwhatever_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void storefmtfile(void);
#define storefmtfile_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void znewwhatsit(smallnumber s, smallnumber w);
#define newwhatsit(s, w) znewwhatsit((smallnumber) (s), (smallnumber) (w))
#define newwhatsit_regmem register memoryword *mem=zmem;
void znewwritewhatsit(smallnumber w);
#define newwritewhatsit(w) znewwritewhatsit((smallnumber) (w))
#define newwritewhatsit_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void zcheckpdfoutput(strnumber s, bool iserror);
#define checkpdfoutput(s, iserror) zcheckpdfoutput((strnumber) (s), (bool) (iserror))
#define checkpdfoutput_regmem register memoryword *eqtb=zeqtb;
void scanpdfexttoks(void);
#define scanpdfexttoks_regmem
void comparestrings(void);
#define comparestrings_regmem
void zscaleimage(int n);
#define scaleimage(n) zscaleimage((int) (n))
#define scaleimage_regmem register memoryword *eqtb=zeqtb;
int scanpdfboxspec(void);
#define scanpdfboxspec_regmem
void scanaltrule(void);
#define scanaltrule_regmem register memoryword *mem=zmem;
void scanimage(void);
#define scanimage_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
halfword scanaction(void);
#define scanaction_regmem register memoryword *mem=zmem;
void znewannotwhatsit(smallnumber w, smallnumber s);
#define newannotwhatsit(w, s) znewannotwhatsit((smallnumber) (w), (smallnumber) (s))
#define newannotwhatsit_regmem register memoryword *mem=zmem;
int zoutlinelistcount(halfword p);
#define outlinelistcount(p) zoutlinelistcount((halfword) (p))
#define outlinelistcount_regmem
void scanthreadid(void);
#define scanthreadid_regmem register memoryword *mem=zmem;
halfword znewsnapnode(smallnumber s);
#define newsnapnode(s) znewsnapnode((smallnumber) (s))
#define newsnapnode_regmem register memoryword *mem=zmem;
halfword zconcattokens(halfword q, halfword r);
#define concattokens(q, r) zconcattokens((halfword) (q), (halfword) (r))
#define concattokens_regmem register memoryword *mem=zmem;
void pdfincludechars(void);
#define pdfincludechars_regmem
void glyphtounicode(void);
#define glyphtounicode_regmem
void zthreadtitle(int thread);
#define threadtitle(thread) zthreadtitle((int) (thread))
#define threadtitle_regmem
void zpdffixthread(int thread);
#define pdffixthread(thread) zpdffixthread((int) (thread))
#define pdffixthread_regmem register memoryword *eqtb=zeqtb;
void zoutthread(int thread);
#define outthread(thread) zoutthread((int) (thread))
#define outthread_regmem
void doextension(void);
#define doextension_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void fixlanguage(void);
#define fixlanguage_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void insertsrcspecial(void);
#define insertsrcspecial_regmem register memoryword *mem=zmem;
void appendsrcspecial(void);
#define appendsrcspecial_regmem register memoryword *mem=zmem;
void handlerightbrace(void);
#define handlerightbrace_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void maincontrol(void);
#define maincontrol_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void giveerrhelp(void);
#define giveerrhelp_regmem register memoryword *eqtb=zeqtb;
bool openfmtfile(void);
#define openfmtfile_regmem
bool loadfmtfile(void);
#define loadfmtfile_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void closefilesandterminate(void);
#define closefilesandterminate_regmem register memoryword *eqtb=zeqtb;
void finalcleanup(void);
#define finalcleanup_regmem register memoryword *mem=zmem;
void initprim(void);
#define initprim_regmem register memoryword *eqtb=zeqtb;
void debughelp(void);
#define debughelp_regmem register memoryword *mem=zmem, *eqtb=zeqtb;
void mainbody(void);
#define mainbody_regmem register memoryword *eqtb=zeqtb;
void scanfilenamebraced(void);
#define scanfilenamebraced_regmem register memoryword *mem=zmem;
strnumber getnullstr(void);
#define getnullstr_regmem
