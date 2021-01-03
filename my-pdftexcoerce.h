void initialize(void);
void println(void);
void zprintchar(unsigned char s);
#define printchar(s) zprintchar((unsigned char) (s))
void zprint(int s);
#define print(s) zprint((int) (s))
void zslowprint(int s);
#define slowprint(s) zslowprint((int) (s))
void zprintnl(strnumber s);
#define printnl(s) zprintnl((strnumber) (s))
void zprintesc(strnumber s);
#define printesc(s) zprintesc((strnumber) (s))
void zprintthedigs(eightbits k);
#define printthedigs(k) zprintthedigs((eightbits) (k))
void zprintint(long n);
#define printint(n) zprintint((long) (n))
void zprintcs(int p);
#define printcs(p) zprintcs((int) (p))
void zsprintcs(halfword p);
#define sprintcs(p) zsprintcs((halfword) (p))
void zprintfilename(int n, int a, int e);
#define printfilename(n, a, e) zprintfilename((int) (n), (int) (a), (int) (e))
void zprintsize(int s);
#define printsize(s) zprintsize((int) (s))
void zprintwritewhatsit(strnumber s, halfword p);
#define printwritewhatsit(s, p) zprintwritewhatsit((strnumber) (s), (halfword) (p))
void zprintsanum(halfword q);
#define printsanum(q) zprintsanum((halfword) (q))
void zprintcsnames(int hstart, int hfinish);
#define printcsnames(hstart, hfinish) zprintcsnames((int) (hstart), (int) (hfinish))
void printfileline(void);
unsigned char zzreadbuffer(int *i);
#define readbuffer(i) zzreadbuffer((int *) &(i))
void zzprintbuffer(int *i);
#define printbuffer(i) zzprintbuffer((int *) &(i))
WEB2C_NORETURN void jumpout(void);
void error(void);
WEB2C_NORETURN void zfatalerror(strnumber s);
#define fatalerror(s) zfatalerror((strnumber) (s))
WEB2C_NORETURN void zoverflow(strnumber s, int n);
#define overflow(s, n) zoverflow((strnumber) (s), (int) (n))
WEB2C_NORETURN void zconfusion(strnumber s);
#define confusion(s) zconfusion((strnumber) (s))
bool initterminal(void);
strnumber makestring(void);
bool zstreqbuf(strnumber s, int k);
#define streqbuf(s, k) zstreqbuf((strnumber) (s), (int) (k))
bool zstreqstr(strnumber s, strnumber t);
#define streqstr(s, t) zstreqstr((strnumber) (s), (strnumber) (t))
strnumber zsearchstring(strnumber search);
#define searchstring(search) zsearchstring((strnumber) (search))
strnumber slowmakestring(void);
bool getstringsstarted(void);
void zprinttwo(int n);
#define printtwo(n) zprinttwo((int) (n))
void zprinthex(int n);
#define printhex(n) zprinthex((int) (n))
void zprintromanint(int n);
#define printromanint(n) zprintromanint((int) (n))
void printcurrentstring(void);
void terminput(void);
void zinterror(int n);
#define interror(n) zinterror((int) (n))
void normalizeselector(void);
void pauseforinstructions(void);
int zhalf(int x);
#define half(x) zhalf((int) (x))
scaled zrounddecimals(smallnumber k);
#define rounddecimals(k) zrounddecimals((smallnumber) (k))
void zprintscaled(scaled s);
#define printscaled(s) zprintscaled((scaled) (s))
scaled zmultandadd(int n, scaled x, scaled y, scaled maxanswer);
#define multandadd(n, x, y, maxanswer) zmultandadd((int) (n), (scaled) (x), (scaled) (y), (scaled) (maxanswer))
scaled zxovern(scaled x, int n);
#define xovern(x, n) zxovern((scaled) (x), (int) (n))
scaled zxnoverd(scaled x, int n, int d);
#define xnoverd(x, n, d) zxnoverd((scaled) (x), (int) (n), (int) (d))
halfword zbadness(scaled t, scaled s);
#define badness(t, s) zbadness((scaled) (t), (scaled) (s))
int zmakefrac(int p, int q);
#define makefrac(p, q) zmakefrac((int) (p), (int) (q))
int ztakefrac(int q, int f);
#define takefrac(q, f) ztakefrac((int) (q), (int) (f))
int zmlog(int x);
#define mlog(x) zmlog((int) (x))
int zabvscd(int a, int b, int c, int d);
#define abvscd(a, b, c, d) zabvscd((int) (a), (int) (b), (int) (c), (int) (d))
void newrandoms(void);
void zinitrandoms(int seed);
#define initrandoms(seed) zinitrandoms((int) (seed))
int zunifrand(int x);
#define unifrand(x) zunifrand((int) (x))
int normrand(void);
void zprintword(memoryword w);
#define printword(w) zprintword((memoryword) (w))
void zshowtokenlist(int p, int q, int l);
#define showtokenlist(p, q, l) zshowtokenlist((int) (p), (int) (q), (int) (l))
void runaway(void);
halfword getavail(void);
void zflushlist(halfword p);
#define flushlist(p) zflushlist((halfword) (p))
halfword zgetnode(int s);
#define getnode(s) zgetnode((int) (s))
void zfreenode(halfword p, halfword s);
#define freenode(p, s) zfreenode((halfword) (p), (halfword) (s))
void sortavail(void);
halfword newnullbox(void);
halfword newrule(void);
halfword znewligature(internalfontnumber f, quarterword c, halfword q);
#define newligature(f, c, q) znewligature((internalfontnumber) (f), (quarterword) (c), (halfword) (q))
halfword znewligitem(quarterword c);
#define newligitem(c) znewligitem((quarterword) (c))
halfword newdisc(void);
halfword znewmath(scaled w, smallnumber s);
#define newmath(w, s) znewmath((scaled) (w), (smallnumber) (s))
halfword znewspec(halfword p);
#define newspec(p) znewspec((halfword) (p))
halfword znewparamglue(smallnumber n);
#define newparamglue(n) znewparamglue((smallnumber) (n))
halfword znewglue(halfword q);
#define newglue(q) znewglue((halfword) (q))
halfword znewskipparam(smallnumber n);
#define newskipparam(n) znewskipparam((smallnumber) (n))
halfword znewkern(scaled w);
#define newkern(w) znewkern((scaled) (w))
halfword znewpenalty(int m);
#define newpenalty(m) znewpenalty((int) (m))
void zcheckmem(bool printlocs);
#define checkmem(printlocs) zcheckmem((bool) (printlocs))
void zsearchmem(halfword p);
#define searchmem(p) zsearchmem((halfword) (p))
void zpdferror(strnumber t, strnumber p);
#define pdferror(t, p) zpdferror((strnumber) (t), (strnumber) (p))
void zpdfwarning(strnumber t, strnumber p, bool prependnl, bool appendnl);
#define pdfwarning(t, p, prependnl, appendnl) zpdfwarning((strnumber) (t), (strnumber) (p), (bool) (prependnl), (bool) (appendnl))
void zpdfosgetosbuf(int s);
#define pdfosgetosbuf(s) zpdfosgetosbuf((int) (s))
void removelastspace(void);
void zpdfprintoctal(int n);
#define pdfprintoctal(n) zpdfprintoctal((int) (n))
void zpdfprintchar(internalfontnumber f, int c);
#define pdfprintchar(f, c) zpdfprintchar((internalfontnumber) (f), (int) (c))
void zpdfprint(strnumber s);
#define pdfprint(s) zpdfprint((strnumber) (s))
bool zstrinstr(strnumber s, strnumber r, int i);
#define strinstr(s, r, i) zstrinstr((strnumber) (s), (strnumber) (r), (int) (i))
void zpdfprintint(long n);
#define pdfprintint(n) zpdfprintint((long) (n))
void zpdfprinttwo(int n);
#define pdfprinttwo(n) zpdfprinttwo((int) (n))
strnumber ztokenstostring(halfword p);
#define tokenstostring(p) ztokenstostring((halfword) (p))
scaled zdividescaled(scaled s, scaled m, int dd);
#define dividescaled(s, m, dd) zdividescaled((scaled) (s), (scaled) (m), (int) (dd))
scaled zroundxnoverd(scaled x, int n, int d);
#define roundxnoverd(x, n, d) zroundxnoverd((scaled) (x), (int) (n), (int) (d))
void zappenddestname(strnumber s, int n);
#define appenddestname(s, n) zappenddestname((strnumber) (s), (int) (n))
void zpdfcreateobj(int t, int i);
#define pdfcreateobj(t, i) zpdfcreateobj((int) (t), (int) (i))
int pdfnewobjnum(void);
void zpdfosswitch(bool pdfos);
#define pdfosswitch(pdfos) zpdfosswitch((bool) (pdfos))
void zpdfosprepareobj(int i, int pdfoslevel);
#define pdfosprepareobj(i, pdfoslevel) zpdfosprepareobj((int) (i), (int) (pdfoslevel))
void zpdfbeginobj(int i, int pdfoslevel);
#define pdfbeginobj(i, pdfoslevel) zpdfbeginobj((int) (i), (int) (pdfoslevel))
void zpdfnewobj(int t, int i, int pdfos);
#define pdfnewobj(t, i, pdfos) zpdfnewobj((int) (t), (int) (i), (int) (pdfos))
void pdfendobj(void);
void zpdfbegindict(int i, int pdfoslevel);
#define pdfbegindict(i, pdfoslevel) zpdfbegindict((int) (i), (int) (pdfoslevel))
void zpdfnewdict(int t, int i, int pdfos);
#define pdfnewdict(t, i, pdfos) zpdfnewdict((int) (t), (int) (i), (int) (pdfos))
void pdfenddict(void);
void pdfoswriteobjstream(void);
halfword zappendptr(halfword p, int i);
#define appendptr(p, i) zappendptr((halfword) (p), (int) (i))
halfword zpdflookuplist(halfword p, int i);
#define pdflookuplist(p, i) zpdflookuplist((halfword) (p), (int) (i))
halfword zprevrightmost(halfword s, halfword e);
#define prevrightmost(s, e) zprevrightmost((halfword) (s), (halfword) (e))
void zpdfcheckobj(int t, int n);
#define pdfcheckobj(t, n) zpdfcheckobj((int) (t), (int) (n))
int zfindobj(int t, int i, bool byname);
#define findobj(t, i, byname) zfindobj((int) (t), (int) (i), (bool) (byname))
void zflushstr(strnumber s);
#define flushstr(s) zflushstr((strnumber) (s))
int zgetobj(int t, int i, bool byname);
#define getobj(t, i, byname) zgetobj((int) (t), (int) (i), (bool) (byname))
int getmicrointerval(void);
void zprintfontidentifier(internalfontnumber f);
#define printfontidentifier(f) zprintfontidentifier((internalfontnumber) (f))
void zshortdisplay(int p);
#define shortdisplay(p) zshortdisplay((int) (p))
void zprintfontandchar(int p);
#define printfontandchar(p) zprintfontandchar((int) (p))
void zprintmark(int p);
#define printmark(p) zprintmark((int) (p))
void zprintruledimen(scaled d);
#define printruledimen(d) zprintruledimen((scaled) (d))
void zprintglue(scaled d, int order, strnumber s);
#define printglue(d, order, s) zprintglue((scaled) (d), (int) (order), (strnumber) (s))
void zprintspec(int p, strnumber s);
#define printspec(p, s) zprintspec((int) (p), (strnumber) (s))
void zprintfamandchar(halfword p);
#define printfamandchar(p) zprintfamandchar((halfword) (p))
void zprintdelimiter(halfword p);
#define printdelimiter(p) zprintdelimiter((halfword) (p))
void zprintsubsidiarydata(halfword p, unsigned char c);
#define printsubsidiarydata(p, c) zprintsubsidiarydata((halfword) (p), (unsigned char) (c))
void zprintstyle(int c);
#define printstyle(c) zprintstyle((int) (c))
void zprintskipparam(int n);
#define printskipparam(n) zprintskipparam((int) (n))
void zshownodelist(int p);
#define shownodelist(p) zshownodelist((int) (p))
void zshowbox(halfword p);
#define showbox(p) zshowbox((halfword) (p))
void zdeletetokenref(halfword p);
#define deletetokenref(p) zdeletetokenref((halfword) (p))
void zdeleteglueref(halfword p);
#define deleteglueref(p) zdeleteglueref((halfword) (p))
void zflushnodelist(halfword p);
#define flushnodelist(p) zflushnodelist((halfword) (p))
halfword zcopynodelist(halfword p);
#define copynodelist(p) zcopynodelist((halfword) (p))
void zprintmode(int m);
#define printmode(m) zprintmode((int) (m))
void zprintinmode(int m);
#define printinmode(m) zprintinmode((int) (m))
void pushnest(void);
void popnest(void);
void showactivities(void);
void zprintparam(int n);
#define printparam(n) zprintparam((int) (n))
void begindiagnostic(void);
void zenddiagnostic(bool blankline);
#define enddiagnostic(blankline) zenddiagnostic((bool) (blankline))
void zprintlengthparam(int n);
#define printlengthparam(n) zprintlengthparam((int) (n))
void zprintcmdchr(quarterword cmd, halfword chrcode);
#define printcmdchr(cmd, chrcode) zprintcmdchr((quarterword) (cmd), (halfword) (chrcode))
void zshoweqtb(halfword n);
#define showeqtb(n) zshoweqtb((halfword) (n))
halfword zidlookup(int j, int l);
#define idlookup(j, l) zidlookup((int) (j), (int) (l))
halfword zprimlookup(strnumber s);
#define primlookup(s) zprimlookup((strnumber) (s))
void zprimitive(strnumber s, quarterword c, halfword o);
#define primitive(s, c, o) zprimitive((strnumber) (s), (quarterword) (c), (halfword) (o))
void zrestoretrace(halfword p, strnumber s);
#define restoretrace(p, s) zrestoretrace((halfword) (p), (strnumber) (s))
void zprintgroup(bool e);
#define printgroup(e) zprintgroup((bool) (e))
void zgrouptrace(bool e);
#define grouptrace(e) zgrouptrace((bool) (e))
bool pseudoinput(void);
void pseudoclose(void);
void groupwarning(void);
void ifwarning(void);
void filewarning(void);
void zdeletesaref(halfword q);
#define deletesaref(q) zdeletesaref((halfword) (q))
void zshowsa(halfword p, strnumber s);
#define showsa(p, s) zshowsa((halfword) (p), (strnumber) (s))
void zsasave(halfword p);
#define sasave(p) zsasave((halfword) (p))
void zsadestroy(halfword p);
#define sadestroy(p) zsadestroy((halfword) (p))
void zsadef(halfword p, halfword e);
#define sadef(p, e) zsadef((halfword) (p), (halfword) (e))
void zsawdef(halfword p, int w);
#define sawdef(p, w) zsawdef((halfword) (p), (int) (w))
void zgsadef(halfword p, halfword e);
#define gsadef(p, e) zgsadef((halfword) (p), (halfword) (e))
void zgsawdef(halfword p, int w);
#define gsawdef(p, w) zgsawdef((halfword) (p), (int) (w))
void sarestore(void);
void znewsavelevel(groupcode c);
#define newsavelevel(c) znewsavelevel((groupcode) (c))
void zeqdestroy(memoryword w);
#define eqdestroy(w) zeqdestroy((memoryword) (w))
void zeqsave(halfword p, quarterword l);
#define eqsave(p, l) zeqsave((halfword) (p), (quarterword) (l))
void zeqdefine(halfword p, quarterword t, halfword e);
#define eqdefine(p, t, e) zeqdefine((halfword) (p), (quarterword) (t), (halfword) (e))
void zeqworddefine(halfword p, int w);
#define eqworddefine(p, w) zeqworddefine((halfword) (p), (int) (w))
void zgeqdefine(halfword p, quarterword t, halfword e);
#define geqdefine(p, t, e) zgeqdefine((halfword) (p), (quarterword) (t), (halfword) (e))
void zgeqworddefine(halfword p, int w);
#define geqworddefine(p, w) zgeqworddefine((halfword) (p), (int) (w))
void zsaveforafter(halfword t);
#define saveforafter(t) zsaveforafter((halfword) (t))
void unsave(void);
void preparemag(void);
void ztokenshow(halfword p);
#define tokenshow(p) ztokenshow((halfword) (p))
void printmeaning(void);
void showcurcmdchr(void);
void showcontext(void);
void zbegintokenlist(halfword p, quarterword t);
#define begintokenlist(p, t) zbegintokenlist((halfword) (p), (quarterword) (t))
void endtokenlist(void);
void backinput(void);
void backerror(void);
void inserror(void);
void beginfilereading(void);
void endfilereading(void);
void clearforerrorprompt(void);
void mubyteupdate(void);
void zdisposemunode(halfword p);
#define disposemunode(p) zdisposemunode((halfword) (p))
void zdisposemutableout(halfword cs);
#define disposemutableout(cs) zdisposemutableout((halfword) (cs))
void checkoutervalidity(void);
void getnext(void);
void firmuptheline(void);
void gettoken(void);
void macrocall(void);
void insertrelax(void);
void znewindex(quarterword i, halfword q);
#define newindex(i, q) znewindex((quarterword) (i), (halfword) (q))
void zfindsaelement(smallnumber t, halfword n, bool w);
#define findsaelement(t, n, w) zfindsaelement((smallnumber) (t), (halfword) (n), (bool) (w))
void expand(void);
void getxtoken(void);
void xtoken(void);
void scanleftbrace(void);
void scanoptionalequals(void);
bool zscankeyword(strnumber s);
#define scankeyword(s) zscankeyword((strnumber) (s))
void muerror(void);
void scaneightbitint(void);
void scancharnum(void);
void scanfourbitint(void);
void scanfifteenbitint(void);
void scantwentysevenbitint(void);
void scanregisternum(void);
void scanfourbitintor18(void);
void getxorprotected(void);
int zeffectivechar(bool errp, internalfontnumber f, quarterword c);
#define effectivechar(errp, f, c) zeffectivechar((bool) (errp), (internalfontnumber) (f), (quarterword) (c))
int ztestnoligatures(internalfontnumber f);
#define testnoligatures(f) ztestnoligatures((internalfontnumber) (f))
int zgettagcode(internalfontnumber f, eightbits c);
#define gettagcode(f, c) zgettagcode((internalfontnumber) (f), (eightbits) (c))
void scanfontident(void);
void zfindfontdimen(bool writing);
#define findfontdimen(writing) zfindfontdimen((bool) (writing))
void zscansomethinginternal(smallnumber level, bool negative);
#define scansomethinginternal(level, negative) zscansomethinginternal((smallnumber) (level), (bool) (negative))
void scanint(void);
void zscandimen(bool mu, bool inf, bool shortcut);
#define scandimen(mu, inf, shortcut) zscandimen((bool) (mu), (bool) (inf), (bool) (shortcut))
void zscanglue(smallnumber level);
#define scanglue(level) zscanglue((smallnumber) (level))
int zaddorsub(int x, int y, int maxanswer, bool negative);
#define addorsub(x, y, maxanswer, negative) zaddorsub((int) (x), (int) (y), (int) (maxanswer), (bool) (negative))
int zquotient(int n, int d);
#define quotient(n, d) zquotient((int) (n), (int) (d))
int zfract(int x, int n, int d, int maxanswer);
#define fract(x, n, d, maxanswer) zfract((int) (x), (int) (n), (int) (d), (int) (maxanswer))
void scanexpr(void);
void scannormalglue(void);
void scanmuglue(void);
halfword scanrulespec(void);
void scangeneraltext(void);
void pseudostart(void);
halfword zstrtoks(poolpointer b);
#define strtoks(b) zstrtoks((poolpointer) (b))
halfword thetoks(void);
void insthetoks(void);
void convtoks(void);
halfword zscantoks(bool macrodef, bool xpand);
#define scantoks(macrodef, xpand) zscantoks((bool) (macrodef), (bool) (xpand))
void zreadtoks(int n, halfword r, halfword j);
#define readtoks(n, r, j) zreadtoks((int) (n), (halfword) (r), (halfword) (j))
void passtext(void);
void zchangeiflimit(smallnumber l, halfword p);
#define changeiflimit(l, p) zchangeiflimit((smallnumber) (l), (halfword) (p))
void conditional(void);
void beginname(void);
bool zmorename(unsigned char c);
#define morename(c) zmorename((unsigned char) (c))
void endname(void);
void zpackfilename(strnumber n, strnumber a, strnumber e);
#define packfilename(n, a, e) zpackfilename((strnumber) (n), (strnumber) (a), (strnumber) (e))
void zpackbufferedname(smallnumber n, int a, int b);
#define packbufferedname(n, a, b) zpackbufferedname((smallnumber) (n), (int) (a), (int) (b))
strnumber makenamestring(void);
strnumber zamakenamestring(alphafile f);
#define amakenamestring(f) zamakenamestring((alphafile) (f))
strnumber zbmakenamestring(bytefile f);
#define bmakenamestring(f) zbmakenamestring((bytefile) (f))
strnumber zzwmakenamestring(wordfile * f);
#define wmakenamestring(f) zzwmakenamestring((wordfile *) &(f))
void scanfilename(void);
void zpackjobname(strnumber s);
#define packjobname(s) zpackjobname((strnumber) (s))
void zpromptfilename(strnumber s, strnumber e);
#define promptfilename(s, e) zpromptfilename((strnumber) (s), (strnumber) (e))
void openlogfile(void);
void startinput(void);
fourquarters zeffectivecharinfo(internalfontnumber f, quarterword c);
#define effectivecharinfo(f, c) zeffectivecharinfo((internalfontnumber) (f), (quarterword) (c))
internalfontnumber zreadfontinfo(halfword u, strnumber nom, strnumber aire, scaled s);
#define readfontinfo(u, nom, aire, s) zreadfontinfo((halfword) (u), (strnumber) (nom), (strnumber) (aire), (scaled) (s))
scaled zstorescaledf(scaled sq, scaled z);
#define storescaledf(sq, z) zstorescaledf((scaled) (sq), (scaled) (z))
void zcharwarning(internalfontnumber f, eightbits c);
#define charwarning(f, c) zcharwarning((internalfontnumber) (f), (eightbits) (c))
halfword znewcharacter(internalfontnumber f, eightbits c);
#define newcharacter(f, c) znewcharacter((internalfontnumber) (f), (eightbits) (c))
void dviswap(void);
void zdvifour(int x);
#define dvifour(x) zdvifour((int) (x))
void zdvipop(int l);
#define dvipop(l) zdvipop((int) (l))
void zdvifontdef(internalfontnumber f);
#define dvifontdef(f) zdvifontdef((internalfontnumber) (f))
void zmovement(scaled w, eightbits o);
#define movement(w, o) zmovement((scaled) (w), (eightbits) (o))
void zprunemovements(int l);
#define prunemovements(l) zprunemovements((int) (l))
void zspecialout(halfword p);
#define specialout(p) zspecialout((halfword) (p))
void zwriteout(halfword p);
#define writeout(p) zwriteout((halfword) (p))
void zoutwhat(halfword p);
#define outwhat(p) zoutwhat((halfword) (p))
halfword znewedge(smallnumber s, scaled w);
#define newedge(s, w) znewedge((smallnumber) (s), (scaled) (w))
halfword zzreverse(halfword thisbox, halfword t, scaled * curg, double *curglue);
#define reverse(thisbox, t, curg, curglue) zzreverse((halfword) (thisbox), (halfword) (t), (scaled *) &(curg), (double *) &(curglue))
void hlistout(void);
void vlistout(void);
void zdvishipout(halfword p);
#define dvishipout(p) zdvishipout((halfword) (p))
int getpdfcompresslevel(void);
int getpdfsuppresswarningdupmap(void);
int getpdfsuppresswarningpagegroup(void);
int getpdfsuppressptexinfo(void);
int getpdfomitcharset(void);
internalfontnumber getnullfont(void);
internalfontnumber getfontbase(void);
halfword getnullcs(void);
halfword getnullptr(void);
int zgettexint(int code);
#define gettexint(code) zgettexint((int) (code))
scaled zgettexdimen(int code);
#define gettexdimen(code) zgettexdimen((int) (code))
scaled zgetxheight(internalfontnumber f);
#define getxheight(f) zgetxheight((internalfontnumber) (f))
scaled zgetcharwidth(internalfontnumber f, eightbits c);
#define getcharwidth(f, c) zgetcharwidth((internalfontnumber) (f), (eightbits) (c))
scaled zgetcharheight(internalfontnumber f, eightbits c);
#define getcharheight(f, c) zgetcharheight((internalfontnumber) (f), (eightbits) (c))
scaled zgetchardepth(internalfontnumber f, eightbits c);
#define getchardepth(f, c) zgetchardepth((internalfontnumber) (f), (eightbits) (c))
scaled zgetquad(internalfontnumber f);
#define getquad(f) zgetquad((internalfontnumber) (f))
scaled zgetslant(internalfontnumber f);
#define getslant(f) zgetslant((internalfontnumber) (f))
internalfontnumber newdummyfont(void);
void zshortdisplayn(int p, int m);
#define shortdisplayn(p, m) zshortdisplayn((int) (p), (int) (m))
int zpdfgetmem(int s);
#define pdfgetmem(s) zpdfgetmem((int) (s))
int zfixint(int val, int min, int max);
#define fixint(val, min, max) zfixint((int) (val), (int) (min), (int) (max))
void checkpdfversion(void);
void ensurepdfopen(void);
void pdfflush(void);
void pdfbeginstream(void);
void pdfendstream(void);
void zadvcharwidth(internalfontnumber f, eightbits c);
#define advcharwidth(f, c) zadvcharwidth((internalfontnumber) (f), (eightbits) (c))
void zpdfprintreal(int m, int d);
#define pdfprintreal(m, d) zpdfprintreal((int) (m), (int) (d))
void zpdfprintbp(scaled s);
#define pdfprintbp(s) zpdfprintbp((scaled) (s))
void zpdfprintmagbp(scaled s);
#define pdfprintmagbp(s) zpdfprintmagbp((scaled) (s))
void zpdfsetorigin(scaled h, scaled v);
#define pdfsetorigin(h, v) zpdfsetorigin((scaled) (h), (scaled) (v))
void zpdfsetorigintemp(scaled h, scaled v);
#define pdfsetorigintemp(h, v) zpdfsetorigintemp((scaled) (h), (scaled) (v))
void pdfendstring(void);
void pdfendstringnl(void);
void zpdfsettextmatrix(scaled v, scaled vout, internalfontnumber f);
#define pdfsettextmatrix(v, vout, f) zpdfsettextmatrix((scaled) (v), (scaled) (vout), (internalfontnumber) (f))
void zpdfusefont(internalfontnumber f, int fontnum);
#define pdfusefont(f, fontnum) zpdfusefont((internalfontnumber) (f), (int) (fontnum))
void zpdfinitfont(internalfontnumber f);
#define pdfinitfont(f) zpdfinitfont((internalfontnumber) (f))
void pdfinitfontcurval(void);
void zpdfsetfont(internalfontnumber f);
#define pdfsetfont(f) zpdfsetfont((internalfontnumber) (f))
void pdfbegintext(void);
void pdfreaddummyfont(void);
void pdfinsertinterwordspace(void);
void zpdfbeginstring(internalfontnumber f);
#define pdfbeginstring(f) zpdfbeginstring((internalfontnumber) (f))
void pdfinsertfakespace(void);
void pdfendtext(void);
void zpdfsetrule(scaled x, scaled y, scaled w, scaled h);
#define pdfsetrule(x, y, w, h) zpdfsetrule((scaled) (x), (scaled) (y), (scaled) (w), (scaled) (h))
void zpdfrectangle(scaled left, scaled top, scaled right, scaled bottom);
#define pdfrectangle(left, top, right, bottom) zpdfrectangle((scaled) (left), (scaled) (top), (scaled) (right), (scaled) (bottom))
void zslowprintsubstr(int s, int maxlen);
#define slowprintsubstr(s, maxlen) zslowprintsubstr((int) (s), (int) (maxlen))
void zliteral(strnumber s, int literalmode, bool warn);
#define literal(s, literalmode, warn) zliteral((strnumber) (s), (int) (literalmode), (bool) (warn))
void zpdfprintfwint(long n, int w);
#define pdfprintfwint(n, w) zpdfprintfwint((long) (n), (int) (w))
void zpdfoutbytes(long n, int w);
#define pdfoutbytes(n, w) zpdfoutbytes((long) (n), (int) (w))
void zpdfintentry(strnumber s, int v);
#define pdfintentry(s, v) zpdfintentry((strnumber) (s), (int) (v))
void zpdfintentryln(strnumber s, int v);
#define pdfintentryln(s, v) zpdfintentryln((strnumber) (s), (int) (v))
void zpdfindirect(strnumber s, int o);
#define pdfindirect(s, o) zpdfindirect((strnumber) (s), (int) (o))
void zpdfindirectln(strnumber s, int o);
#define pdfindirectln(s, o) zpdfindirectln((strnumber) (s), (int) (o))
void zpdfprintstr(strnumber s);
#define pdfprintstr(s) zpdfprintstr((strnumber) (s))
void zpdfprintstrln(strnumber s);
#define pdfprintstrln(s) zpdfprintstrln((strnumber) (s))
void zpdfstrentry(strnumber s, strnumber v);
#define pdfstrentry(s, v) zpdfstrentry((strnumber) (s), (strnumber) (v))
void zpdfstrentryln(strnumber s, strnumber v);
#define pdfstrentryln(s, v) zpdfstrentryln((strnumber) (s), (strnumber) (v))
void zsettagcode(internalfontnumber f, eightbits c, int i);
#define settagcode(f, c, i) zsettagcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetnoligatures(internalfontnumber f);
#define setnoligatures(f) zsetnoligatures((internalfontnumber) (f))
int zinitfontbase(int v);
#define initfontbase(v) zinitfontbase((int) (v))
void zsetlpcode(internalfontnumber f, eightbits c, int i);
#define setlpcode(f, c, i) zsetlpcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetrpcode(internalfontnumber f, eightbits c, int i);
#define setrpcode(f, c, i) zsetrpcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetefcode(internalfontnumber f, eightbits c, int i);
#define setefcode(f, c, i) zsetefcode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetknbscode(internalfontnumber f, eightbits c, int i);
#define setknbscode(f, c, i) zsetknbscode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetstbscode(internalfontnumber f, eightbits c, int i);
#define setstbscode(f, c, i) zsetstbscode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetshbscode(internalfontnumber f, eightbits c, int i);
#define setshbscode(f, c, i) zsetshbscode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetknbccode(internalfontnumber f, eightbits c, int i);
#define setknbccode(f, c, i) zsetknbccode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zsetknaccode(internalfontnumber f, eightbits c, int i);
#define setknaccode(f, c, i) zsetknaccode((internalfontnumber) (f), (eightbits) (c), (int) (i))
void zadjustinterwordglue(halfword p, halfword g);
#define adjustinterwordglue(p, g) zadjustinterwordglue((halfword) (p), (halfword) (g))
halfword zgetautokern(internalfontnumber f, halfword l, halfword r);
#define getautokern(f, l, r) zgetautokern((internalfontnumber) (f), (halfword) (l), (halfword) (r))
strnumber zexpandfontname(internalfontnumber f, int e);
#define expandfontname(f, e) zexpandfontname((internalfontnumber) (f), (int) (e))
internalfontnumber zautoexpandfont(internalfontnumber f, int e);
#define autoexpandfont(f, e) zautoexpandfont((internalfontnumber) (f), (int) (e))
void zcopyexpandparams(internalfontnumber k, internalfontnumber f, int e);
#define copyexpandparams(k, f, e) zcopyexpandparams((internalfontnumber) (k), (internalfontnumber) (f), (int) (e))
internalfontnumber ztfmlookup(strnumber s, scaled fs);
#define tfmlookup(s, fs) ztfmlookup((strnumber) (s), (scaled) (fs))
internalfontnumber zloadexpandfont(internalfontnumber f, int e);
#define loadexpandfont(f, e) zloadexpandfont((internalfontnumber) (f), (int) (e))
int zfixexpandvalue(internalfontnumber f, int e);
#define fixexpandvalue(f, e) zfixexpandvalue((internalfontnumber) (f), (int) (e))
internalfontnumber zgetexpandfont(internalfontnumber f, int e);
#define getexpandfont(f, e) zgetexpandfont((internalfontnumber) (f), (int) (e))
internalfontnumber zexpandfont(internalfontnumber f, int e);
#define expandfont(f, e) zexpandfont((internalfontnumber) (f), (int) (e))
void zsetexpandparams(internalfontnumber f, bool autoexpand, int stretchlimit, int shrinklimit, int fontstep, int expandratio);
#define setexpandparams(f, autoexpand, stretchlimit, shrinklimit, fontstep, expandratio) zsetexpandparams((internalfontnumber) (f), (bool) (autoexpand), (int) (stretchlimit), (int) (shrinklimit), (int) (fontstep), (int) (expandratio))
void zvfexpandlocalfonts(internalfontnumber f);
#define vfexpandlocalfonts(f) zvfexpandlocalfonts((internalfontnumber) (f))
void readexpandfont(void);
internalfontnumber zletterspacefont(halfword u, internalfontnumber f, int e);
#define letterspacefont(u, f, e) zletterspacefont((halfword) (u), (internalfontnumber) (f), (int) (e))
void znewletterspacedfont(smallnumber a);
#define newletterspacedfont(a) znewletterspacedfont((smallnumber) (a))
bool zisletterspacedfont(internalfontnumber f);
#define isletterspacedfont(f) zisletterspacedfont((internalfontnumber) (f))
internalfontnumber zcopyfontinfo(internalfontnumber f);
#define copyfontinfo(f) zcopyfontinfo((internalfontnumber) (f))
void zmakefontcopy(smallnumber a);
#define makefontcopy(a) zmakefontcopy((smallnumber) (a))
void zvferror(strnumber filename, strnumber msg);
#define vferror(filename, msg) zvferror((strnumber) (filename), (strnumber) (msg))
eightbits vfbyte(void);
int zvfreadsigned(int k);
#define vfreadsigned(k) zvfreadsigned((int) (k))
int zvfreadunsigned(int k);
#define vfreadunsigned(k) zvfreadunsigned((int) (k))
void zvflocalfontwarning(internalfontnumber f, internalfontnumber k, strnumber s);
#define vflocalfontwarning(f, k, s) zvflocalfontwarning((internalfontnumber) (f), (internalfontnumber) (k), (strnumber) (s))
internalfontnumber zvfdeffont(internalfontnumber f);
#define vfdeffont(f) zvfdeffont((internalfontnumber) (f))
void zdovf(internalfontnumber f);
#define dovf(f) zdovf((internalfontnumber) (f))
void pdfcheckvfcurval(void);
bool zautoexpandvf(internalfontnumber f);
#define autoexpandvf(f) zautoexpandvf((internalfontnumber) (f))
int zpacketreadsigned(int k);
#define packetreadsigned(k) zpacketreadsigned((int) (k))
int zpacketreadunsigned(int k);
#define packetreadunsigned(k) zpacketreadunsigned((int) (k))
scaled zpacketscaled(int k, scaled fs);
#define packetscaled(k, fs) zpacketscaled((int) (k), (scaled) (fs))
void zdovfpacket(internalfontnumber vff, eightbits c);
#define dovfpacket(vff, c) zdovfpacket((internalfontnumber) (vff), (eightbits) (c))
void zpdfoutliteral(halfword p);
#define pdfoutliteral(p) zpdfoutliteral((halfword) (p))
void zpdfoutcolorstack(halfword p);
#define pdfoutcolorstack(p) zpdfoutcolorstack((halfword) (p))
void pdfoutcolorstackstartpage(void);
void zpdfoutsetmatrix(halfword p);
#define pdfoutsetmatrix(p) zpdfoutsetmatrix((halfword) (p))
void zpdfoutsave(halfword p);
#define pdfoutsave(p) zpdfoutsave((halfword) (p))
void zpdfoutrestore(halfword p);
#define pdfoutrestore(p) zpdfoutrestore((halfword) (p))
void zpdfspecial(halfword p);
#define pdfspecial(p) zpdfspecial((halfword) (p))
void zpdfprinttoks(halfword p);
#define pdfprinttoks(p) zpdfprinttoks((halfword) (p))
void zpdfprinttoksln(halfword p);
#define pdfprinttoksln(p) zpdfprinttoksln((halfword) (p))
void zpdfwriteobj(int n);
#define pdfwriteobj(n) zpdfwriteobj((int) (n))
void zflushwhatsitnode(halfword p, smallnumber s);
#define flushwhatsitnode(p, s) zflushwhatsitnode((halfword) (p), (smallnumber) (s))
void zpdfwriteimage(int n);
#define pdfwriteimage(n) zpdfwriteimage((int) (n))
void zpdfprintrectspec(halfword r);
#define pdfprintrectspec(r) zpdfprintrectspec((halfword) (r))
void zwarndestdup(int id, smallnumber byname, strnumber s1, strnumber s2);
#define warndestdup(id, byname, s1, s2) zwarndestdup((int) (id), (smallnumber) (byname), (strnumber) (s1), (strnumber) (s2))
void zwriteaction(halfword p);
#define writeaction(p) zwriteaction((halfword) (p))
void zsetrectdimens(halfword p, halfword parentbox, scaled x, scaled y, scaled w, scaled h, scaled d, scaled margin);
#define setrectdimens(p, parentbox, x, y, w, h, d, margin) zsetrectdimens((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y), (scaled) (w), (scaled) (h), (scaled) (d), (scaled) (margin))
void zdoannot(halfword p, halfword parentbox, scaled x, scaled y);
#define doannot(p, parentbox, x, y) zdoannot((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
void zpushlinklevel(halfword p);
#define pushlinklevel(p) zpushlinklevel((halfword) (p))
void poplinklevel(void);
void zdolink(halfword p, halfword parentbox, scaled x, scaled y);
#define dolink(p, parentbox, x, y) zdolink((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
void endlink(void);
void zappendlink(halfword parentbox, scaled x, scaled y, smallnumber i);
#define appendlink(parentbox, x, y, i) zappendlink((halfword) (parentbox), (scaled) (x), (scaled) (y), (smallnumber) (i))
void zappendbead(halfword p);
#define appendbead(p) zappendbead((halfword) (p))
void zdothread(halfword p, halfword parentbox, scaled x, scaled y);
#define dothread(p, parentbox, x, y) zdothread((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
void zappendthread(halfword parentbox, scaled x, scaled y);
#define appendthread(parentbox, x, y) zappendthread((halfword) (parentbox), (scaled) (x), (scaled) (y))
void endthread(void);
int zopensubentries(halfword p);
#define opensubentries(p) zopensubentries((halfword) (p))
void zdodest(halfword p, halfword parentbox, scaled x, scaled y);
#define dodest(p, parentbox, x, y) zdodest((halfword) (p), (halfword) (parentbox), (scaled) (x), (scaled) (y))
void zoutform(halfword p);
#define outform(p) zoutform((halfword) (p))
void zoutimage(halfword p);
#define outimage(p) zoutimage((halfword) (p))
scaled zgapamount(halfword p, scaled curpos);
#define gapamount(p, curpos) zgapamount((halfword) (p), (scaled) (curpos))
halfword zgetvpos(halfword p, halfword q, halfword b);
#define getvpos(p, q, b) zgetvpos((halfword) (p), (halfword) (q), (halfword) (b))
void zdosnapycomp(halfword p, halfword b);
#define dosnapycomp(p, b) zdosnapycomp((halfword) (p), (halfword) (b))
void zdosnapy(halfword p);
#define dosnapy(p) zdosnapy((halfword) (p))
void pdfhlistout(void);
void pdfvlistout(void);
void fixpdfoutput(void);
void fixpdfdraftmode(void);
bool zsubstrofstr(strnumber s, strnumber t);
#define substrofstr(s, t) zsubstrofstr((strnumber) (s), (strnumber) (t))
void zpdfshipout(halfword p, bool shippingpage);
#define pdfshipout(p, shippingpage) zpdfshipout((halfword) (p), (bool) (shippingpage))
void zshipout(halfword p);
#define shipout(p) zshipout((halfword) (p))
bool zstrlessstr(strnumber s1, strnumber s2);
#define strlessstr(s1, s2) zstrlessstr((strnumber) (s1), (strnumber) (s2))
void zsortdestnames(int l, int r);
#define sortdestnames(l, r) zsortdestnames((int) (l), (int) (r))
void zpdffixdest(int k);
#define pdffixdest(k) zpdffixdest((int) (k))
void pdfprintinfo(void);
void zscanspec(groupcode c, bool threecodes);
#define scanspec(c, threecodes) zscanspec((groupcode) (c), (bool) (threecodes))
bool zcheckexpandpars(internalfontnumber f);
#define checkexpandpars(f) zcheckexpandpars((internalfontnumber) (f))
scaled zcharstretch(internalfontnumber f, eightbits c);
#define charstretch(f, c) zcharstretch((internalfontnumber) (f), (eightbits) (c))
scaled zcharshrink(internalfontnumber f, eightbits c);
#define charshrink(f, c) zcharshrink((internalfontnumber) (f), (eightbits) (c))
scaled zgetkern(internalfontnumber f, eightbits lc, eightbits rc);
#define getkern(f, lc, rc) zgetkern((internalfontnumber) (f), (eightbits) (lc), (eightbits) (rc))
scaled zkernstretch(halfword p);
#define kernstretch(p) zkernstretch((halfword) (p))
scaled zkernshrink(halfword p);
#define kernshrink(p) zkernshrink((halfword) (p))
void zdosubstfont(halfword p, int exratio);
#define dosubstfont(p, exratio) zdosubstfont((halfword) (p), (int) (exratio))
scaled zcharpw(halfword p, smallnumber side);
#define charpw(p, side) zcharpw((halfword) (p), (smallnumber) (side))
halfword znewmarginkern(scaled w, halfword p, smallnumber side);
#define newmarginkern(w, p, side) znewmarginkern((scaled) (w), (halfword) (p), (smallnumber) (side))
halfword zhpack(halfword p, scaled w, smallnumber m);
#define hpack(p, w, m) zhpack((halfword) (p), (scaled) (w), (smallnumber) (m))
halfword zvpackage(halfword p, scaled h, smallnumber m, scaled l);
#define vpackage(p, h, m, l) zvpackage((halfword) (p), (scaled) (h), (smallnumber) (m), (scaled) (l))
void zappendtovlist(halfword b);
#define appendtovlist(b) zappendtovlist((halfword) (b))
halfword newnoad(void);
halfword znewstyle(smallnumber s);
#define newstyle(s) znewstyle((smallnumber) (s))
halfword newchoice(void);
void showinfo(void);
halfword zfractionrule(scaled t);
#define fractionrule(t) zfractionrule((scaled) (t))
halfword zoverbar(halfword b, scaled k, scaled t);
#define overbar(b, k, t) zoverbar((halfword) (b), (scaled) (k), (scaled) (t))
halfword zcharbox(internalfontnumber f, quarterword c);
#define charbox(f, c) zcharbox((internalfontnumber) (f), (quarterword) (c))
void zstackintobox(halfword b, internalfontnumber f, quarterword c);
#define stackintobox(b, f, c) zstackintobox((halfword) (b), (internalfontnumber) (f), (quarterword) (c))
scaled zheightplusdepth(internalfontnumber f, quarterword c);
#define heightplusdepth(f, c) zheightplusdepth((internalfontnumber) (f), (quarterword) (c))
halfword zvardelimiter(halfword d, smallnumber s, scaled v);
#define vardelimiter(d, s, v) zvardelimiter((halfword) (d), (smallnumber) (s), (scaled) (v))
halfword zrebox(halfword b, scaled w);
#define rebox(b, w) zrebox((halfword) (b), (scaled) (w))
halfword zmathglue(halfword g, scaled m);
#define mathglue(g, m) zmathglue((halfword) (g), (scaled) (m))
void zmathkern(halfword p, scaled m);
#define mathkern(p, m) zmathkern((halfword) (p), (scaled) (m))
void flushmath(void);
halfword zcleanbox(halfword p, smallnumber s);
#define cleanbox(p, s) zcleanbox((halfword) (p), (smallnumber) (s))
void zfetch(halfword a);
#define fetch(a) zfetch((halfword) (a))
void zmakeover(halfword q);
#define makeover(q) zmakeover((halfword) (q))
void zmakeunder(halfword q);
#define makeunder(q) zmakeunder((halfword) (q))
void zmakevcenter(halfword q);
#define makevcenter(q) zmakevcenter((halfword) (q))
void zmakeradical(halfword q);
#define makeradical(q) zmakeradical((halfword) (q))
void zmakemathaccent(halfword q);
#define makemathaccent(q) zmakemathaccent((halfword) (q))
void zmakefraction(halfword q);
#define makefraction(q) zmakefraction((halfword) (q))
scaled zmakeop(halfword q);
#define makeop(q) zmakeop((halfword) (q))
void zmakeord(halfword q);
#define makeord(q) zmakeord((halfword) (q))
void zmakescripts(halfword q, scaled delta);
#define makescripts(q, delta) zmakescripts((halfword) (q), (scaled) (delta))
smallnumber zmakeleftright(halfword q, smallnumber style, scaled maxd, scaled maxh);
#define makeleftright(q, style, maxd, maxh) zmakeleftright((halfword) (q), (smallnumber) (style), (scaled) (maxd), (scaled) (maxh))
void mlisttohlist(void);
void pushalignment(void);
void popalignment(void);
void getpreambletoken(void);
void initalign(void);
void zinitspan(halfword p);
#define initspan(p) zinitspan((halfword) (p))
void initrow(void);
void initcol(void);
bool fincol(void);
void finrow(void);
void finalign(void);
void alignpeek(void);
halfword zfiniteshrink(halfword p);
#define finiteshrink(p) zfiniteshrink((halfword) (p))
void zpushnode(halfword p);
#define pushnode(p) zpushnode((halfword) (p))
halfword popnode(void);
halfword zfindprotcharleft(halfword l, bool d);
#define findprotcharleft(l, d) zfindprotcharleft((halfword) (l), (bool) (d))
halfword zfindprotcharright(halfword l, halfword r);
#define findprotcharright(l, r) zfindprotcharright((halfword) (l), (halfword) (r))
scaled ztotalpw(halfword q, halfword p);
#define totalpw(q, p) ztotalpw((halfword) (q), (halfword) (p))
void ztrybreak(int pi, smallnumber breaktype);
#define trybreak(pi, breaktype) ztrybreak((int) (pi), (smallnumber) (breaktype))
void zpostlinebreak(bool d);
#define postlinebreak(d) zpostlinebreak((bool) (d))
smallnumber zreconstitute(smallnumber j, smallnumber n, halfword bchar, halfword hchar);
#define reconstitute(j, n, bchar, hchar) zreconstitute((smallnumber) (j), (smallnumber) (n), (halfword) (bchar), (halfword) (hchar))
void hyphenate(void);
trieopcode znewtrieop(smallnumber d, smallnumber n, trieopcode v);
#define newtrieop(d, n, v) znewtrieop((smallnumber) (d), (smallnumber) (n), (trieopcode) (v))
triepointer ztrienode(triepointer p);
#define trienode(p) ztrienode((triepointer) (p))
triepointer zcompresstrie(triepointer p);
#define compresstrie(p) zcompresstrie((triepointer) (p))
void zfirstfit(triepointer p);
#define firstfit(p) zfirstfit((triepointer) (p))
void ztriepack(triepointer p);
#define triepack(p) ztriepack((triepointer) (p))
void ztriefix(triepointer p);
#define triefix(p) ztriefix((triepointer) (p))
void newpatterns(void);
void inittrie(void);
void zlinebreak(bool d);
#define linebreak(d) zlinebreak((bool) (d))
bool zeTeXenabled(bool b, quarterword j, halfword k);
#define eTeXenabled(b, j, k) zeTeXenabled((bool) (b), (quarterword) (j), (halfword) (k))
void showsavegroups(void);
void newhyphexceptions(void);
halfword zprunepagetop(halfword p, bool s);
#define prunepagetop(p, s) zprunepagetop((halfword) (p), (bool) (s))
halfword zvertbreak(halfword p, scaled h, scaled d);
#define vertbreak(p, h, d) zvertbreak((halfword) (p), (scaled) (h), (scaled) (d))
bool zdomarks(smallnumber a, smallnumber l, halfword q);
#define domarks(a, l, q) zdomarks((smallnumber) (a), (smallnumber) (l), (halfword) (q))
halfword zvsplit(halfword n, scaled h);
#define vsplit(n, h) zvsplit((halfword) (n), (scaled) (h))
void printtotals(void);
void zfreezepagespecs(smallnumber s);
#define freezepagespecs(s) zfreezepagespecs((smallnumber) (s))
void zboxerror(eightbits n);
#define boxerror(n) zboxerror((eightbits) (n))
void zensurevbox(eightbits n);
#define ensurevbox(n) zensurevbox((eightbits) (n))
void zfireup(halfword c);
#define fireup(c) zfireup((halfword) (c))
void buildpage(void);
void appspace(void);
void insertdollarsign(void);
void youcant(void);
void reportillegalcase(void);
bool privileged(void);
bool itsallover(void);
void appendglue(void);
void appendkern(void);
void offsave(void);
void extrarightbrace(void);
void normalparagraph(void);
void zboxend(int boxcontext);
#define boxend(boxcontext) zboxend((int) (boxcontext))
void zbeginbox(int boxcontext);
#define beginbox(boxcontext) zbeginbox((int) (boxcontext))
void zscanbox(int boxcontext);
#define scanbox(boxcontext) zscanbox((int) (boxcontext))
void zpackage(smallnumber c);
#define package(c) zpackage((smallnumber) (c))
smallnumber znormmin(int h);
#define normmin(h) znormmin((int) (h))
void znewgraf(bool indented);
#define newgraf(indented) znewgraf((bool) (indented))
void indentinhmode(void);
void headforvmode(void);
void endgraf(void);
void begininsertoradjust(void);
void makemark(void);
void appendpenalty(void);
void deletelast(void);
void unpackage(void);
void appenditaliccorrection(void);
void appenddiscretionary(void);
void builddiscretionary(void);
void makeaccent(void);
void alignerror(void);
void noalignerror(void);
void omiterror(void);
void doendv(void);
void cserror(void);
void zpushmath(groupcode c);
#define pushmath(c) zpushmath((groupcode) (c))
void zjustcopy(halfword p, halfword h, halfword t);
#define justcopy(p, h, t) zjustcopy((halfword) (p), (halfword) (h), (halfword) (t))
void zjustreverse(halfword p);
#define justreverse(p) zjustreverse((halfword) (p))
void initmath(void);
void starteqno(void);
void zscanmath(halfword p);
#define scanmath(p) zscanmath((halfword) (p))
void zsetmathchar(int c);
#define setmathchar(c) zsetmathchar((int) (c))
void mathlimitswitch(void);
void zscandelimiter(halfword p, bool r);
#define scandelimiter(p, r) zscandelimiter((halfword) (p), (bool) (r))
void mathradical(void);
void mathac(void);
void appendchoices(void);
halfword zfinmlist(halfword p);
#define finmlist(p) zfinmlist((halfword) (p))
void buildchoices(void);
void subsup(void);
void mathfraction(void);
void mathleftright(void);
void zappdisplay(halfword j, halfword b, scaled d);
#define appdisplay(j, b, d) zappdisplay((halfword) (j), (halfword) (b), (scaled) (d))
void aftermath(void);
void resumeafterdisplay(void);
void getrtoken(void);
void trapzeroglue(void);
void zdoregistercommand(smallnumber a);
#define doregistercommand(a) zdoregistercommand((smallnumber) (a))
void alteraux(void);
void alterprevgraf(void);
void alterpagesofar(void);
void alterinteger(void);
void alterboxdimen(void);
void znewfont(smallnumber a);
#define newfont(a) znewfont((smallnumber) (a))
void newinteraction(void);
void prefixedcommand(void);
void doassignments(void);
void openorclosein(void);
void issuemessage(void);
void shiftcase(void);
void showwhatever(void);
void storefmtfile(void);
void znewwhatsit(smallnumber s, smallnumber w);
#define newwhatsit(s, w) znewwhatsit((smallnumber) (s), (smallnumber) (w))
void znewwritewhatsit(smallnumber w);
#define newwritewhatsit(w) znewwritewhatsit((smallnumber) (w))
void zcheckpdfoutput(strnumber s, bool iserror);
#define checkpdfoutput(s, iserror) zcheckpdfoutput((strnumber) (s), (bool) (iserror))
void scanpdfexttoks(void);
void comparestrings(void);
void zscaleimage(int n);
#define scaleimage(n) zscaleimage((int) (n))
int scanpdfboxspec(void);
void scanaltrule(void);
void scanimage(void);
halfword scanaction(void);
void znewannotwhatsit(smallnumber w, smallnumber s);
#define newannotwhatsit(w, s) znewannotwhatsit((smallnumber) (w), (smallnumber) (s))
int zoutlinelistcount(halfword p);
#define outlinelistcount(p) zoutlinelistcount((halfword) (p))
void scanthreadid(void);
halfword znewsnapnode(smallnumber s);
#define newsnapnode(s) znewsnapnode((smallnumber) (s))
halfword zconcattokens(halfword q, halfword r);
#define concattokens(q, r) zconcattokens((halfword) (q), (halfword) (r))
void pdfincludechars(void);
void glyphtounicode(void);
void zthreadtitle(int thread);
#define threadtitle(thread) zthreadtitle((int) (thread))
void zpdffixthread(int thread);
#define pdffixthread(thread) zpdffixthread((int) (thread))
void zoutthread(int thread);
#define outthread(thread) zoutthread((int) (thread))
void doextension(void);
void fixlanguage(void);
void insertsrcspecial(void);
void appendsrcspecial(void);
void handlerightbrace(void);
void maincontrol(void);
void giveerrhelp(void);
bool openfmtfile(void);
bool loadfmtfile(void);
void closefilesandterminate(void);
void finalcleanup(void);
void initprim(void);
void debughelp(void);
void mainbody(void);
void scanfilenamebraced(void);
strnumber getnullstr(void);
