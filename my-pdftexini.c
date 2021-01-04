#define EXTERN extern
#include "mytexd.h"

void init_xchr(void);

void initialize(void)
{
    int i;
    int k;
    hyphpointer z;

    init_xchr();

    {
        register int for_end;
        i = 0;
        for_end = 255;
        if (i <= for_end)
            do
                mubyteread[i] = MIN_HALFWORD;
            while (i++ < for_end);
    }
    {
        register int for_end;
        i = 0;
        for_end = 255;
        if (i <= for_end)
            do
                mubytewrite[i] = 0;
            while (i++ < for_end);
    }
    {
        register int for_end;
        i = 0;
        for_end = 127;
        if (i <= for_end)
            do
                mubytecswrite[i] = MIN_HALFWORD;
            while (i++ < for_end);
    }
    mubytekeep = 0;
    mubytestart = false;
    writenoexpanding = false;
    csconverting = false;
    specialprinting = false;
    messageprinting = false;
    noconvert = false;
    activenoconvert = false;
    if (translatefilename)
        readtcxfile();
    if (interactionoption == 4)
        interaction = 3;
    else
        interaction = interactionoption;
    deletionsallowed = true;
    setboxallowed = true;
    errorcount = 0;
    helpptr = 0;
    useerrhelp = false;
    interrupt = 0;
    OKtointerrupt = true;
    twotothe[0] = 1;
    {
        register int for_end;
        k = 1;
        for_end = 30;
        if (k <= for_end)
            do
                twotothe[k] = 2 * twotothe[k - 1];
            while (k++ < for_end);
    }
    speclog[1] = 93032640L;
    speclog[2] = 38612034L;
    speclog[3] = 17922280L;
    speclog[4] = 8662214L;
    speclog[5] = 4261238L;
    speclog[6] = 2113709L;
    speclog[7] = 1052693L;
    speclog[8] = 525315L;
    speclog[9] = 262400L;
    speclog[10] = 131136L;
    speclog[11] = 65552L;
    speclog[12] = 32772L;
    speclog[13] = 16385;
    {
        register int for_end;
        k = 14;
        for_end = 27;
        if (k <= for_end)
            do
                speclog[k] = twotothe[27 - k];
            while (k++ < for_end);
    }
    speclog[28] = 1;
    ;
#ifdef TEXMF_DEBUG
    wasmemend = memmin;
    waslomax = memmin;
    washimin = memmax;
    panicking = false;
#endif /* TEXMF_DEBUG */
    nestptr = 0;
    maxneststack = 0;
    curlist.modefield = 1;
    curlist.headfield = memtop - 1;
    curlist.tailfield = memtop - 1;
    curlist.eTeXauxfield = MIN_HALFWORD;
    savetail = MIN_HALFWORD;
    curlist.auxfield.cint = -65536000L;
    curlist.mlfield = 0;
    curlist.pgfield = 0;
    shownmode = 0;
    pagecontents = 0;
    pagetail = memtop - 2;
    lastglue = MAX_HALFWORD;
    lastpenalty = 0;
    lastkern = 0;
    lastnodetype = -1;
    pagesofar[7] = 0;
    pagemaxdepth = 0;
    {
        register int for_end;
        k = 29277;
        for_end = 30185;
        if (k <= for_end)
            do
                xeqlevel[k] = 1;
            while (k++ < for_end);
    }
    nonewcontrolsequence = true;
    prim[0].v.LH = 0;
    prim[0].v.RH = 0;
    {
        register int for_end;
        k = 1;
        for_end = 2100;
        if (k <= for_end)
            do
                prim[k] = prim[0];
            while (k++ < for_end);
    }
    saveptr = 0;
    curlevel = 1;
    curgroup = 0;
    curboundary = 0;
    maxsavestack = 0;
    magset = 0;
    isincsname = false;
    curmark[0] = MIN_HALFWORD;
    curmark[1] = MIN_HALFWORD;
    curmark[2] = MIN_HALFWORD;
    curmark[3] = MIN_HALFWORD;
    curmark[4] = MIN_HALFWORD;
    curval = 0;
    curvallevel = 0;
    radix = 0;
    curorder = 0;
    {
        register int for_end;
        k = 0;
        for_end = 16;
        if (k <= for_end)
            do
                readopen[k] = 2;
            while (k++ < for_end);
    }
    condptr = MIN_HALFWORD;
    iflimit = 0;
    curif = 0;
    ifline = 0;
    nullcharacter.b0 = 0;
    nullcharacter.b1 = 0;
    nullcharacter.b2 = 0;
    nullcharacter.b3 = 0;
    totalpages = 0;
    maxv = 0;
    maxh = 0;
    maxpush = 0;
    lastbop = -1;
    doingleaders = false;
    deadcycles = 0;
    curs = -1;
    halfbuf = dvibufsize / 2;
    dvilimit = dvibufsize;
    dviptr = 0;
    dvioffset = 0;
    dvigone = 0;
    downptr = MIN_HALFWORD;
    rightptr = MIN_HALFWORD;
    pdfmemptr = 1;
    pdfmemsize = infpdfmemsize;
    pdfgone = 0;
    pdfosmode = false;
    pdfptr = 0;
    pdfopptr = 0;
    pdfosptr = 0;
    pdfoscurobjnum = 0;
    pdfoscntr = 0;
    pdfbufsize = pdfopbufsize;
    pdfosbufsize = infpdfosbufsize;
    pdfbuf = pdfopbuf;
    pdfseekwritelength = false;
    zipwritestate = 0;
    pdfversionwritten = false;
    fixedpdfoutputset = false;
    fixedpdfdraftmodeset = false;
    onebp = 65782L;
    onehundredbp = 6578176L;
    onehundredinch = 473628672L;
    tenpow[0] = 1;
    {
        register int for_end;
        i = 1;
        for_end = 9;
        if (i <= for_end)
            do
                tenpow[i] = 10 * tenpow[i - 1];
            while (i++ < for_end);
    }
    initpdfoutput = false;
    objptr = 0;
    sysobjptr = 0;
    objtabsize = infobjtabsize;
    destnamessize = infdestnamessize;
    {
        register int for_end;
        k = 1;
        for_end = 9;
        if (k <= for_end)
            do
                headtab[k] = 0;
            while (k++ < for_end);
    }
    pdfboxspecmedia = 1;
    pdfboxspeccrop = 2;
    pdfboxspecbleed = 3;
    pdfboxspectrim = 4;
    pdfboxspecart = 5;
    pdfdummyfont = 0;
    pdfresnameprefix = 0;
    lasttokensstring = 0;
    vfnf = 0;
    vfcurs = 0;
    vfstackptr = 0;
    adjusttail = MIN_HALFWORD;
    lastbadness = 0;
    preadjusttail = MIN_HALFWORD;
    packbeginline = 0;
    emptyfield.v.RH = 0;
    emptyfield.v.LH = MIN_HALFWORD;
    nulldelimiter.b0 = 0;
    nulldelimiter.b1 = 0;
    nulldelimiter.b2 = 0;
    nulldelimiter.b3 = 0;
    alignptr = MIN_HALFWORD;
    curalign = MIN_HALFWORD;
    curspan = MIN_HALFWORD;
    curloop = MIN_HALFWORD;
    curhead = MIN_HALFWORD;
    curtail = MIN_HALFWORD;
    curprehead = MIN_HALFWORD;
    curpretail = MIN_HALFWORD;
    {
        register int for_end;
        z = 0;
        for_end = hyphsize;
        if (z <= for_end)
            do {
                hyphword[z] = 0;
                hyphlist[z] = MIN_HALFWORD;
                hyphlink[z] = 0;
            }
            while (z++ < for_end);
    }
    hyphcount = 0;
    hyphnext = 608;
    if (hyphnext > hyphsize)
        hyphnext = 607;
    outputactive = false;
    insertpenalties = 0;
    ligaturepresent = false;
    cancelboundary = false;
    lfthit = false;
    rthit = false;
    insdisc = false;
    aftertoken = 0;
    longhelpseen = false;
    formatident = 0;
    {
        register int for_end;
        k = 0;
        for_end = 17;
        if (k <= for_end)
            do
                writeopen[k] = false;
            while (k++ < for_end);
    }
    altrule = MIN_HALFWORD;
    warnpdfpagebox = true;
    countdosnapy = 0;
    secondsandmicros(epochseconds, microseconds);
    initstarttime();
    pdffirstoutline = 0;
    pdflastoutline = 0;
    pdfparentoutline = 0;
    pdfobjcount = 0;
    pdfxformcount = 0;
    pdfximagecount = 0;
    pdfdestnamesptr = 0;
    pdfinfotoks = MIN_HALFWORD;
    pdfcatalogtoks = MIN_HALFWORD;
    pdfnamestoks = MIN_HALFWORD;
    pdfcatalogopenaction = 0;
    pdftrailertoks = MIN_HALFWORD;
    pdftraileridtoks = MIN_HALFWORD;
    genfakedinterwordspace = false;
    genrunninglink = true;
    pdflinkstackptr = 0;
    LRptr = MIN_HALFWORD;
    LRproblems = 0;
    curdir = 0;
    pseudofiles = MIN_HALFWORD;
    saroot[6] = MIN_HALFWORD;
    sanull.hh.v.LH = MIN_HALFWORD;
    sanull.hh.v.RH = MIN_HALFWORD;
    sachain = MIN_HALFWORD;
    salevel = 0;
    discptr[2] = MIN_HALFWORD;
    discptr[3] = MIN_HALFWORD;
    editnamestart = 0;
    stopatspace = true;
    expanddepthcount = 0;
    mltexenabledp = false;
    enctexenabledp = false;
    ;
#ifdef INITEX
    if (iniversion) {
        {
            register int for_end;
            k = membot + 1;
            for_end = membot + 19;
            if (k <= for_end)
                do
                    mem[k].cint = 0;
                while (k++ < for_end);
        }
        k = membot;
        while (k <= membot + 19) {

            mem[k].hh.v.RH = -268435454L;
            mem[k].hh.b0 = 0;
            mem[k].hh.b1 = 0;
            k = k + 4;
        }
        mem[membot + 6].cint = 65536L;
        mem[membot + 4].hh.b0 = 1;
        mem[membot + 10].cint = 65536L;
        mem[membot + 8].hh.b0 = 2;
        mem[membot + 14].cint = 65536L;
        mem[membot + 12].hh.b0 = 1;
        mem[membot + 15].cint = 65536L;
        mem[membot + 12].hh.b1 = 1;
        mem[membot + 18].cint = -65536L;
        mem[membot + 16].hh.b0 = 1;
        rover = membot + 20;
        mem[rover].hh.v.RH = MAX_HALFWORD;
        mem[rover].hh.v.LH = 1000;
        mem[rover + 1].hh.v.LH = rover;
        mem[rover + 1].hh.v.RH = rover;
        lomemmax = rover + 1000;
        mem[lomemmax].hh.v.RH = MIN_HALFWORD;
        mem[lomemmax].hh.v.LH = MIN_HALFWORD;
        {
            register int for_end;
            k = memtop - 14;
            for_end = memtop;
            if (k <= for_end)
                do
                    mem[k] = mem[lomemmax];
                while (k++ < for_end);
        }
        mem[memtop - 10].hh.v.LH = 19614;
        mem[memtop - 9].hh.v.RH = 256;
        mem[memtop - 9].hh.v.LH = MIN_HALFWORD;
        mem[memtop - 7].hh.b0 = 1;
        mem[memtop - 6].hh.v.LH = MAX_HALFWORD;
        mem[memtop - 7].hh.b1 = 0;
        mem[memtop].hh.b1 = 255;
        mem[memtop].hh.b0 = 1;
        mem[memtop].hh.v.RH = memtop;
        mem[memtop - 2].hh.b0 = 10;
        mem[memtop - 2].hh.b1 = 0;
        avail = MIN_HALFWORD;
        memend = memtop;
        himemmin = memtop - 14;
        varused = membot + 20 - membot;
        dynused = 15;
        eqtb[26627].hh.b0 = 103;
        eqtb[26627].hh.v.RH = MIN_HALFWORD;
        eqtb[26627].hh.b1 = 0;
        {
            register int for_end;
            k = 1;
            for_end = eqtbtop;
            if (k <= for_end)
                do
                    eqtb[k] = eqtb[26627];
                while (k++ < for_end);
        }
        eqtb[26628].hh.v.RH = membot;
        eqtb[26628].hh.b1 = 1;
        eqtb[26628].hh.b0 = 119;
        {
            register int for_end;
            k = 26629;
            for_end = 27157;
            if (k <= for_end)
                do
                    eqtb[k] = eqtb[26628];
                while (k++ < for_end);
        }
        mem[membot].hh.v.RH = mem[membot].hh.v.RH + 530;
        eqtb[27158].hh.v.RH = MIN_HALFWORD;
        eqtb[27158].hh.b0 = 120;
        eqtb[27158].hh.b1 = 1;
        {
            register int for_end;
            k = 27429;
            for_end = 27432;
            if (k <= for_end)
                do
                    eqtb[k] = eqtb[27158];
                while (k++ < for_end);
        }
        {
            register int for_end;
            k = 27159;
            for_end = 27428;
            if (k <= for_end)
                do
                    eqtb[k] = eqtb[26627];
                while (k++ < for_end);
        }
        eqtb[27433].hh.v.RH = MIN_HALFWORD;
        eqtb[27433].hh.b0 = 121;
        eqtb[27433].hh.b1 = 1;
        {
            register int for_end;
            k = 27434;
            for_end = 27688;
            if (k <= for_end)
                do
                    eqtb[k] = eqtb[27433];
                while (k++ < for_end);
        }
        eqtb[27689].hh.v.RH = 0;
        eqtb[27689].hh.b0 = 122;
        eqtb[27689].hh.b1 = 1;
        {
            register int for_end;
            k = 27693;
            for_end = 27740;
            if (k <= for_end)
                do
                    eqtb[k] = eqtb[27689];
                while (k++ < for_end);
        }
        eqtb[27741].hh.v.RH = 0;
        eqtb[27741].hh.b0 = 122;
        eqtb[27741].hh.b1 = 1;
        {
            register int for_end;
            k = 27742;
            for_end = 29276;
            if (k <= for_end)
                do
                    eqtb[k] = eqtb[27741];
                while (k++ < for_end);
        }
        {
            register int for_end;
            k = 0;
            for_end = 255;
            if (k <= for_end)
                do {
                    eqtb[27741 + k].hh.v.RH = 12;
                    eqtb[28765 + k].hh.v.RH = k;
                    eqtb[28509 + k].hh.v.RH = 1000;
                }
                while (k++ < for_end);
        }
        eqtb[27754].hh.v.RH = 5;
        eqtb[27773].hh.v.RH = 10;
        eqtb[27833].hh.v.RH = 0;
        eqtb[27778].hh.v.RH = 14;
        eqtb[27868].hh.v.RH = 15;
        eqtb[27741].hh.v.RH = 9;
        {
            register int for_end;
            k = 48;
            for_end = 57;
            if (k <= for_end)
                do
                    eqtb[28765 + k].hh.v.RH = k + 28672;
                while (k++ < for_end);
        }
        {
            register int for_end;
            k = 65;
            for_end = 90;
            if (k <= for_end)
                do {
                    eqtb[27741 + k].hh.v.RH = 11;
                    eqtb[27741 + k + 32].hh.v.RH = 11;
                    eqtb[28765 + k].hh.v.RH = k + 28928;
                    eqtb[28765 + k + 32].hh.v.RH = k + 28960;
                    eqtb[27997 + k].hh.v.RH = k + 32;
                    eqtb[27997 + k + 32].hh.v.RH = k + 32;
                    eqtb[28253 + k].hh.v.RH = k;
                    eqtb[28253 + k + 32].hh.v.RH = k;
                    eqtb[28509 + k].hh.v.RH = 999;
                }
                while (k++ < for_end);
        }
        {
            register int for_end;
            k = 29277;
            for_end = 29639;
            if (k <= for_end)
                do
                    eqtb[k].cint = 0;
                while (k++ < for_end);
        }
        eqtb[29332].cint = 256;
        eqtb[29333].cint = -1;
        eqtb[29294].cint = 1000;
        eqtb[29278].cint = 10000;
        eqtb[29318].cint = 1;
        eqtb[29317].cint = 25;
        eqtb[29322].cint = 92;
        eqtb[29325].cint = 13;
        {
            register int for_end;
            k = 0;
            for_end = 255;
            if (k <= for_end)
                do
                    eqtb[29640 + k].cint = -1;
                while (k++ < for_end);
        }
        eqtb[29686].cint = 0;
        {
            register int for_end;
            k = 29896;
            for_end = 30185;
            if (k <= for_end)
                do
                    eqtb[k].cint = 0;
                while (k++ < for_end);
        }
        primused = 2100;
        hashused = 15514;
        hashhigh = 0;
        cscount = 0;
        eqtb[15523].hh.b0 = 118;
        hash[15523].v.RH = 578;
        eqtb[15525].hh.b0 = 39;
        eqtb[15525].hh.v.RH = 1;
        eqtb[15525].hh.b1 = 1;
        hash[15525].v.RH = 579;
        eqtb[29917].cint = (onehundredinch + 50) / 100;
        eqtb[29918].cint = (onehundredinch + 50) / 100;
        eqtb[29340].cint = 9;
        eqtb[29360].cint = 0;
        eqtb[29341].cint = 3;
        eqtb[29343].cint = 72;
        eqtb[29348].cint = 1;
        eqtb[29349].cint = 4;
        eqtb[29353].cint = 1000;
        eqtb[29354].cint = 2200;
        eqtb[29355].cint = 1;
        eqtb[29356].cint = 0;
        eqtb[29929].cint = onebp;
        eqtb[29365].cint = 0;
        eqtb[29928].cint = -65536000L;
        eqtb[29926].cint = eqtb[29928].cint;
        eqtb[29927].cint = eqtb[29928].cint;
        eqtb[29924].cint = eqtb[29928].cint;
        eqtb[29925].cint = eqtb[29928].cint;
        {
            register int for_end;
            k = -(int) trieopsize;
            for_end = trieopsize;
            if (k <= for_end)
                do
                    trieophash[k] = 0;
                while (k++ < for_end);
        }
        {
            register int for_end;
            k = 0;
            for_end = 255;
            if (k <= for_end)
                do
                    trieused[k] = mintrieop;
                while (k++ < for_end);
        }
        maxopused = mintrieop;
        trieopptr = 0;
        trienotready = true;
        hash[15514].v.RH = 1614;
        if (iniversion)
            formatident = 1701;
        hash[15522].v.RH = 1916;
        eqtb[15522].hh.b1 = 1;
        eqtb[15522].hh.b0 = 115;
        eqtb[15522].hh.v.RH = MIN_HALFWORD;
        eTeXmode = 0;
        maxregnum = 255;
        maxreghelpline = 791;
        {
            register int for_end;
            i = 0;
            for_end = 5;
            if (i <= for_end)
                do
                    saroot[i] = MIN_HALFWORD;
                while (i++ < for_end);
        }
    }
#endif /* INITEX */
    synctexoffset = 29383;
}

#ifdef INITEX
bool getstringsstarted(void)
{
    /* 30 10 */ register bool Result;
    unsigned char k, l;
    strnumber g;
    poolptr = 0;
    strptr = 0;
    strstart[0] = 0;
    {
        for (k = 0; k < 256; k++) {
            if (((k < 32) || (k > 126))) {
                strpool[poolptr++] = '^';
                strpool[poolptr++] = '^';
                if (k < 32) {
                    /* ^^A - ^^_ */
                    strpool[poolptr++] = k + 64;
                } else if (k == 127) {
                    /* ^^? */
                    strpool[poolptr++] = k - 64;
                } else {
                    /* ^^xx */
                    l = k / 16;
                    if (l < 10) {
                        strpool[poolptr++] = l + 48;
                    } else {
                        strpool[poolptr++] = l + 87;
                    }
                    l = k % 16;
                    if (l < 10) {
                        strpool[poolptr++] = l + 48;
                    } else {
                        strpool[poolptr++] = l + 87;
                    }
                }
            } else {
                strpool[poolptr++] = k;
            }
            g = makestring();
        }
    }
    g = loadpoolstrings((poolsize - stringvacancies));
    if (g == 0) {
        ;
        fprintf(stdout, "%s\n", "! You have to increase POOLSIZE.");
        Result = false;
        return Result;
    }
    Result = true;
    return Result;
}
#endif /* INITEX */
#ifdef INITEX
void sortavail(void)
{
    halfword p, q, r;
    halfword oldrover;
    p = getnode(1073741824L);
    p = mem[rover + 1].hh.v.RH;
    mem[rover + 1].hh.v.RH = MAX_HALFWORD;
    oldrover = rover;
    while (p != oldrover)
        if (p < rover) {
            q = p;
            p = mem[q + 1].hh.v.RH;
            mem[q + 1].hh.v.RH = rover;
            rover = q;
        } else {

            q = rover;
            while (mem[q + 1].hh.v.RH < p)
                q = mem[q + 1].hh.v.RH;
            r = mem[p + 1].hh.v.RH;
            mem[p + 1].hh.v.RH = mem[q + 1].hh.v.RH;
            mem[q + 1].hh.v.RH = p;
            p = r;
        }
    p = rover;
    while (mem[p + 1].hh.v.RH != MAX_HALFWORD) {

        mem[mem[p + 1].hh.v.RH + 1].hh.v.LH = p;
        p = mem[p + 1].hh.v.RH;
    }
    mem[p + 1].hh.v.RH = rover;
    mem[rover + 1].hh.v.LH = p;
}
#endif /* INITEX */
#ifdef INITEX
void zprimitive(strnumber s, quarterword c, halfword o)
{
    poolpointer k;
    int j;
    smallnumber l;
    int primval;
    if (s < 256) {
        curval = s + 257;
        primval = primlookup(s);
    } else {

        k = strstart[s];
        l = strstart[s + 1] - k;
        if (first + l > bufsize + 1)
            overflow(258, bufsize);
        {
            register int for_end;
            j = 0;
            for_end = l - 1;
            if (j <= for_end)
                do
                    buffer[first + j] = strpool[k + j];
                while (j++ < for_end);
        }
        curval = idlookup(first, l);
        {
            decr(strptr);
            poolptr = strstart[strptr];
        }
        hash[curval].v.RH = s;
        primval = primlookup(s);
    }
    eqtb[curval].hh.b1 = 1;
    eqtb[curval].hh.b0 = c;
    eqtb[curval].hh.v.RH = o;
    eqtb[15526 + primval].hh.b1 = 1;
    eqtb[15526 + primval].hh.b0 = c;
    eqtb[15526 + primval].hh.v.RH = o;
}
#endif /* INITEX */
#ifdef INITEX
trieopcode znewtrieop(smallnumber d, smallnumber n, trieopcode v)
{
    /* 10 */ register trieopcode Result;
    int h;
    trieopcode u;
    int l;
    h = abs(n + 313 * d + 361 * v + 1009 * curlang) % (trieopsize - negtrieopsize) + negtrieopsize;
    while (true) {

        l = trieophash[h];
        if (l == 0) {
            if (trieopptr == trieopsize)
                overflow(1366, trieopsize);
            u = trieused[curlang];
            if (u == maxtrieop)
                overflow(1367, maxtrieop - mintrieop);
            incr(trieopptr);
            incr(u);
            trieused[curlang] = u;
            if (u > maxopused)
                maxopused = u;
            hyfdistance[trieopptr] = d;
            hyfnum[trieopptr] = n;
            hyfnext[trieopptr] = v;
            trieoplang[trieopptr] = curlang;
            trieophash[h] = trieopptr;
            trieopval[trieopptr] = u;
            Result = u;
            return Result;
        }
        if ((hyfdistance[l] == d) && (hyfnum[l] == n) && (hyfnext[l] == v) && (trieoplang[l] == curlang)) {
            Result = trieopval[l];
            return Result;
        }
        if (h > -(int) trieopsize)
            decr(h);
        else
            h = trieopsize;
    }
    return Result;
}

triepointer ztrienode(triepointer p)
{
    /* 10 */ register triepointer Result;
    triepointer h;
    triepointer q;
    h = abs(triec[p] + 1009 * trieo[p] + 2718 * triel[p] + 3142 * trier[p]) % triesize;
    while (true) {

        q = triehash[h];
        if (q == 0) {
            triehash[h] = p;
            Result = p;
            return Result;
        }
        if ((triec[q] == triec[p]) && (trieo[q] == trieo[p]) && (triel[q] == triel[p]) && (trier[q] == trier[p])) {
            Result = q;
            return Result;
        }
        if (h > 0)
            decr(h);
        else
            h = triesize;
    }
    return Result;
}

triepointer zcompresstrie(triepointer p)
{
    register triepointer Result;
    if (p == 0)
        Result = 0;
    else {

        triel[p] = compresstrie(triel[p]);
        trier[p] = compresstrie(trier[p]);
        Result = trienode(p);
    }
    return Result;
}

void zfirstfit(triepointer p)
{
        triepointer h;
    triepointer z;
    triepointer q;
    unsigned char c;
    triepointer l, r;
    short ll;
    c = triec[p];
    z = triemin[c];
    while (true) {

        h = z - c;
        if (triemax < h + 256) {
            if (triesize <= h + 256)
                overflow(1368, triesize);
            do {
                incr(triemax);
                trietaken[triemax] = false;
                trietrl[triemax] = triemax + 1;
                trietro[triemax] = triemax - 1;
            } while (!(triemax == h + 256));
        }
        if (trietaken[h])
            goto lab45;
        q = trier[p];
        while (q > 0) {

            if (trietrl[h + triec[q]] == 0)
                goto lab45;
            q = trier[q];
        }
        goto lab40;
      lab45:z = trietrl[z];
    }
  lab40:trietaken[h] = true;
    triehash[p] = h;
    q = p;
    do {
        z = h + triec[q];
        l = trietro[z];
        r = trietrl[z];
        trietro[r] = l;
        trietrl[l] = r;
        trietrl[z] = 0;
        if (l < 256) {
            if (z < 256)
                ll = z;
            else
                ll = 256;
            do {
                triemin[l] = r;
                incr(l);
            } while (!(l == ll));
        }
        q = trier[q];
    } while (!(q == 0));
}

void ztriepack(triepointer p)
{
    triepointer q;
    do {
        q = triel[p];
        if ((q > 0) && (triehash[q] == 0)) {
            firstfit(q);
            triepack(q);
        }
        p = trier[p];
    } while (!(p == 0));
}

void ztriefix(triepointer p)
{
    triepointer q;
    unsigned char c;
    triepointer z;
    z = triehash[p];
    do {
        q = triel[p];
        c = triec[p];
        trietrl[z + c] = triehash[q];
        trietrc[z + c] = c;
        trietro[z + c] = trieo[p];
        if (q > 0)
            triefix(q);
        p = trier[p];
    } while (!(p == 0));
}

void newpatterns(void)
{
    unsigned char k, l;
    bool digitsensed;
    trieopcode v;
    triepointer p, q;
    bool firstchild;
    unsigned char c;
    if (trienotready) {
        if (eqtb[29327].cint <= 0)
            curlang = 0;
        else if (eqtb[29327].cint > 255)
            curlang = 0;
        else
            curlang = eqtb[29327].cint;
        scanleftbrace();
        k = 0;
        hyf[0] = 0;
        digitsensed = false;
        while (true) {

            getxtoken();
            switch (curcmd) {
                case 11:
                case 12:
                    if (digitsensed || (curchr < 48) || (curchr > 57)) {
                        if (curchr == 46)
                            curchr = 0;
                        else {

                            curchr = eqtb[27997 + curchr].hh.v.RH;
                            if (curchr == 0) {
                                {
                                    if (interaction == 3);
                                    if (filelineerrorstylep)
                                        printfileline();
                                    else
                                        printnl(264);
                                    print(1374);
                                }
                                {
                                    helpptr = 1;
                                    helpline[0] = 1373;
                                }
                                error();
                            }
                        }
                        if (k < 63) {
                            incr(k);
                            hc[k] = curchr;
                            hyf[k] = 0;
                            digitsensed = false;
                        }
                    } else if (k < 63) {
                        hyf[k] = curchr - 48;
                        digitsensed = true;
                    }
                    break;
                case 10:
                case 2:
                    {
                        if (k > 0) {
                            if (hc[1] == 0)
                                hyf[0] = 0;
                            if (hc[k] == 0)
                                hyf[k] = 0;
                            l = k;
                            v = mintrieop;
                            while (true) {

                                if (hyf[l] != 0)
                                    v = newtrieop(k - l, hyf[l], v);
                                if (l > 0)
                                    decr(l);
                                else
                                    goto lab31;
                            }
                          lab31:;
                            q = 0;
                            hc[0] = curlang;
                            while (l <= k) {

                                c = hc[l];
                                incr(l);
                                p = triel[q];
                                firstchild = true;
                                while ((p > 0) && (c > triec[p])) {

                                    q = p;
                                    p = trier[q];
                                    firstchild = false;
                                }
                                if ((p == 0) || (c < triec[p])) {
                                    if (trieptr == triesize)
                                        overflow(1368, triesize);
                                    incr(trieptr);
                                    trier[trieptr] = p;
                                    p = trieptr;
                                    triel[p] = 0;
                                    if (firstchild)
                                        triel[q] = p;
                                    else
                                        trier[q] = p;
                                    triec[p] = c;
                                    trieo[p] = mintrieop;
                                }
                                q = p;
                            }
                            if (trieo[q] != mintrieop) {
                                {
                                    if (interaction == 3);
                                    if (filelineerrorstylep)
                                        printfileline();
                                    else
                                        printnl(264);
                                    print(1375);
                                }
                                {
                                    helpptr = 1;
                                    helpline[0] = 1373;
                                }
                                error();
                            }
                            trieo[q] = v;
                        }
                        if (curcmd == 2)
                            goto lab30;
                        k = 0;
                        hyf[0] = 0;
                        digitsensed = false;
                    }
                    break;
                default:
                    {
                        {
                            if (interaction == 3);
                            if (filelineerrorstylep)
                                printfileline();
                            else
                                printnl(264);
                            print(1372);
                        }
                        printesc(1370);
                        {
                            helpptr = 1;
                            helpline[0] = 1373;
                        }
                        error();
                    }
                    break;
            }
        }
      lab30:;
        if (eqtb[29381].cint > 0) {
            c = curlang;
            firstchild = false;
            p = 0;
            do {
                q = p;
                p = trier[q];
            } while (!((p == 0) || (c <= triec[p])));
            if ((p == 0) || (c < triec[p])) {
                if (trieptr == triesize)
                    overflow(1368, triesize);
                incr(trieptr);
                trier[trieptr] = p;
                p = trieptr;
                triel[p] = 0;
                if (firstchild)
                    triel[q] = p;
                else
                    trier[q] = p;
                triec[p] = c;
                trieo[p] = mintrieop;
            }
            q = p;
            p = triel[q];
            firstchild = true;
            {
                register int for_end;
                c = 0;
                for_end = 255;
                if (c <= for_end)
                    do
                        if ((eqtb[27997 + c].hh.v.RH > 0) || ((c == 255) && firstchild)) {
                            if (p == 0) {
                                if (trieptr == triesize)
                                    overflow(1368, triesize);
                                incr(trieptr);
                                trier[trieptr] = p;
                                p = trieptr;
                                triel[p] = 0;
                                if (firstchild)
                                    triel[q] = p;
                                else
                                    trier[q] = p;
                                triec[p] = c;
                                trieo[p] = mintrieop;
                            } else
                                triec[p] = c;
                            trieo[p] = eqtb[27997 + c].hh.v.RH;
                            q = p;
                            p = trier[q];
                            firstchild = false;
                        }
                    while (c++ < for_end);
            }
            if (firstchild)
                triel[q] = 0;
            else
                trier[q] = 0;
        }
    } else {

        {
            if (interaction == 3);
            if (filelineerrorstylep)
                printfileline();
            else
                printnl(264);
            print(1369);
        }
        printesc(1370);
        {
            helpptr = 1;
            helpline[0] = 1371;
        }
        error();
        mem[memtop - 12].hh.v.RH = scantoks(false, false);
        flushlist(defref);
    }
}

void inittrie(void)
{
    triepointer p;
    int j, k, t;
    triepointer r, s;
    opstart[0] = -(int) mintrieop;
    {
        register int for_end;
        j = 1;
        for_end = 255;
        if (j <= for_end)
            do
                opstart[j] = opstart[j - 1] + trieused[j - 1];
            while (j++ < for_end);
    }
    {
        register int for_end;
        j = 1;
        for_end = trieopptr;
        if (j <= for_end)
            do
                trieophash[j] = opstart[trieoplang[j]] + trieopval[j];
            while (j++ < for_end);
    }
    {
        register int for_end;
        j = 1;
        for_end = trieopptr;
        if (j <= for_end)
            do
                while (trieophash[j] > j) {

                    k = trieophash[j];
                    t = hyfdistance[k];
                    hyfdistance[k] = hyfdistance[j];
                    hyfdistance[j] = t;
                    t = hyfnum[k];
                    hyfnum[k] = hyfnum[j];
                    hyfnum[j] = t;
                    t = hyfnext[k];
                    hyfnext[k] = hyfnext[j];
                    hyfnext[j] = t;
                    trieophash[j] = trieophash[k];
                    trieophash[k] = k;
                }
            while (j++ < for_end);
    }
    {
        register int for_end;
        p = 0;
        for_end = triesize;
        if (p <= for_end)
            do
                triehash[p] = 0;
            while (p++ < for_end);
    }
    trier[0] = compresstrie(trier[0]);
    triel[0] = compresstrie(triel[0]);
    {
        register int for_end;
        p = 0;
        for_end = trieptr;
        if (p <= for_end)
            do
                triehash[p] = 0;
            while (p++ < for_end);
    }
    {
        register int for_end;
        p = 0;
        for_end = 255;
        if (p <= for_end)
            do
                triemin[p] = p + 1;
            while (p++ < for_end);
    }
    trietrl[0] = 1;
    triemax = 0;
    if (triel[0] != 0) {
        firstfit(triel[0]);
        triepack(triel[0]);
    }
    if (trier[0] != 0) {
        if (triel[0] == 0) {
            register int for_end;
            p = 0;
            for_end = 255;
            if (p <= for_end)
                do
                    triemin[p] = p + 2;
                while (p++ < for_end);
        }
        firstfit(trier[0]);
        triepack(trier[0]);
        hyphstart = triehash[trier[0]];
    }
    if (triemax == 0) {
        {
            register int for_end;
            r = 0;
            for_end = 256;
            if (r <= for_end)
                do {
                    trietrl[r] = 0;
                    trietro[r] = mintrieop;
                    trietrc[r] = 0;
                }
                while (r++ < for_end);
        }
        triemax = 256;
    } else {

        if (trier[0] > 0)
            triefix(trier[0]);
        if (triel[0] > 0)
            triefix(triel[0]);
        r = 0;
        do {
            s = trietrl[r];
            {
                trietrl[r] = 0;
                trietro[r] = mintrieop;
                trietrc[r] = 0;
            }
            r = s;
        } while (!(r > triemax));
    }
    trietrc[0] = 63;
    trienotready = false;
}
#endif /* INITEX */
void zlinebreak(bool d)
{
        halfword q, r, s, prevs;
    internalfontnumber f;
    smallnumber j;
    unsigned char c;
    packbeginline = curlist.mlfield;
    mem[memtop - 3].hh.v.RH = mem[curlist.headfield].hh.v.RH;
    if ((curlist.tailfield >= himemmin)) {
        mem[curlist.tailfield].hh.v.RH = newpenalty(10000);
        curlist.tailfield = mem[curlist.tailfield].hh.v.RH;
    } else if (mem[curlist.tailfield].hh.b0 != 10) {
        mem[curlist.tailfield].hh.v.RH = newpenalty(10000);
        curlist.tailfield = mem[curlist.tailfield].hh.v.RH;
    } else {

        mem[curlist.tailfield].hh.b0 = 12;
        deleteglueref(mem[curlist.tailfield + 1].hh.v.LH);
        flushnodelist(mem[curlist.tailfield + 1].hh.v.RH);
        mem[curlist.tailfield + 1].cint = 10000;
    }
    mem[curlist.tailfield].hh.v.RH = newparamglue(14);
    lastlinefill = mem[curlist.tailfield].hh.v.RH;
    initcurlang = curlist.pgfield % 65536L;
    initlhyf = curlist.pgfield / 4194304L;
    initrhyf = (curlist.pgfield / 65536L) % 64;
    popnest();
    noshrinkerroryet = true;
    if ((mem[eqtb[26635].hh.v.RH].hh.b1 != 0) && (mem[eqtb[26635].hh.v.RH + 3].cint != 0)) {
        eqtb[26635].hh.v.RH = finiteshrink(eqtb[26635].hh.v.RH);
    }
    if ((mem[eqtb[26636].hh.v.RH].hh.b1 != 0) && (mem[eqtb[26636].hh.v.RH + 3].cint != 0)) {
        eqtb[26636].hh.v.RH = finiteshrink(eqtb[26636].hh.v.RH);
    }
    q = eqtb[26635].hh.v.RH;
    r = eqtb[26636].hh.v.RH;
    background[1] = mem[q + 1].cint + mem[r + 1].cint;
    background[2] = 0;
    background[3] = 0;
    background[4] = 0;
    background[5] = 0;
    background[2 + mem[q].hh.b0] = mem[q + 2].cint;
    background[2 + mem[r].hh.b0] = background[2 + mem[r].hh.b0] + mem[r + 2].cint;
    background[6] = mem[q + 3].cint + mem[r + 3].cint;
    if (eqtb[29357].cint > 1) {
        background[7] = 0;
        background[8] = 0;
        maxstretchratio = -1;
        maxshrinkratio = -1;
        curfontstep = -1;
        prevcharp = MIN_HALFWORD;
    }
    dolastlinefit = false;
    activenodesize = 3;
    if (eqtb[29379].cint > 0) {
        q = mem[lastlinefill + 1].hh.v.LH;
        if ((mem[q + 2].cint > 0) && (mem[q].hh.b0 > 0)) {

            if ((background[3] == 0) && (background[4] == 0) && (background[5] == 0)) {
                dolastlinefit = true;
                activenodesize = 5;
                fillwidth[0] = 0;
                fillwidth[1] = 0;
                fillwidth[2] = 0;
                fillwidth[mem[q].hh.b0 - 1] = mem[q + 2].cint;
            }
        }
    }
    minimumdemerits = 1073741823L;
    minimaldemerits[3] = 1073741823L;
    minimaldemerits[2] = 1073741823L;
    minimaldemerits[1] = 1073741823L;
    minimaldemerits[0] = 1073741823L;
    if (eqtb[27158].hh.v.RH == MIN_HALFWORD) {

        if (eqtb[29913].cint == 0) {
            lastspecialline = 0;
            secondwidth = eqtb[29899].cint;
            secondindent = 0;
        } else {

            lastspecialline = abs(eqtb[29318].cint);
            if (eqtb[29318].cint < 0) {
                firstwidth = eqtb[29899].cint - abs(eqtb[29913].cint);
                if (eqtb[29913].cint >= 0)
                    firstindent = eqtb[29913].cint;
                else
                    firstindent = 0;
                secondwidth = eqtb[29899].cint;
                secondindent = 0;
            } else {

                firstwidth = eqtb[29899].cint;
                firstindent = 0;
                secondwidth = eqtb[29899].cint - abs(eqtb[29913].cint);
                if (eqtb[29913].cint >= 0)
                    secondindent = eqtb[29913].cint;
                else
                    secondindent = 0;
            }
        }
    } else {

        lastspecialline = mem[eqtb[27158].hh.v.RH].hh.v.LH - 1;
        secondwidth = mem[eqtb[27158].hh.v.RH + 2 * (lastspecialline + 1)
            ].cint;
        secondindent = mem[eqtb[27158].hh.v.RH + 2 * lastspecialline + 1]
            .cint;
    }
    if (eqtb[29296].cint == 0)
        easyline = lastspecialline;
    else
        easyline = MAX_HALFWORD;
    threshold = eqtb[29277].cint;
    if (threshold >= 0) {
        ;
#ifdef STAT
        if (eqtb[29309].cint > 0) {
            begindiagnostic();
            printnl(1350);
        }
#endif /* STAT */
        secondpass = false;
        finalpass = false;
    } else {

        threshold = eqtb[29278].cint;
        secondpass = true;
        finalpass = (eqtb[29916].cint <= 0);
        ;
#ifdef STAT
        if (eqtb[29309].cint > 0)
            begindiagnostic();
#endif /* STAT */
    }
    while (true) {

        if (threshold > 10000)
            threshold = 10000;
        if (secondpass) {
            ;
#ifdef INITEX
            if (trienotready)
                inittrie();
#endif /* INITEX */
            curlang = initcurlang;
            lhyf = initlhyf;
            rhyf = initrhyf;
            if (trietrc[hyphstart + curlang] != curlang)
                hyphindex = 0;
            else
                hyphindex = trietrl[hyphstart + curlang];
        }
        q = getnode(activenodesize);
        mem[q].hh.b0 = 0;
        mem[q].hh.b1 = 2;
        mem[q].hh.v.RH = memtop - 7;
        mem[q + 1].hh.v.RH = MIN_HALFWORD;
        mem[q + 1].hh.v.LH = curlist.pgfield + 1;
        mem[q + 2].cint = 0;
        mem[memtop - 7].hh.v.RH = q;
        if (dolastlinefit) {
            mem[q + 3].cint = 0;
            mem[q + 4].cint = 0;
        }
        activewidth[1] = background[1];
        activewidth[2] = background[2];
        activewidth[3] = background[3];
        activewidth[4] = background[4];
        activewidth[5] = background[5];
        activewidth[6] = background[6];
        if (eqtb[29357].cint > 1) {
            activewidth[7] = background[7];
            activewidth[8] = background[8];
        }
        passive = MIN_HALFWORD;
        printednode = memtop - 3;
        passnumber = 0;
        fontinshortdisplay = 0;
        curp = mem[memtop - 3].hh.v.RH;
        autobreaking = true;
        prevp = curp;
        prevcharp = MIN_HALFWORD;
        prevlegal = MIN_HALFWORD;
        rejectedcurp = MIN_HALFWORD;
        tryprevbreak = false;
        beforerejectedcurp = false;
        firstp = curp;
        while ((curp != MIN_HALFWORD) && (mem[memtop - 7].hh.v.RH != memtop - 7)) {

            if ((curp >= himemmin)) {
                prevp = curp;
                do {
                    f = mem[curp].hh.b0;
                    activewidth[1] = activewidth[1] + fontinfo[widthbase[f] + fontinfo[charbase[f] + effectivechar(true, f, mem[curp]
                                                                                                                   .hh.b1)].qqqq.b0].cint;
                    if ((eqtb[29357].cint > 1) && checkexpandpars(f)) {
                        prevcharp = curp;
                        activewidth[7] = activewidth[7] + charstretch(f, mem[curp].hh.b1);
                        activewidth[8] = activewidth[8] + charshrink(f, mem[curp].hh.b1);
                    }
                    curp = mem[curp].hh.v.RH;
                } while (!(!(curp >= himemmin)));
            }
            switch (mem[curp].hh.b0) {
                case 0:
                case 1:
                case 2:
                    activewidth[1] = activewidth[1] + mem[curp + 1].cint;
                    break;
                case 8:
                    {
                        if (mem[curp].hh.b1 == 4) {
                            curlang = mem[curp + 1].hh.v.RH;
                            lhyf = mem[curp + 1].hh.b0;
                            rhyf = mem[curp + 1].hh.b1;
                        }
                        if ((mem[curp].hh.b1 == 10) || (mem[curp].hh.b1 == 12)
                            )
                            activewidth[1] = activewidth[1] + mem[curp + 1].cint;
                    }
                    break;
                case 10:
                    {
                        if (autobreaking) {
                            if ((prevp >= himemmin))
                                trybreak(0, 0);
                            else if ((mem[prevp].hh.b0 < 9))
                                trybreak(0, 0);
                            else if ((mem[prevp].hh.b0 == 11) && (mem[prevp].hh.b1 != 1))
                                trybreak(0, 0);
                        }
                        if ((mem[mem[curp + 1].hh.v.LH].hh.b1 != 0) && (mem[mem[curp + 1].hh.v.LH + 3].cint != 0)) {
                            mem[curp + 1].hh.v.LH = finiteshrink(mem[curp + 1].hh.v.LH);
                        }
                        q = mem[curp + 1].hh.v.LH;
                        activewidth[1] = activewidth[1] + mem[q + 1].cint;
                        activewidth[2 + mem[q].hh.b0] = activewidth[2 + mem[q]
                                                                    .hh.b0] + mem[q + 2].cint;
                        activewidth[6] = activewidth[6] + mem[q + 3].cint;
                        if (secondpass && autobreaking) {
                            prevs = curp;
                            s = mem[prevs].hh.v.RH;
                            if (s != MIN_HALFWORD) {
                                while (true) {

                                    if ((s >= himemmin)) {
                                        c = mem[s].hh.b1;
                                        hf = mem[s].hh.b0;
                                    } else if (mem[s].hh.b0 == 6) {

                                        if (mem[s + 1].hh.v.RH == MIN_HALFWORD)
                                            goto lab22;
                                        else {

                                            q = mem[s + 1].hh.v.RH;
                                            c = mem[q].hh.b1;
                                            hf = mem[q].hh.b0;
                                        }
                                    } else if ((mem[s].hh.b0 == 11) && (mem[s].hh.b1 == 0))
                                        goto lab22;
                                    else if ((mem[s].hh.b0 == 9) && (mem[s].hh.b1 >= 4))
                                        goto lab22;
                                    else if (mem[s].hh.b0 == 8) {
                                        if (mem[s].hh.b1 == 4) {
                                            curlang = mem[s + 1].hh.v.RH;
                                            lhyf = mem[s + 1].hh.b0;
                                            rhyf = mem[s + 1].hh.b1;
                                            if (trietrc[hyphstart + curlang] != curlang)
                                                hyphindex = 0;
                                            else
                                                hyphindex = trietrl[hyphstart + curlang];
                                        }
                                        goto lab22;
                                    } else
                                        goto lab31;
                                    if (hyphindex == 0)
                                        hc[0] = eqtb[27997 + c].hh.v.RH;
                                    else if (trietrc[hyphindex + c] != c)
                                        hc[0] = 0;
                                    else
                                        hc[0] = trietro[hyphindex + c];
                                    if (hc[0] != 0) {

                                        if ((hc[0] == c) || (eqtb[29315].cint > 0))
                                            goto lab32;
                                        else
                                            goto lab31;
                                    }
                                  lab22:prevs = s;
                                    s = mem[prevs].hh.v.RH;
                                }
                              lab32:hyfchar = hyphenchar[hf];
                                if (hyfchar < 0)
                                    goto lab31;
                                if (hyfchar > 255)
                                    goto lab31;
                                ha = prevs;
                                if (lhyf + rhyf > 63)
                                    goto lab31;
                                hn = 0;
                                while (true) {

                                    if ((s >= himemmin)) {
                                        if (mem[s].hh.b0 != hf)
                                            goto lab33;
                                        hyfbchar = mem[s].hh.b1;
                                        c = hyfbchar;
                                        if (hyphindex == 0)
                                            hc[0] = eqtb[27997 + c].hh.v.RH;
                                        else if (trietrc[hyphindex + c] != c)
                                            hc[0] = 0;
                                        else
                                            hc[0] = trietro[hyphindex + c];
                                        if (hc[0] == 0)
                                            goto lab33;
                                        if (hn == 63)
                                            goto lab33;
                                        hb = s;
                                        incr(hn);
                                        hu[hn] = c;
                                        hc[hn] = hc[0];
                                        hyfbchar = 256;
                                    } else if (mem[s].hh.b0 == 6) {
                                        if (mem[s + 1].hh.b0 != hf)
                                            goto lab33;
                                        j = hn;
                                        q = mem[s + 1].hh.v.RH;
                                        if (q > MIN_HALFWORD)
                                            hyfbchar = mem[q].hh.b1;
                                        while (q > MIN_HALFWORD) {

                                            c = mem[q].hh.b1;
                                            if (hyphindex == 0)
                                                hc[0] = eqtb[27997 + c].hh.v.RH;
                                            else if (trietrc[hyphindex + c] != c)
                                                hc[0] = 0;
                                            else
                                                hc[0] = trietro[hyphindex + c];
                                            if (hc[0] == 0)
                                                goto lab33;
                                            if (j == 63)
                                                goto lab33;
                                            incr(j);
                                            hu[j] = c;
                                            hc[j] = hc[0];
                                            q = mem[q].hh.v.RH;
                                        }
                                        hb = s;
                                        hn = j;
                                        if (odd(mem[s].hh.b1))
                                            hyfbchar = fontbchar[hf];
                                        else
                                            hyfbchar = 256;
                                    } else if ((mem[s].hh.b0 == 11) && (mem[s].hh.b1 == 0)) {
                                        hb = s;
                                        hyfbchar = fontbchar[hf];
                                    } else
                                        goto lab33;
                                    s = mem[s].hh.v.RH;
                                }
                              lab33:;
                                if (hn < lhyf + rhyf)
                                    goto lab31;
                                while (true) {

                                    if (!((s >= himemmin)))
                                        switch (mem[s].hh.b0) {
                                            case 6:
                                                ;
                                                break;
                                            case 11:
                                                if (mem[s].hh.b1 != 0)
                                                    goto lab34;
                                                break;
                                            case 8:
                                            case 10:
                                            case 12:
                                            case 3:
                                            case 5:
                                            case 4:
                                                goto lab34;
                                                break;
                                            case 9:
                                                if (mem[s].hh.b1 >= 4)
                                                    goto lab34;
                                                else
                                                    goto lab31;
                                                break;
                                            default:
                                                goto lab31;
                                                break;
                                        }
                                    s = mem[s].hh.v.RH;
                                }
                              lab34:;
                                hyphenate();
                            }
                          lab31:;
                        }
                    }
                    break;
                case 11:
                    if (mem[curp].hh.b1 == 1) {
                        if (!(mem[curp].hh.v.RH >= himemmin) && autobreaking) {

                            if (mem[mem[curp].hh.v.RH].hh.b0 == 10)
                                trybreak(0, 0);
                        }
                        activewidth[1] = activewidth[1] + mem[curp + 1].cint;
                    } else {

                        activewidth[1] = activewidth[1] + mem[curp + 1].cint;
                        if ((eqtb[29357].cint > 1) && (mem[curp].hh.b1 == 0)) {
                            activewidth[7] = activewidth[7] + kernstretch(curp);
                            activewidth[8] = activewidth[8] + kernshrink(curp);
                        }
                    }
                    break;
                case 6:
                    {
                        f = mem[curp + 1].hh.b0;
                        activewidth[1] = activewidth[1] + fontinfo[widthbase[f] + fontinfo[charbase[f] + effectivechar(true, f, mem[curp + 1].hh.b1)].qqqq.b0].cint;
                        if ((eqtb[29357].cint > 1) && checkexpandpars(f)) {
                            prevcharp = curp;
                            activewidth[7] = activewidth[7] + charstretch(f, mem[curp + 1].hh.b1);
                            activewidth[8] = activewidth[8] + charshrink(f, mem[curp + 1].hh.b1);
                        }
                    }
                    break;
                case 7:
                    {
                        s = mem[curp + 1].hh.v.LH;
                        discwidth[1] = 0;
                        if (eqtb[29357].cint > 1) {
                            discwidth[7] = 0;
                            discwidth[8] = 0;
                        }
                        if (s == MIN_HALFWORD)
                            trybreak(eqtb[29281].cint, 1);
                        else {

                            do {
                                if ((s >= himemmin)) {
                                    f = mem[s].hh.b0;
                                    discwidth[1] = discwidth[1] + fontinfo[widthbase[f]
                                                                           + fontinfo[charbase[f] + effectivechar(true, f, mem[s].hh.b1)].qqqq.b0].cint;
                                    if ((eqtb[29357].cint > 1) && checkexpandpars(f)) {
                                        prevcharp = s;
                                        discwidth[7] = discwidth[7] + charstretch(f, mem[s].hh.b1);
                                        discwidth[8] = discwidth[8] + charshrink(f, mem[s].hh.b1);
                                    }
                                } else
                                    switch (mem[s].hh.b0) {
                                        case 6:
                                            {
                                                f = mem[s + 1].hh.b0;
                                                discwidth[1] = discwidth[1] + fontinfo[widthbase[f] + fontinfo[charbase[f] + effectivechar(true, f, mem[s + 1].hh.b1)].qqqq.b0].cint;
                                                if ((eqtb[29357].cint > 1) && checkexpandpars(f)) {
                                                    prevcharp = s;
                                                    discwidth[7] = discwidth[7] + charstretch(f, mem[s + 1].hh.b1);
                                                    discwidth[8] = discwidth[8] + charshrink(f, mem[s + 1].hh.b1);
                                                }
                                            }
                                            break;
                                        case 0:
                                        case 1:
                                        case 2:
                                        case 11:
                                            {
                                                discwidth[1] = discwidth[1] + mem[s + 1].cint;
                                                if ((mem[s].hh.b0 == 11) && (eqtb[29357].cint > 1) && (mem[s].hh.b1 == 0)) {
                                                    discwidth[7] = discwidth[7] + kernstretch(s);
                                                    discwidth[8] = discwidth[8] + kernshrink(s);
                                                }
                                            }
                                            break;
                                        default:
                                            confusion(1354);
                                            break;
                                    }
                                s = mem[s].hh.v.RH;
                            } while (!(s == MIN_HALFWORD));
                            activewidth[1] = activewidth[1] + discwidth[1];
                            if (eqtb[29357].cint > 1) {
                                activewidth[7] = activewidth[7] + discwidth[7];
                                activewidth[8] = activewidth[8] + discwidth[8];
                            }
                            trybreak(eqtb[29280].cint, 1);
                            activewidth[1] = activewidth[1] - discwidth[1];
                            if (eqtb[29357].cint > 1) {
                                activewidth[7] = activewidth[7] - discwidth[7];
                                activewidth[8] = activewidth[8] - discwidth[8];
                            }
                        }
                        r = mem[curp].hh.b1;
                        s = mem[curp].hh.v.RH;
                        while (r > 0) {

                            if ((s >= himemmin)) {
                                f = mem[s].hh.b0;
                                activewidth[1] = activewidth[1] + fontinfo[widthbase[f] + fontinfo[charbase[f] + effectivechar(true, f, mem[s].hh.b1)].qqqq.b0].cint;
                                if ((eqtb[29357].cint > 1) && checkexpandpars(f)) {
                                    prevcharp = s;
                                    activewidth[7] = activewidth[7] + charstretch(f, mem[s].hh.b1);
                                    activewidth[8] = activewidth[8] + charshrink(f, mem[s].hh.b1);
                                }
                            } else
                                switch (mem[s].hh.b0) {
                                    case 6:
                                        {
                                            f = mem[s + 1].hh.b0;
                                            activewidth[1] = activewidth[1] + fontinfo[widthbase[f] + fontinfo[charbase[f] + effectivechar(true, f, mem[s + 1].hh.b1)].qqqq.b0].cint;
                                            if ((eqtb[29357].cint > 1) && checkexpandpars(f)) {
                                                prevcharp = s;
                                                activewidth[7] = activewidth[7] + charstretch(f, mem[s + 1].hh.b1);
                                                activewidth[8] = activewidth[8] + charshrink(f, mem[s + 1].hh.b1);
                                            }
                                        }
                                        break;
                                    case 0:
                                    case 1:
                                    case 2:
                                    case 11:
                                        {
                                            activewidth[1] = activewidth[1] + mem[s + 1].cint;
                                            if ((mem[s].hh.b0 == 11) && (eqtb[29357].cint > 1) && (mem[s].hh.b1 == 0)) {
                                                activewidth[7] = activewidth[7] + kernstretch(s);
                                                activewidth[8] = activewidth[8] + kernshrink(s);
                                            }
                                        }
                                        break;
                                    default:
                                        confusion(1355);
                                        break;
                                }
                            decr(r);
                            s = mem[s].hh.v.RH;
                        }
                        prevp = curp;
                        curp = s;
                        goto lab35;
                    }
                    break;
                case 9:
                    {
                        if (mem[curp].hh.b1 < 4)
                            autobreaking = odd(mem[curp].hh.b1);
                        {
                            if (!(mem[curp].hh.v.RH >= himemmin) && autobreaking) {

                                if (mem[mem[curp].hh.v.RH].hh.b0 == 10)
                                    trybreak(0, 0);
                            }
                            activewidth[1] = activewidth[1] + mem[curp + 1].cint;
                        }
                    }
                    break;
                case 12:
                    trybreak(mem[curp + 1].cint, 0);
                    break;
                case 4:
                case 3:
                case 5:
                    ;
                    break;
                default:
                    confusion(1353);
                    break;
            }
            prevp = curp;
            curp = mem[curp].hh.v.RH;
          lab35:;
        }
        if (curp == MIN_HALFWORD) {
            trybreak(-10000, 1);
            if (mem[memtop - 7].hh.v.RH != memtop - 7) {
                r = mem[memtop - 7].hh.v.RH;
                fewestdemerits = 1073741823L;
                do {
                    if (mem[r].hh.b0 != 2) {
                        if (mem[r + 2].cint < fewestdemerits) {
                            fewestdemerits = mem[r + 2].cint;
                            bestbet = r;
                        }
                    }
                    r = mem[r].hh.v.RH;
                } while (!(r == memtop - 7));
                bestline = mem[bestbet + 1].hh.v.LH;
                if (eqtb[29296].cint == 0)
                    goto lab30;
                {
                    r = mem[memtop - 7].hh.v.RH;
                    actuallooseness = 0;
                    do {
                        if (mem[r].hh.b0 != 2) {
                            linediff = mem[r + 1].hh.v.LH - bestline;
                            if (((linediff < actuallooseness) && (eqtb[29296].cint <= linediff)) || ((linediff > actuallooseness) && (eqtb[29296].cint >= linediff))) {
                                bestbet = r;
                                actuallooseness = linediff;
                                fewestdemerits = mem[r + 2].cint;
                            } else if ((linediff == actuallooseness) && (mem[r + 2]
                                                                         .cint < fewestdemerits)) {
                                bestbet = r;
                                fewestdemerits = mem[r + 2].cint;
                            }
                        }
                        r = mem[r].hh.v.RH;
                    } while (!(r == memtop - 7));
                    bestline = mem[bestbet + 1].hh.v.LH;
                }
                if ((actuallooseness == eqtb[29296].cint) || finalpass)
                    goto lab30;
            }
        }
        q = mem[memtop - 7].hh.v.RH;
        while (q != memtop - 7) {

            curp = mem[q].hh.v.RH;
            if (mem[q].hh.b0 == 2)
                freenode(q, 9);
            else
                freenode(q, activenodesize);
            q = curp;
        }
        q = passive;
        while (q != MIN_HALFWORD) {

            curp = mem[q].hh.v.RH;
            freenode(q, 2);
            q = curp;
        }
        if (!secondpass) {
            ;
#ifdef STAT
            if (eqtb[29309].cint > 0)
                printnl(1351);
#endif /* STAT */
            threshold = eqtb[29278].cint;
            secondpass = true;
            finalpass = (eqtb[29916].cint <= 0);
        } else {

            ;
#ifdef STAT
            if (eqtb[29309].cint > 0)
                printnl(1352);
#endif /* STAT */
            background[2] = background[2] + eqtb[29916].cint;
            finalpass = true;
        }
    }
  lab30:
    ;
#ifdef STAT
    if (eqtb[29309].cint > 0) {
        enddiagnostic(true);
        normalizeselector();
    }
#endif /* STAT */
    if (dolastlinefit) {

        if (mem[bestbet + 3].cint == 0)
            dolastlinefit = false;
        else {

            q = newspec(mem[lastlinefill + 1].hh.v.LH);
            deleteglueref(mem[lastlinefill + 1].hh.v.LH);
            mem[q + 1].cint = mem[q + 1].cint + mem[bestbet + 3].cint - mem[bestbet + 4].cint;
            mem[q + 2].cint = 0;
            mem[lastlinefill + 1].hh.v.LH = q;
        }
    }
    postlinebreak(d);
    q = mem[memtop - 7].hh.v.RH;
    while (q != memtop - 7) {

        curp = mem[q].hh.v.RH;
        if (mem[q].hh.b0 == 2)
            freenode(q, 9);
        else
            freenode(q, activenodesize);
        q = curp;
    }
    q = passive;
    while (q != MIN_HALFWORD) {

        curp = mem[q].hh.v.RH;
        freenode(q, 2);
        q = curp;
    }
    packbeginline = 0;
}

void newhyphexceptions(void)
{
    unsigned char n;
    unsigned char j;
    hyphpointer h;
    strnumber k;
    halfword p;
    halfword q;
    strnumber s;
    poolpointer u, v;
    scanleftbrace();
    if (eqtb[29327].cint <= 0)
        curlang = 0;
    else if (eqtb[29327].cint > 255)
        curlang = 0;
    else
        curlang = eqtb[29327].cint;
    ;
#ifdef INITEX
    if (trienotready) {
        hyphindex = 0;
        goto lab46;
    }
#endif /* INITEX */
    if (trietrc[hyphstart + curlang] != curlang)
        hyphindex = 0;
    else
        hyphindex = trietrl[hyphstart + curlang];
  lab46:n = 0;
    p = MIN_HALFWORD;
    while (true) {

        getxtoken();
      lab21:switch (curcmd) {
            case 11:
            case 12:
            case 68:
                if (curchr == 45) {
                    if (n < 63) {
                        q = getavail();
                        mem[q].hh.v.RH = p;
                        mem[q].hh.v.LH = n;
                        p = q;
                    }
                } else {

                    if (hyphindex == 0)
                        hc[0] = eqtb[27997 + curchr].hh.v.RH;
                    else if (trietrc[hyphindex + curchr] != curchr)
                        hc[0] = 0;
                    else
                        hc[0] = trietro[hyphindex + curchr];
                    if (hc[0] == 0) {
                        {
                            if (interaction == 3);
                            if (filelineerrorstylep)
                                printfileline();
                            else
                                printnl(264);
                            print(1362);
                        }
                        {
                            helpptr = 2;
                            helpline[1] = 1363;
                            helpline[0] = 1364;
                        }
                        error();
                    } else if (n < 63) {
                        incr(n);
                        hc[n] = hc[0];
                    }
                }
                break;
            case 16:
                {
                    scancharnum();
                    curchr = curval;
                    curcmd = 68;
                    goto lab21;
                }
                break;
            case 10:
            case 2:
                {
                    if (n > 1) {
                        incr(n);
                        hc[n] = curlang;
                        {
                            if (poolptr + n > poolsize)
                                overflow(259, poolsize - initpoolptr);
                        }
                        h = 0;
                        {
                            register int for_end;
                            j = 1;
                            for_end = n;
                            if (j <= for_end)
                                do {
                                    h = (h + h + hc[j]) % 607;
                                    {
                                        strpool[poolptr] = hc[j];
                                        incr(poolptr);
                                    }
                                }
                                while (j++ < for_end);
                        }
                        s = makestring();
                        if (hyphnext <= 607)
                            while ((hyphnext > 0) && (hyphword[hyphnext - 1] > 0))
                                decr(hyphnext);
                        if ((hyphcount == hyphsize) || (hyphnext == 0))
                            overflow(1365, hyphsize);
                        incr(hyphcount);
                        while (hyphword[h] != 0) {

                            k = hyphword[h];
                            if ((strstart[k + 1] - strstart[k]) != (strstart[s + 1] - strstart[s]))
                                goto lab45;
                            u = strstart[k];
                            v = strstart[s];
                            do {
                                if (strpool[u] != strpool[v])
                                    goto lab45;
                                incr(u);
                                incr(v);
                            } while (!(u == strstart[k + 1]));
                            {
                                decr(strptr);
                                poolptr = strstart[strptr];
                            }
                            s = hyphword[h];
                            decr(hyphcount);
                            goto lab40;
                          lab45:;
                            if (hyphlink[h] == 0) {
                                hyphlink[h] = hyphnext;
                                if (hyphnext >= hyphsize)
                                    hyphnext = 607;
                                if (hyphnext > 607)
                                    incr(hyphnext);
                            }
                            h = hyphlink[h] - 1;
                        }
                      lab40:hyphword[h] = s;
                        hyphlist[h] = p;
                    }
                    if (curcmd == 2)
                        return;
                    n = 0;
                    p = MIN_HALFWORD;
                }
                break;
            default:
                {
                    {
                        if (interaction == 3);
                        if (filelineerrorstylep)
                            printfileline();
                        else
                            printnl(264);
                        print(783);
                    }
                    printesc(1358);
                    print(1359);
                    {
                        helpptr = 2;
                        helpline[1] = 1360;
                        helpline[0] = 1361;
                    }
                    error();
                }
                break;
        }
    }
}

bool zdomarks(smallnumber a, smallnumber l, halfword q)
{
    register bool Result;
    smallnumber i;
    if (l < 4) {
        {
            register int for_end;
            i = 0;
            for_end = 15;
            if (i <= for_end)
                do {
                    if (odd(i))
                        curptr = mem[q + (i / 2) + 1].hh.v.RH;
                    else
                        curptr = mem[q + (i / 2) + 1].hh.v.LH;
                    if (curptr != MIN_HALFWORD) {

                        if (domarks(a, l + 1, curptr)) {
                            if (odd(i))
                                mem[q + (i / 2) + 1].hh.v.RH = MIN_HALFWORD;
                            else
                                mem[q + (i / 2) + 1].hh.v.LH = MIN_HALFWORD;
                            decr(mem[q].hh.b1);
                        }
                    }
                }
                while (i++ < for_end);
        }
        if (mem[q].hh.b1 == 0) {
            freenode(q, 9);
            q = MIN_HALFWORD;
        }
    } else {

        switch (a) {
            case 0:
                if (mem[q + 2].hh.v.RH != MIN_HALFWORD) {
                    deletetokenref(mem[q + 2].hh.v.RH);
                    mem[q + 2].hh.v.RH = MIN_HALFWORD;
                    deletetokenref(mem[q + 3].hh.v.LH);
                    mem[q + 3].hh.v.LH = MIN_HALFWORD;
                }
                break;
            case 1:
                if (mem[q + 2].hh.v.LH != MIN_HALFWORD) {
                    if (mem[q + 1].hh.v.LH != MIN_HALFWORD)
                        deletetokenref(mem[q + 1].hh.v.LH);
                    deletetokenref(mem[q + 1].hh.v.RH);
                    mem[q + 1].hh.v.RH = MIN_HALFWORD;
                    if (mem[mem[q + 2].hh.v.LH].hh.v.RH == MIN_HALFWORD) {
                        deletetokenref(mem[q + 2].hh.v.LH);
                        mem[q + 2].hh.v.LH = MIN_HALFWORD;
                    } else
                        incr(mem[mem[q + 2].hh.v.LH].hh.v.LH);
                    mem[q + 1].hh.v.LH = mem[q + 2].hh.v.LH;
                }
                break;
            case 2:
                if ((mem[q + 1].hh.v.LH != MIN_HALFWORD) && (mem[q + 1].hh.v.RH == MIN_HALFWORD)) {
                    mem[q + 1].hh.v.RH = mem[q + 1].hh.v.LH;
                    incr(mem[mem[q + 1].hh.v.LH].hh.v.LH);
                }
                break;
                ;
#ifdef INITEX
            case 3:
                {
                    register int for_end;
                    i = 0;
                    for_end = 4;
                    if (i <= for_end)
                        do {
                            if (odd(i))
                                curptr = mem[q + (i / 2) + 1].hh.v.RH;
                            else
                                curptr = mem[q + (i / 2) + 1].hh.v.LH;
                            if (curptr != MIN_HALFWORD) {
                                deletetokenref(curptr);
                                if (odd(i))
                                    mem[q + (i / 2) + 1].hh.v.RH = MIN_HALFWORD;
                                else
                                    mem[q + (i / 2) + 1].hh.v.LH = MIN_HALFWORD;
                            }
                        }
                        while (i++ < for_end);
                }
                break;
#endif /* INITEX */
        }
        if (mem[q + 2].hh.v.LH == MIN_HALFWORD) {

            if (mem[q + 3].hh.v.LH == MIN_HALFWORD) {
                freenode(q, 4);
                q = MIN_HALFWORD;
            }
        }
    }
    Result = (q == MIN_HALFWORD);
    return Result;
}

void prefixedcommand(void)
{
        smallnumber a;
    internalfontnumber f;
    halfword j;
    fontindex k;
    halfword p, q, r;
    int n;
    bool e;
    a = 0;
    while (curcmd == 93) {

        if (!odd(a / curchr))
            a = a + curchr;
        do {
            getxtoken();
        } while (!((curcmd != 10) && (curcmd != 0)));
        if (curcmd <= 70) {
            {
                if (interaction == 3);
                if (filelineerrorstylep)
                    printfileline();
                else
                    printnl(264);
                print(1600);
            }
            printcmdchr(curcmd, curchr);
            printchar(39);
            {
                helpptr = 1;
                helpline[0] = 1601;
            }
            if ((eTeXmode == 1))
                helpline[0] = 1602;
            backerror();
            return;
        }
        if (eqtb[29313].cint > 2) {

            if ((eTeXmode == 1))
                showcurcmdchr();
        }
    }
    if (a >= 8) {
        j = 3585;
        a = a - 8;
    } else
        j = 0;
    if ((curcmd != 97) && ((a % 4 != 0) || (j != 0))) {
        {
            if (interaction == 3);
            if (filelineerrorstylep)
                printfileline();
            else
                printnl(264);
            print(788);
        }
        printesc(1592);
        print(1603);
        printesc(1593);
        {
            helpptr = 1;
            helpline[0] = 1604;
        }
        if ((eTeXmode == 1)) {
            helpline[0] = 1605;
            print(1603);
            printesc(1606);
        }
        print(1607);
        printcmdchr(curcmd, curchr);
        printchar(39);
        error();
    }
    if (eqtb[29320].cint != 0) {

        if (eqtb[29320].cint < 0) {
            if ((a >= 4))
                a = a - 4;
        } else {

            if (!(a >= 4))
                a = a + 4;
        }
    }
    switch (curcmd) {
        case 87:
            if ((a >= 4))
                geqdefine(27689, 122, curchr);
            else
                eqdefine(27689, 122, curchr);
            break;
        case 97:
            {
                if (odd(curchr) && !(a >= 4) && (eqtb[29320].cint >= 0))
                    a = a + 4;
                e = (curchr >= 2);
                getrtoken();
                p = curcs;
                q = scantoks(true, e);
                if (j != 0) {
                    q = getavail();
                    mem[q].hh.v.LH = j;
                    mem[q].hh.v.RH = mem[defref].hh.v.RH;
                    mem[defref].hh.v.RH = q;
                }
                if ((a >= 4))
                    geqdefine(p, 113 + (a % 4), defref);
                else
                    eqdefine(p, 113 + (a % 4), defref);
            }
            break;
        case 94:
            if (curchr == 11);
            else if (curchr == 10) {
                selector = 19;
                gettoken();
                mubytestoken = curtok;
                if (curtok <= 4095)
                    mubytestoken = curtok % 256;
                mubyteprefix = 60;
                mubyterelax = false;
                mubytetablein = true;
                mubytetableout = true;
                getxtoken();
                if (curcmd == 10)
                    getxtoken();
                if (curcmd == 8) {
                    mubytetableout = false;
                    getxtoken();
                    if (curcmd == 8) {
                        mubytetableout = true;
                        mubytetablein = false;
                        getxtoken();
                    }
                } else if ((mubytestoken > 4095) && (curcmd == 6)) {
                    mubytetableout = false;
                    scanint();
                    mubyteprefix = curval;
                    getxtoken();
                    if (mubyteprefix > 50)
                        mubyteprefix = 52;
                    if (mubyteprefix <= 0)
                        mubyteprefix = 51;
                } else if ((mubytestoken > 4095) && (curcmd == 0)) {
                    mubytetableout = true;
                    mubytetablein = false;
                    mubyterelax = true;
                    getxtoken();
                }
                r = getavail();
                p = r;
                while (curcs == 0) {

                    {
                        q = getavail();
                        mem[p].hh.v.RH = q;
                        mem[q].hh.v.LH = curtok;
                        p = q;
                    }
                    getxtoken();
                }
                if ((curcmd != 67) || (curchr != 10)) {
                    {
                        if (interaction == 3);
                        if (filelineerrorstylep)
                            printfileline();
                        else
                            printnl(264);
                        print(714);
                    }
                    printesc(594);
                    print(715);
                    {
                        helpptr = 2;
                        helpline[1] = 716;
                        helpline[0] = 1619;
                    }
                    backerror();
                }
                p = mem[r].hh.v.RH;
                if ((p == MIN_HALFWORD) && mubytetablein) {
                    {
                        if (interaction == 3);
                        if (filelineerrorstylep)
                            printfileline();
                        else
                            printnl(264);
                        print(1620);
                    }
                    printesc(1617);
                    print(1621);
                    {
                        helpptr = 2;
                        helpline[1] = 1622;
                        helpline[0] = 1623;
                    }
                    error();
                } else {

                    while (p != MIN_HALFWORD) {

                        {
                            strpool[poolptr] = mem[p].hh.v.LH % 256;
                            incr(poolptr);
                        }
                        p = mem[p].hh.v.RH;
                    }
                    flushlist(r);
                    if ((strstart[strptr] + 1 == poolptr) && (strpool[poolptr - 1] == mubytestoken)) {
                        if (mubyteread[mubytestoken] != MIN_HALFWORD && mubytetablein)
                            disposemunode(mubyteread[mubytestoken]);
                        if (mubytetablein)
                            mubyteread[mubytestoken] = MIN_HALFWORD;
                        if (mubytetableout)
                            mubytewrite[mubytestoken] = 0;
                        poolptr = strstart[strptr];
                    } else {

                        if (mubytetablein)
                            mubyteupdate();
                        if (mubytetableout) {
                            if (mubytestoken > 4095) {
                                disposemutableout(mubytestoken - 4095);
                                if ((strstart[strptr] < poolptr) || mubyterelax) {
                                    r = mubytecswrite[(mubytestoken - 4095) % 128];
                                    p = getavail();
                                    mubytecswrite[(mubytestoken - 4095) % 128] = p;
                                    mem[p].hh.v.LH = mubytestoken - 4095;
                                    mem[p].hh.v.RH = getavail();
                                    p = mem[p].hh.v.RH;
                                    if (mubyterelax) {
                                        mem[p].hh.v.LH = 0;
                                        poolptr = strstart[strptr];
                                    } else
                                        mem[p].hh.v.LH = slowmakestring();
                                    mem[p].hh.v.RH = r;
                                }
                            } else {

                                if (strstart[strptr] == poolptr)
                                    mubytewrite[mubytestoken] = 0;
                                else
                                    mubytewrite[mubytestoken] = slowmakestring();
                            }
                        } else
                            poolptr = strstart[strptr];
                    }
                }
            } else {

                n = curchr;
                getrtoken();
                p = curcs;
                if (n == 0) {
                    do {
                        gettoken();
                    } while (!(curcmd != 10));
                    if (curtok == 3133) {
                        gettoken();
                        if (curcmd == 10)
                            gettoken();
                    }
                } else {

                    gettoken();
                    q = curtok;
                    gettoken();
                    backinput();
                    curtok = q;
                    backinput();
                }
                if (curcmd >= 113)
                    incr(mem[curchr].hh.v.LH);
                else if ((curcmd == 89) || (curcmd == 71)) {

                    if ((curchr < membot) || (curchr > membot + 19))
                        incr(mem[curchr + 1].hh.v.LH);
                }
                if ((a >= 4))
                    geqdefine(p, curcmd, curchr);
                else
                    eqdefine(p, curcmd, curchr);
            }
            break;
        case 95:
            if (curchr == 7) {
                scancharnum();
                p = 29021 + curval;
                scanoptionalequals();
                scancharnum();
                n = curval;
                scancharnum();
                if ((eqtb[29334].cint > 0)) {
                    begindiagnostic();
                    printnl(1632);
                    print(p - 29021);
                    print(1633);
                    print(n);
                    printchar(32);
                    print(curval);
                    enddiagnostic(false);
                }
                n = n * 256 + curval;
                if ((a >= 4))
                    geqdefine(p, 122, n);
                else
                    eqdefine(p, 122, n);
                if ((p - 29021) < eqtb[29332].cint) {

                    if ((a >= 4))
                        geqworddefine(29332, p - 29021);
                    else
                        eqworddefine(29332, p - 29021);
                }
                if ((p - 29021) > eqtb[29333].cint) {

                    if ((a >= 4))
                        geqworddefine(29333, p - 29021);
                    else
                        eqworddefine(29333, p - 29021);
                }
            } else {

                n = curchr;
                getrtoken();
                p = curcs;
                if ((a >= 4))
                    geqdefine(p, 0, 256);
                else
                    eqdefine(p, 0, 256);
                scanoptionalequals();
                switch (n) {
                    case 0:
                        {
                            scancharnum();
                            if ((a >= 4))
                                geqdefine(p, 68, curval);
                            else
                                eqdefine(p, 68, curval);
                        }
                        break;
                    case 1:
                        {
                            scanfifteenbitint();
                            if ((a >= 4))
                                geqdefine(p, 69, curval);
                            else
                                eqdefine(p, 69, curval);
                        }
                        break;
                    default:
                        {
                            scanregisternum();
                            if (curval > 255) {
                                j = n - 2;
                                if (j > 3)
                                    j = 5;
                                findsaelement(j, curval, true);
                                incr(mem[curptr + 1].hh.v.LH);
                                if (j == 5)
                                    j = 71;
                                else
                                    j = 89;
                                if ((a >= 4))
                                    geqdefine(p, j, curptr);
                                else
                                    eqdefine(p, j, curptr);
                            } else
                                switch (n) {
                                    case 2:
                                        if ((a >= 4))
                                            geqdefine(p, 73, 29384 + curval);
                                        else
                                            eqdefine(p, 73, 29384 + curval);
                                        break;
                                    case 3:
                                        if ((a >= 4))
                                            geqdefine(p, 74, 29930 + curval);
                                        else
                                            eqdefine(p, 74, 29930 + curval);
                                        break;
                                    case 4:
                                        if ((a >= 4))
                                            geqdefine(p, 75, 26646 + curval);
                                        else
                                            eqdefine(p, 75, 26646 + curval);
                                        break;
                                    case 5:
                                        if ((a >= 4))
                                            geqdefine(p, 76, 26902 + curval);
                                        else
                                            eqdefine(p, 76, 26902 + curval);
                                        break;
                                    case 6:
                                        if ((a >= 4))
                                            geqdefine(p, 72, 27173 + curval);
                                        else
                                            eqdefine(p, 72, 27173 + curval);
                                        break;
                                }
                        }
                        break;
                }
            }
            break;
        case 96:
            {
                j = curchr;
                scanint();
                n = curval;
                if (!scankeyword(1248)) {
                    {
                        if (interaction == 3);
                        if (filelineerrorstylep)
                            printfileline();
                        else
                            printnl(264);
                        print(1490);
                    }
                    {
                        helpptr = 2;
                        helpline[1] = 1634;
                        helpline[0] = 1635;
                    }
                    error();
                }
                getrtoken();
                p = curcs;
                readtoks(n, p, j);
                if ((a >= 4))
                    geqdefine(p, 113, curval);
                else
                    eqdefine(p, 113, curval);
            }
            break;
        case 71:
        case 72:
            {
                q = curcs;
                e = false;
                if (curcmd == 71) {

                    if (curchr == membot) {
                        scanregisternum();
                        if (curval > 255) {
                            findsaelement(5, curval, true);
                            curchr = curptr;
                            e = true;
                        } else
                            curchr = 27173 + curval;
                    } else
                        e = true;
                }
                p = curchr;
                scanoptionalequals();
                do {
                    getxtoken();
                } while (!((curcmd != 10) && (curcmd != 0)));
                if (curcmd != 1) {

                    if ((curcmd == 71) || (curcmd == 72)) {
                        if (curcmd == 71) {

                            if (curchr == membot) {
                                scanregisternum();
                                if (curval < 256)
                                    q = eqtb[27173 + curval].hh.v.RH;
                                else {

                                    findsaelement(5, curval, false);
                                    if (curptr == MIN_HALFWORD)
                                        q = MIN_HALFWORD;
                                    else
                                        q = mem[curptr + 1].hh.v.RH;
                                }
                            } else
                                q = mem[curchr + 1].hh.v.RH;
                        } else
                            q = eqtb[curchr].hh.v.RH;
                        if (q == MIN_HALFWORD) {

                            if (e) {

                                if ((a >= 4))
                                    gsadef(p, MIN_HALFWORD);
                                else
                                    sadef(p, MIN_HALFWORD);
                            } else if ((a >= 4))
                                geqdefine(p, 103, MIN_HALFWORD);
                            else
                                eqdefine(p, 103, MIN_HALFWORD);
                        } else {

                            incr(mem[q].hh.v.LH);
                            if (e) {

                                if ((a >= 4))
                                    gsadef(p, q);
                                else
                                    sadef(p, q);
                            } else if ((a >= 4))
                                geqdefine(p, 113, q);
                            else
                                eqdefine(p, 113, q);
                        }
                        goto lab30;
                    }
                }
                backinput();
                curcs = q;
                q = scantoks(false, false);
                if (mem[defref].hh.v.RH == MIN_HALFWORD) {
                    if (e) {

                        if ((a >= 4))
                            gsadef(p, MIN_HALFWORD);
                        else
                            sadef(p, MIN_HALFWORD);
                    } else if ((a >= 4))
                        geqdefine(p, 103, MIN_HALFWORD);
                    else
                        eqdefine(p, 103, MIN_HALFWORD);
                    {
                        mem[defref].hh.v.RH = avail;
                        avail = defref;
                        ;
#ifdef STAT
                        decr(dynused);
#endif /* STAT */
                    }
                } else {

                    if ((p == 27159) && !e) {
                        mem[q].hh.v.RH = getavail();
                        q = mem[q].hh.v.RH;
                        mem[q].hh.v.LH = 637;
                        q = getavail();
                        mem[q].hh.v.LH = 379;
                        mem[q].hh.v.RH = mem[defref].hh.v.RH;
                        mem[defref].hh.v.RH = q;
                    }
                    if (e) {

                        if ((a >= 4))
                            gsadef(p, defref);
                        else
                            sadef(p, defref);
                    } else if ((a >= 4))
                        geqdefine(p, 113, defref);
                    else
                        eqdefine(p, 113, defref);
                }
            }
            break;
        case 73:
            {
                p = curchr;
                scanoptionalequals();
                scanint();
                if ((a >= 4))
                    geqworddefine(p, curval);
                else
                    eqworddefine(p, curval);
            }
            break;
        case 74:
            {
                p = curchr;
                scanoptionalequals();
                scandimen(false, false, false);
                if ((a >= 4))
                    geqworddefine(p, curval);
                else
                    eqworddefine(p, curval);
            }
            break;
        case 75:
        case 76:
            {
                p = curchr;
                n = curcmd;
                scanoptionalequals();
                if (n == 76)
                    scanglue(3);
                else
                    scanglue(2);
                trapzeroglue();
                if ((a >= 4))
                    geqdefine(p, 119, curval);
                else
                    eqdefine(p, 119, curval);
            }
            break;
        case 85:
            {
                if (curchr == 27741)
                    n = 15;
                else if (curchr == 28765)
                    n = 32768L;
                else if (curchr == 28509)
                    n = 32767;
                else if (curchr == 29640)
                    n = 16777215L;
                else
                    n = 255;
                p = curchr;
                scancharnum();
                if (p == 27690)
                    p = curval;
                else if (p == 27691)
                    p = curval + 256;
                else if (p == 27692)
                    p = curval + 512;
                else
                    p = p + curval;
                scanoptionalequals();
                scanint();
                if (((curval < 0) && (p < 29640)) || (curval > n)) {
                    {
                        if (interaction == 3);
                        if (filelineerrorstylep)
                            printfileline();
                        else
                            printnl(264);
                        print(1639);
                    }
                    printint(curval);
                    if (p < 29640)
                        print(1640);
                    else
                        print(1641);
                    printint(n);
                    {
                        helpptr = 1;
                        helpline[0] = 1642;
                    }
                    error();
                    curval = 0;
                }
                if (p < 256)
                    xord[p] = curval;
                else if (p < 512)
                    xchr[p - 256] = curval;
                else if (p < 768)
                    xprn[p - 512] = curval;
                else if (p < 28765) {

                    if ((a >= 4))
                        geqdefine(p, 122, curval);
                    else
                        eqdefine(p, 122, curval);
                } else if (p < 29640) {

                    if ((a >= 4))
                        geqdefine(p, 122, curval);
                    else
                        eqdefine(p, 122, curval);
                } else if ((a >= 4))
                    geqworddefine(p, curval);
                else
                    eqworddefine(p, curval);
            }
            break;
        case 86:
            {
                p = curchr;
                scanfourbitint();
                p = p + curval;
                scanoptionalequals();
                scanfontident();
                if ((a >= 4))
                    geqdefine(p, 122, curval);
                else
                    eqdefine(p, 122, curval);
            }
            break;
        case 89:
        case 90:
        case 91:
        case 92:
            doregistercommand(a);
            break;
        case 98:
            {
                scanregisternum();
                if ((a >= 4))
                    n = 1073774592L + curval;
                else
                    n = 1073741824L + curval;
                scanoptionalequals();
                if (setboxallowed)
                    scanbox(n);
                else {

                    {
                        if (interaction == 3);
                        if (filelineerrorstylep)
                            printfileline();
                        else
                            printnl(264);
                        print(783);
                    }
                    printesc(618);
                    {
                        helpptr = 2;
                        helpline[1] = 1648;
                        helpline[0] = 1649;
                    }
                    error();
                }
            }
            break;
        case 79:
            alteraux();
            break;
        case 80:
            alterprevgraf();
            break;
        case 81:
            alterpagesofar();
            break;
        case 82:
            alterinteger();
            break;
        case 83:
            alterboxdimen();
            break;
        case 84:
            {
                q = curchr;
                scanoptionalequals();
                scanint();
                n = curval;
                if (n <= 0)
                    p = MIN_HALFWORD;
                else if (q > 27158) {
                    n = (curval / 2) + 1;
                    p = getnode(2 * n + 1);
                    mem[p].hh.v.LH = n;
                    n = curval;
                    mem[p + 1].cint = n;
                    {
                        register int for_end;
                        j = p + 2;
                        for_end = p + n + 1;
                        if (j <= for_end)
                            do {
                                scanint();
                                mem[j].cint = curval;
                            }
                            while (j++ < for_end);
                    }
                    if (!odd(n))
                        mem[p + n + 2].cint = 0;
                } else {

                    p = getnode(2 * n + 1);
                    mem[p].hh.v.LH = n;
                    {
                        register int for_end;
                        j = 1;
                        for_end = n;
                        if (j <= for_end)
                            do {
                                scandimen(false, false, false);
                                mem[p + 2 * j - 1].cint = curval;
                                scandimen(false, false, false);
                                mem[p + 2 * j].cint = curval;
                            }
                            while (j++ < for_end);
                    }
                }
                if ((a >= 4))
                    geqdefine(q, 120, p);
                else
                    eqdefine(q, 120, p);
            }
            break;
        case 99:
            if (curchr == 1) {
                ;
#ifdef INITEX
                if (iniversion) {
                    newpatterns();
                    goto lab30;
                }
#endif /* INITEX */
                {
                    if (interaction == 3);
                    if (filelineerrorstylep)
                        printfileline();
                    else
                        printnl(264);
                    print(1653);
                }
                helpptr = 0;
                error();
                do {
                    gettoken();
                } while (!(curcmd == 2));
                return;
            } else {

                newhyphexceptions();
                goto lab30;
            }
            break;
        case 77:
            {
                findfontdimen(true);
                k = curval;
                scanoptionalequals();
                scandimen(false, false, false);
                fontinfo[k].cint = curval;
            }
            break;
        case 78:
            {
                n = curchr;
                scanfontident();
                f = curval;
                if (n == 6)
                    setnoligatures(f);
                else if (n < 2) {
                    scanoptionalequals();
                    scanint();
                    if (n == 0)
                        hyphenchar[f] = curval;
                    else
                        skewchar[f] = curval;
                } else {

                    scancharnum();
                    p = curval;
                    scanoptionalequals();
                    scanint();
                    switch (n) {
                        case 2:
                            setlpcode(f, p, curval);
                            break;
                        case 3:
                            setrpcode(f, p, curval);
                            break;
                        case 4:
                            setefcode(f, p, curval);
                            break;
                        case 5:
                            settagcode(f, p, curval);
                            break;
                        case 7:
                            setknbscode(f, p, curval);
                            break;
                        case 8:
                            setstbscode(f, p, curval);
                            break;
                        case 9:
                            setshbscode(f, p, curval);
                            break;
                        case 10:
                            setknbccode(f, p, curval);
                            break;
                        case 11:
                            setknaccode(f, p, curval);
                            break;
                    }
                }
            }
            break;
        case 88:
            newfont(a);
            break;
        case 101:
            newletterspacedfont(a);
            break;
        case 102:
            makefontcopy(a);
            break;
        case 100:
            newinteraction();
            break;
        default:
            confusion(1599);
            break;
    }
  lab30:if (aftertoken != 0) {
        curtok = aftertoken;
        backinput();
        aftertoken = 0;
    }
}

#ifdef INITEX
void storefmtfile(void)
{
    int j, k, l;
    halfword p, q;
    int x;
    unsigned char *formatengine;
    if (saveptr != 0) {
        {
            if (interaction == 3);
            if (filelineerrorstylep)
                printfileline();
            else
                printnl(264);
            print(1702);
        }
        {
            helpptr = 1;
            helpline[0] = 1703;
        }
        {
            if (interaction == 3)
                interaction = 2;
            if (logopened)
                error();
            ;
#ifdef TEXMF_DEBUG
            if (interaction > 0)
                debughelp();
#endif /* TEXMF_DEBUG */
            history = 3;
            jumpout();
        }
    }
    selector = 21;
    print(1721);
    print(jobname);
    printchar(32);
    printint(eqtb[29300].cint);
    printchar(46);
    printint(eqtb[29299].cint);
    printchar(46);
    printint(eqtb[29298].cint);
    printchar(41);
    if (interaction == 0)
        selector = 18;
    else
        selector = 19;
    {
        if (poolptr + 1 > poolsize)
            overflow(259, poolsize - initpoolptr);
    }
    formatident = makestring();
    packjobname(941);
    while (!wopenout(fmtfile))
        promptfilename(1722, 941);
    printnl(1723);
    slowprint(wmakenamestring(fmtfile));
    {
        decr(strptr);
        poolptr = strstart[strptr];
    }
    printnl(345);
    slowprint(formatident);
    dumpint(1462916184L);
    x = strlen(enginename);
    formatengine = xmallocarray(unsigned char, x + 4);
    strcpy(stringcast(formatengine), enginename);
    {
        register int for_end;
        k = x;
        for_end = x + 3;
        if (k <= for_end)
            do
                formatengine[k] = 0;
            while (k++ < for_end);
    }
    x = x + 4 - (x % 4);
    dumpint(x);
    dumpthings(formatengine[0], x);
    libcfree(formatengine);
    dumpint(47194459L);
    dumpthings(xord[0], 256);
    dumpthings(xchr[0], 256);
    dumpthings(xprn[0], 256);
    dumpint(MAX_HALFWORD);
    dumpint(hashhigh);
    dumpint(eTeXmode);
    {
        register int for_end;
        j = 0;
        for_end = -0;
        if (j <= for_end)
            do
                eqtb[29382 + j].cint = 0;
            while (j++ < for_end);
    }
    while (pseudofiles != MIN_HALFWORD)
        pseudoclose();
    dumpint(membot);
    dumpint(memtop);
    dumpint(30185);
    dumpint(8501);
    dumpint(607);
    dumpint(1296847960L);
    if (mltexp)
        dumpint(1);
    else
        dumpint(0);
    dumpint(1162040408L);
    if (!enctexp)
        dumpint(0);
    else {

        dumpint(1);
        dumpthings(mubyteread[0], 256);
        dumpthings(mubytewrite[0], 256);
        dumpthings(mubytecswrite[0], 128);
    }
    dumpint(poolptr);
    dumpint(strptr);
    dumpthings(strstart[0], strptr + 1);
    dumpthings(strpool[0], poolptr);
    println();
    printint(strptr);
    print(1704);
    printint(poolptr);
    sortavail();
    varused = 0;
    dumpint(lomemmax);
    dumpint(rover);
    if ((eTeXmode == 1)) {
        register int for_end;
        k = 0;
        for_end = 5;
        if (k <= for_end)
            do
                dumpint(saroot[k]);
            while (k++ < for_end);
    }
    p = membot;
    q = rover;
    x = 0;
    do {
        dumpthings(mem[p], q + 2 - p);
        x = x + q + 2 - p;
        varused = varused + q - p;
        p = q + mem[q].hh.v.LH;
        q = mem[q + 1].hh.v.RH;
    } while (!(q == rover));
    varused = varused + lomemmax - p;
    dynused = memend + 1 - himemmin;
    dumpthings(mem[p], lomemmax + 1 - p);
    x = x + lomemmax + 1 - p;
    dumpint(himemmin);
    dumpint(avail);
    dumpthings(mem[himemmin], memend + 1 - himemmin);
    x = x + memend + 1 - himemmin;
    p = avail;
    while (p != MIN_HALFWORD) {

        decr(dynused);
        p = mem[p].hh.v.RH;
    }
    dumpint(varused);
    dumpint(dynused);
    println();
    printint(x);
    print(1705);
    printint(varused);
    printchar(38);
    printint(dynused);
    k = 1;
    do {
        j = k;
        while (j < 29276) {

            if ((eqtb[j].hh.v.RH == eqtb[j + 1].hh.v.RH) && (eqtb[j].hh.b0 == eqtb[j + 1].hh.b0) && (eqtb[j].hh.b1 == eqtb[j + 1].hh.b1))
                goto lab41;
            incr(j);
        }
        l = 29277;
        goto lab31;
      lab41:incr(j);
        l = j;
        while (j < 29276) {

            if ((eqtb[j].hh.v.RH != eqtb[j + 1].hh.v.RH) || (eqtb[j].hh.b0 != eqtb[j + 1].hh.b0) || (eqtb[j].hh.b1 != eqtb[j + 1].hh.b1))
                goto lab31;
            incr(j);
        }
      lab31:dumpint(l - k);
        dumpthings(eqtb[k], l - k);
        k = j + 1;
        dumpint(k - l);
    } while (!(k == 29277));
    do {
        j = k;
        while (j < 30185) {

            if (eqtb[j].cint == eqtb[j + 1].cint)
                goto lab42;
            incr(j);
        }
        l = 30186;
        goto lab32;
      lab42:incr(j);
        l = j;
        while (j < 30185) {

            if (eqtb[j].cint != eqtb[j + 1].cint)
                goto lab32;
            incr(j);
        }
      lab32:dumpint(l - k);
        dumpthings(eqtb[k], l - k);
        k = j + 1;
        dumpint(k - l);
    } while (!(k > 30185));
    if (hashhigh > 0)
        dumpthings(eqtb[30186], hashhigh);
    dumpint(parloc);
    dumpint(writeloc);
    {
        register int for_end;
        p = 0;
        for_end = 2100;
        if (p <= for_end)
            do
                dumphh(prim[p]);
            while (p++ < for_end);
    }
    dumpint(hashused);
    cscount = 15513 - hashused + hashhigh;
    {
        register int for_end;
        p = 514;
        for_end = hashused;
        if (p <= for_end)
            do
                if (hash[p].v.RH != 0) {
                    dumpint(p);
                    dumphh(hash[p]);
                    incr(cscount);
                }
            while (p++ < for_end);
    }
    dumpthings(hash[hashused + 1], 26626 - hashused);
    if (hashhigh > 0)
        dumpthings(hash[30186], hashhigh);
    dumpint(cscount);
    println();
    printint(cscount);
    print(1706);
    dumpint(fmemptr);
    dumpthings(fontinfo[0], fmemptr);
    dumpint(fontptr);
    {
        dumpthings(fontcheck[0], fontptr + 1);
        dumpthings(fontsize[0], fontptr + 1);
        dumpthings(fontdsize[0], fontptr + 1);
        dumpthings(fontparams[0], fontptr + 1);
        dumpthings(hyphenchar[0], fontptr + 1);
        dumpthings(skewchar[0], fontptr + 1);
        dumpthings(fontname[0], fontptr + 1);
        dumpthings(fontarea[0], fontptr + 1);
        dumpthings(fontbc[0], fontptr + 1);
        dumpthings(fontec[0], fontptr + 1);
        dumpthings(charbase[0], fontptr + 1);
        dumpthings(widthbase[0], fontptr + 1);
        dumpthings(heightbase[0], fontptr + 1);
        dumpthings(depthbase[0], fontptr + 1);
        dumpthings(italicbase[0], fontptr + 1);
        dumpthings(ligkernbase[0], fontptr + 1);
        dumpthings(kernbase[0], fontptr + 1);
        dumpthings(extenbase[0], fontptr + 1);
        dumpthings(parambase[0], fontptr + 1);
        dumpthings(fontglue[0], fontptr + 1);
        dumpthings(bcharlabel[0], fontptr + 1);
        dumpthings(fontbchar[0], fontptr + 1);
        dumpthings(fontfalsebchar[0], fontptr + 1);
        {
            register int for_end;
            k = 0;
            for_end = fontptr;
            if (k <= for_end)
                do {
                    printnl(1710);
                    printesc(hash[17626 + k].v.RH);
                    printchar(61);
                    printfilename(fontname[k], fontarea[k], 345);
                    if (fontsize[k] != fontdsize[k]) {
                        print(897);
                        printscaled(fontsize[k]);
                        print(312);
                    }
                }
                while (k++ < for_end);
        }
    }
    println();
    printint(fmemptr - 7);
    print(1707);
    printint(fontptr - 0);
    if (fontptr != 1)
        print(1708);
    else
        print(1709);
    dumpint(hyphcount);
    if (hyphnext <= 607)
        hyphnext = hyphsize;
    dumpint(hyphnext);
    {
        register int for_end;
        k = 0;
        for_end = hyphsize;
        if (k <= for_end)
            do
                if (hyphword[k] != 0) {
                    dumpint(k + 65536L * hyphlink[k]);
                    dumpint(hyphword[k]);
                    dumpint(hyphlist[k]);
                }
            while (k++ < for_end);
    }
    println();
    printint(hyphcount);
    if (hyphcount != 1)
        print(1711);
    else
        print(1712);
    if (trienotready)
        inittrie();
    dumpint(triemax);
    dumpint(hyphstart);
    dumpthings(trietrl[0], triemax + 1);
    dumpthings(trietro[0], triemax + 1);
    dumpthings(trietrc[0], triemax + 1);
    dumpint(trieopptr);
    dumpthings(hyfdistance[1], trieopptr);
    dumpthings(hyfnum[1], trieopptr);
    dumpthings(hyfnext[1], trieopptr);
    printnl(1713);
    printint(triemax);
    print(1714);
    printint(trieopptr);
    if (trieopptr != 1)
        print(1715);
    else
        print(1716);
    print(1717);
    printint(trieopsize);
    {
        register int for_end;
        k = 255;
        for_end = 0;
        if (k >= for_end)
            do
                if (trieused[k] > 0) {
                    printnl(957);
                    printint(trieused[k]);
                    print(1718);
                    printint(k);
                    dumpint(k);
                    dumpint(trieused[k]);
                }
            while (k-- > for_end);
    }
    {
        dumpimagemeta();
        dumpint(pdfmemsize);
        dumpint(pdfmemptr);
        {
            register int for_end;
            k = 1;
            for_end = pdfmemptr - 1;
            if (k <= for_end)
                do {
                    dumpint(pdfmem[k]);
                }
                while (k++ < for_end);
        }
        println();
        printint(pdfmemptr - 1);
        print(1719);
        dumpint(objtabsize);
        dumpint(objptr);
        dumpint(sysobjptr);
        {
            register int for_end;
            k = 1;
            for_end = sysobjptr;
            if (k <= for_end)
                do {
                    dumpint(objtab[k].int0);
                    dumpint(objtab[k].int1);
                    dumpint(objtab[k].int3);
                    dumpint(objtab[k].int4);
                }
                while (k++ < for_end);
        }
        println();
        printint(sysobjptr);
        print(1720);
        dumpint(pdfobjcount);
        dumpint(pdfxformcount);
        dumpint(pdfximagecount);
        dumpint(headtab[6]);
        dumpint(headtab[7]);
        dumpint(headtab[8]);
        dumpint(pdflastobj);
        dumpint(pdflastxform);
        dumpint(pdflastximage);
    }
    dumpint(interaction);
    dumpint(formatident);
    dumpint(69069L);
    eqtb[29308].cint = 0;
    wclose(fmtfile);
}
#endif /* INITEX */
bool loadfmtfile(void)
{
    /* 6666 10 */ register bool Result;
    int j, k;
    halfword p, q;
    int x;
    unsigned char *formatengine;
    unsigned char dummyxord;
    unsigned char dummyxchr;
    unsigned char dummyxprn;
    ;
#ifdef INITEX
    if (iniversion) {
        libcfree(fontinfo);
        libcfree(strpool);
        libcfree(strstart);
        libcfree(yhash);
        libcfree(eqtb);
        libcfree(yzmem);
    }
#endif /* INITEX */
    undumpint(x);
    if (debugformatfile) {
        fprintf(stderr, "%s%s", "fmtdebug:", "format magic number");
        fprintf(stderr, "%s%ld\n", " = ", (long) x);
    }
    if (x != 1462916184L)
        goto lab6666;
    undumpint(x);
    if (debugformatfile) {
        fprintf(stderr, "%s%s", "fmtdebug:", "engine name size");
        fprintf(stderr, "%s%ld\n", " = ", (long) x);
    }
    if ((x < 0) || (x > 256))
        goto lab6666;
    formatengine = xmallocarray(unsigned char, x);
    undumpthings(formatengine[0], x);
    formatengine[x - 1] = 0;
    if (strcmp(enginename, stringcast(formatengine))) {
        ;
        fprintf(stdout, "%s%s%s%s\n", "---! ", stringcast(nameoffile + 1), " was written by ", formatengine);
        libcfree(formatengine);
        goto lab6666;
    }
    libcfree(formatengine);
    undumpint(x);
    if (debugformatfile) {
        fprintf(stderr, "%s%s", "fmtdebug:", "string pool checksum");
        fprintf(stderr, "%s%ld\n", " = ", (long) x);
    }
    if (x != 47194459L) {
        ;
        fprintf(stdout, "%s%s%s\n", "---! ", stringcast(nameoffile + 1), " made by different executable version");
        goto lab6666;
    }
    if (translatefilename) {
        {
            register int for_end;
            k = 0;
            for_end = 255;
            if (k <= for_end)
                do
                    undumpthings(dummyxord, 1);
                while (k++ < for_end);
        }
        {
            register int for_end;
            k = 0;
            for_end = 255;
            if (k <= for_end)
                do
                    undumpthings(dummyxchr, 1);
                while (k++ < for_end);
        }
        {
            register int for_end;
            k = 0;
            for_end = 255;
            if (k <= for_end)
                do
                    undumpthings(dummyxprn, 1);
                while (k++ < for_end);
        }
    } else {

        undumpthings(xord[0], 256);
        undumpthings(xchr[0], 256);
        undumpthings(xprn[0], 256);
        if (eightbitp) {
            register int for_end;
            k = 0;
            for_end = 255;
            if (k <= for_end)
                do
                    xprn[k] = 1;
                while (k++ < for_end);
        }
    }
    undumpint(x);
    if (x != MAX_HALFWORD)
        goto lab6666;
    undumpint(hashhigh);
    if ((hashhigh < 0) || (hashhigh > suphashextra))
        goto lab6666;
    if (hashextra < hashhigh)
        hashextra = hashhigh;
    eqtbtop = 30185 + hashextra;
    if (hashextra == 0)
        hashtop = 26627;
    else
        hashtop = eqtbtop;
    yhash = xmallocarray(twohalves, 1 + hashtop - hashoffset);
    hash = yhash - hashoffset;
    hash[514].v.LH = 0;
    hash[514].v.RH = 0;
    {
        register int for_end;
        x = 515;
        for_end = hashtop;
        if (x <= for_end)
            do
                hash[x] = hash[514];
            while (x++ < for_end);
    }
    eqtb = xmallocarray(memoryword, eqtbtop + 1);
    eqtb[26627].hh.b0 = 103;
    eqtb[26627].hh.v.RH = MIN_HALFWORD;
    eqtb[26627].hh.b1 = 0;
    {
        register int for_end;
        x = 30186;
        for_end = eqtbtop;
        if (x <= for_end)
            do
                eqtb[x] = eqtb[26627];
            while (x++ < for_end);
    }
    {
        undumpint(x);
        if ((x < 0) || (x > 1))
            goto lab6666;
        else
            eTeXmode = x;
    }
    if ((eTeXmode == 1)) {
        maxregnum = 32767;
        maxreghelpline = 2072;
    } else {

        maxregnum = 255;
        maxreghelpline = 791;
    }
    undumpint(x);
    if (debugformatfile) {
        fprintf(stderr, "%s%s", "fmtdebug:", "mem_bot");
        fprintf(stderr, "%s%ld\n", " = ", (long) x);
    }
    if (x != membot)
        goto lab6666;
    undumpint(memtop);
    if (debugformatfile) {
        fprintf(stderr, "%s%s", "fmtdebug:", "mem_top");
        fprintf(stderr, "%s%ld\n", " = ", (long) memtop);
    }
    if (membot + 1100 > memtop)
        goto lab6666;
    curlist.headfield = memtop - 1;
    curlist.tailfield = memtop - 1;
    pagetail = memtop - 2;
    memmin = membot - extramembot;
    memmax = memtop + extramemtop;
    yzmem = xmallocarray(memoryword, memmax - memmin + 1);
    mem = yzmem - memmin;
    undumpint(x);
    if (x != 30185)
        goto lab6666;
    undumpint(x);
    if (x != 8501)
        goto lab6666;
    undumpint(x);
    if (x != 607)
        goto lab6666;
    undumpint(x);
    if (x != 1296847960L)
        goto lab6666;
    undumpint(x);
    if (x == 1)
        mltexenabledp = true;
    else if (x != 0)
        goto lab6666;
    undumpint(x);
    if (x != 1162040408L)
        goto lab6666;
    undumpint(x);
    if (x == 0)
        enctexenabledp = false;
    else if (x != 1)
        goto lab6666;
    else {

        enctexenabledp = true;
        undumpthings(mubyteread[0], 256);
        undumpthings(mubytewrite[0], 256);
        undumpthings(mubytecswrite[0], 128);
    }
    {
        undumpint(x);
        if (x < 0)
            goto lab6666;
        if (x > suppoolsize - poolfree) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "string pool size");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "string pool size");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        poolptr = x;
    }
    if (poolsize < poolptr + poolfree)
        poolsize = poolptr + poolfree;
    {
        undumpint(x);
        if (x < 0)
            goto lab6666;
        if (x > supmaxstrings - stringsfree) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "sup strings");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "sup strings");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        strptr = x;
    }
    if (maxstrings < strptr + stringsfree)
        maxstrings = strptr + stringsfree;
    strstart = xmallocarray(poolpointer, maxstrings);
    undumpcheckedthings(0, poolptr, strstart[0], strptr + 1);
    strpool = xmallocarray(unsigned char, poolsize);
    undumpthings(strpool[0], poolptr);
    initstrptr = strptr;
    initpoolptr = poolptr;
    {
        undumpint(x);
        if ((x < membot + 1019) || (x > memtop - 15))
            goto lab6666;
        else
            lomemmax = x;
    }
    {
        undumpint(x);
        if ((x < membot + 20) || (x > lomemmax))
            goto lab6666;
        else
            rover = x;
    }
    if ((eTeXmode == 1)) {
        register int for_end;
        k = 0;
        for_end = 5;
        if (k <= for_end)
            do {
                undumpint(x);
                if ((x < MIN_HALFWORD) || (x > lomemmax))
                    goto lab6666;
                else
                    saroot[k] = x;
            }
            while (k++ < for_end);
    }
    p = membot;
    q = rover;
    do {
        undumpthings(mem[p], q + 2 - p);
        p = q + mem[q].hh.v.LH;
        if ((p > lomemmax) || ((q >= mem[q + 1].hh.v.RH) && (mem[q + 1].hh.v.RH != rover)))
            goto lab6666;
        q = mem[q + 1].hh.v.RH;
    } while (!(q == rover));
    undumpthings(mem[p], lomemmax + 1 - p);
    if (memmin < membot - 2) {
        p = mem[rover + 1].hh.v.LH;
        q = memmin + 1;
        mem[memmin].hh.v.RH = MIN_HALFWORD;
        mem[memmin].hh.v.LH = MIN_HALFWORD;
        mem[p + 1].hh.v.RH = q;
        mem[rover + 1].hh.v.LH = q;
        mem[q + 1].hh.v.RH = rover;
        mem[q + 1].hh.v.LH = p;
        mem[q].hh.v.RH = MAX_HALFWORD;
        mem[q].hh.v.LH = membot - q;
    }
    {
        undumpint(x);
        if ((x < lomemmax + 1) || (x > memtop - 14))
            goto lab6666;
        else
            himemmin = x;
    }
    {
        undumpint(x);
        if ((x < MIN_HALFWORD) || (x > memtop))
            goto lab6666;
        else
            avail = x;
    }
    memend = memtop;
    undumpthings(mem[himemmin], memend + 1 - himemmin);
    undumpint(varused);
    undumpint(dynused);
    k = 1;
    do {
        undumpint(x);
        if ((x < 1) || (k + x > 30186))
            goto lab6666;
        undumpthings(eqtb[k], x);
        k = k + x;
        undumpint(x);
        if ((x < 0) || (k + x > 30186))
            goto lab6666;
        {
            register int for_end;
            j = k;
            for_end = k + x - 1;
            if (j <= for_end)
                do
                    eqtb[j] = eqtb[k - 1];
                while (j++ < for_end);
        }
        k = k + x;
    } while (!(k > 30185));
    if (hashhigh > 0)
        undumpthings(eqtb[30186], hashhigh);
    {
        undumpint(x);
        if ((x < 514) || (x > hashtop))
            goto lab6666;
        else
            parloc = x;
    }
    partoken = 4095 + parloc;
    {
        undumpint(x);
        if ((x < 514) || (x > hashtop))
            goto lab6666;
        else
            writeloc = x;
    }
    {
        register int for_end;
        p = 0;
        for_end = 2100;
        if (p <= for_end)
            do
                undumphh(prim[p]);
            while (p++ < for_end);
    }
    {
        undumpint(x);
        if ((x < 514) || (x > 15514))
            goto lab6666;
        else
            hashused = x;
    }
    p = 513;
    do {
        {
            undumpint(x);
            if ((x < p + 1) || (x > hashused))
                goto lab6666;
            else
                p = x;
        }
        undumphh(hash[p]);
    } while (!(p == hashused));
    undumpthings(hash[hashused + 1], 26626 - hashused);
    if (debugformatfile) {
        printcsnames(514, 26626);
    }
    if (hashhigh > 0) {
        undumpthings(hash[30186], hashhigh);
        if (debugformatfile) {
            printcsnames(30186, hashhigh - (30186));
        }
    }
    undumpint(cscount);
    {
        undumpint(x);
        if (x < 7)
            goto lab6666;
        if (x > supfontmemsize) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "font mem size");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "font mem size");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        fmemptr = x;
    }
    if (fmemptr > fontmemsize)
        fontmemsize = fmemptr;
    fontinfo = xmallocarray(fmemoryword, fontmemsize);
    undumpthings(fontinfo[0], fmemptr);
    {
        undumpint(x);
        if (x < 0)
            goto lab6666;
        if (x > 9000) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "font max");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "font max");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        fontptr = x;
    }
    {
        fontcheck = xmallocarray(fourquarters, fontmax);
        fontsize = xmallocarray(scaled, fontmax);
        fontdsize = xmallocarray(scaled, fontmax);
        fontparams = xmallocarray(fontindex, fontmax);
        fontname = xmallocarray(strnumber, fontmax);
        fontarea = xmallocarray(strnumber, fontmax);
        fontbc = xmallocarray(eightbits, fontmax);
        fontec = xmallocarray(eightbits, fontmax);
        fontglue = xmallocarray(halfword, fontmax);
        hyphenchar = xmallocarray(int, fontmax);
        skewchar = xmallocarray(int, fontmax);
        bcharlabel = xmallocarray(fontindex, fontmax);
        fontbchar = xmallocarray(ninebits, fontmax);
        fontfalsebchar = xmallocarray(ninebits, fontmax);
        charbase = xmallocarray(int, fontmax);
        widthbase = xmallocarray(int, fontmax);
        heightbase = xmallocarray(int, fontmax);
        depthbase = xmallocarray(int, fontmax);
        italicbase = xmallocarray(int, fontmax);
        ligkernbase = xmallocarray(int, fontmax);
        kernbase = xmallocarray(int, fontmax);
        extenbase = xmallocarray(int, fontmax);
        parambase = xmallocarray(int, fontmax);
        pdfcharused = xmallocarray(charusedarray, fontmax);
        pdffontsize = xmallocarray(scaled, fontmax);
        pdffontnum = xmallocarray(int, fontmax);
        pdffontmap = xmallocarray(fmentryptr, fontmax);
        pdffonttype = xmallocarray(eightbits, fontmax);
        pdffontattr = xmallocarray(strnumber, fontmax);
        pdffontblink = xmallocarray(internalfontnumber, fontmax);
        pdffontelink = xmallocarray(internalfontnumber, fontmax);
        pdffontstretch = xmallocarray(int, fontmax);
        pdffontshrink = xmallocarray(int, fontmax);
        pdffontstep = xmallocarray(int, fontmax);
        pdffontexpandratio = xmallocarray(int, fontmax);
        pdffontautoexpand = xmallocarray(bool, fontmax);
        pdffontlpbase = xmallocarray(int, fontmax);
        pdffontrpbase = xmallocarray(int, fontmax);
        pdffontefbase = xmallocarray(int, fontmax);
        pdffontknbsbase = xmallocarray(int, fontmax);
        pdffontstbsbase = xmallocarray(int, fontmax);
        pdffontshbsbase = xmallocarray(int, fontmax);
        pdffontknbcbase = xmallocarray(int, fontmax);
        pdffontknacbase = xmallocarray(int, fontmax);
        vfpacketbase = xmallocarray(int, fontmax);
        vfdefaultfont = xmallocarray(internalfontnumber, fontmax);
        vflocalfontnum = xmallocarray(internalfontnumber, fontmax);
        vfefnts = xmallocarray(int, fontmax);
        vfifnts = xmallocarray(internalfontnumber, fontmax);
        pdffontnobuiltintounicode = xmallocarray(bool, fontmax);
        {
            register int for_end;
            fontk = 0;
            for_end = fontmax;
            if (fontk <= for_end)
                do {
                    {
                        register int for_end;
                        k = 0;
                        for_end = 31;
                        if (k <= for_end)
                            do
                                pdfcharused[fontk][k] = 0;
                            while (k++ < for_end);
                    }
                    pdffontsize[fontk] = 0;
                    pdffontnum[fontk] = 0;
                    pdffontmap[fontk] = 0;
                    pdffonttype[fontk] = 0;
                    pdffontattr[fontk] = 345;
                    pdffontblink[fontk] = 0;
                    pdffontelink[fontk] = 0;
                    pdffontstretch[fontk] = 0;
                    pdffontshrink[fontk] = 0;
                    pdffontstep[fontk] = 0;
                    pdffontexpandratio[fontk] = 0;
                    pdffontautoexpand[fontk] = false;
                    pdffontlpbase[fontk] = 0;
                    pdffontrpbase[fontk] = 0;
                    pdffontefbase[fontk] = 0;
                    pdffontknbsbase[fontk] = 0;
                    pdffontstbsbase[fontk] = 0;
                    pdffontshbsbase[fontk] = 0;
                    pdffontknbcbase[fontk] = 0;
                    pdffontknacbase[fontk] = 0;
                    pdffontnobuiltintounicode[fontk] = false;
                }
                while (fontk++ < for_end);
        }
        makepdftexbanner();
        undumpthings(fontcheck[0], fontptr + 1);
        undumpthings(fontsize[0], fontptr + 1);
        undumpthings(fontdsize[0], fontptr + 1);
        undumpcheckedthings(MIN_HALFWORD, MAX_HALFWORD, fontparams[0], fontptr + 1);
        undumpthings(hyphenchar[0], fontptr + 1);
        undumpthings(skewchar[0], fontptr + 1);
        undumpuppercheckthings(strptr, fontname[0], fontptr + 1);
        undumpuppercheckthings(strptr, fontarea[0], fontptr + 1);
        undumpthings(fontbc[0], fontptr + 1);
        undumpthings(fontec[0], fontptr + 1);
        undumpthings(charbase[0], fontptr + 1);
        undumpthings(widthbase[0], fontptr + 1);
        undumpthings(heightbase[0], fontptr + 1);
        undumpthings(depthbase[0], fontptr + 1);
        undumpthings(italicbase[0], fontptr + 1);
        undumpthings(ligkernbase[0], fontptr + 1);
        undumpthings(kernbase[0], fontptr + 1);
        undumpthings(extenbase[0], fontptr + 1);
        undumpthings(parambase[0], fontptr + 1);
        undumpcheckedthings(MIN_HALFWORD, lomemmax, fontglue[0], fontptr + 1);
        undumpcheckedthings(0, fmemptr - 1, bcharlabel[0], fontptr + 1);
        undumpcheckedthings(0, 256, fontbchar[0], fontptr + 1);
        undumpcheckedthings(0, 256, fontfalsebchar[0], fontptr + 1);
    }
    {
        undumpint(x);
        if (x < 0)
            goto lab6666;
        if (x > hyphsize) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "hyph_size");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "hyph_size");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        hyphcount = x;
    }
    {
        undumpint(x);
        if (x < 607)
            goto lab6666;
        if (x > hyphsize) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "hyph_size");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "hyph_size");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        hyphnext = x;
    }
    j = 0;
    {
        register int for_end;
        k = 1;
        for_end = hyphcount;
        if (k <= for_end)
            do {
                undumpint(j);
                if (j < 0)
                    goto lab6666;
                if (j > 65535L) {
                    hyphnext = j / 65536L;
                    j = j - hyphnext * 65536L;
                } else
                    hyphnext = 0;
                if ((j >= hyphsize) || (hyphnext > hyphsize))
                    goto lab6666;
                hyphlink[j] = hyphnext;
                {
                    undumpint(x);
                    if ((x < 0) || (x > strptr))
                        goto lab6666;
                    else
                        hyphword[j] = x;
                }
                {
                    undumpint(x);
                    if ((x < MIN_HALFWORD) || (x > MAX_HALFWORD))
                        goto lab6666;
                    else
                        hyphlist[j] = x;
                }
            }
            while (k++ < for_end);
    }
    incr(j);
    if (j < 607)
        j = 607;
    hyphnext = j;
    if (hyphnext >= hyphsize)
        hyphnext = 607;
    else if (hyphnext >= 607)
        incr(hyphnext);
    {
        undumpint(x);
        if (x < 0)
            goto lab6666;
        if (x > triesize) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "trie size");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "trie size");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        j = x;
    }
    ;
#ifdef INITEX
    triemax = j;
#endif /* INITEX */
    {
        undumpint(x);
        if ((x < 0) || (x > j))
            goto lab6666;
        else
            hyphstart = x;
    }
    if (!trietrl)
        trietrl = xmallocarray(triepointer, j + 1);
    undumpthings(trietrl[0], j + 1);
    if (!trietro)
        trietro = xmallocarray(triepointer, j + 1);
    undumpthings(trietro[0], j + 1);
    if (!trietrc)
        trietrc = xmallocarray(quarterword, j + 1);
    undumpthings(trietrc[0], j + 1);
    {
        undumpint(x);
        if (x < 0)
            goto lab6666;
        if (x > trieopsize) {
            ;
            fprintf(stdout, "%s%s\n", "---! Must increase the ", "trie op size");
            goto lab6666;
        } else if (debugformatfile) {
            fprintf(stderr, "%s%s", "fmtdebug:", "trie op size");
            fprintf(stderr, "%s%ld\n", " = ", (long) x);
        }
        j = x;
    }
    ;
#ifdef INITEX
    trieopptr = j;
#endif /* INITEX */
    undumpthings(hyfdistance[1], j);
    undumpthings(hyfnum[1], j);
    undumpuppercheckthings(maxtrieop, hyfnext[1], j);
    ;
#ifdef INITEX
    {
        register int for_end;
        k = 0;
        for_end = 255;
        if (k <= for_end)
            do
                trieused[k] = 0;
            while (k++ < for_end);
    }
#endif /* INITEX */
    k = 256;
    while (j > 0) {

        {
            undumpint(x);
            if ((x < 0) || (x > k - 1))
                goto lab6666;
            else
                k = x;
        }
        {
            undumpint(x);
            if ((x < 1) || (x > j))
                goto lab6666;
            else
                x = x;
        }
        ;
#ifdef INITEX
        trieused[k] = x;
#endif /* INITEX */
        j = j - x;
        opstart[k] = j;
    }
    ;
#ifdef INITEX
    trienotready = false
#endif /* INITEX */
        ;
    {
        undumpimagemeta(eqtb[29348].cint, eqtb[29349].cint, eqtb[29352].cint);
        undumpint(pdfmemsize);
        pdfmem = xreallocarray(pdfmem, int, pdfmemsize);
        undumpint(pdfmemptr);
        {
            register int for_end;
            k = 1;
            for_end = pdfmemptr - 1;
            if (k <= for_end)
                do {
                    undumpint(pdfmem[k]);
                }
                while (k++ < for_end);
        }
        undumpint(objtabsize);
        undumpint(objptr);
        undumpint(sysobjptr);
        {
            register int for_end;
            k = 1;
            for_end = sysobjptr;
            if (k <= for_end)
                do {
                    undumpint(objtab[k].int0);
                    undumpint(objtab[k].int1);
                    objtab[k].int2 = -1;
                    undumpint(objtab[k].int3);
                    undumpint(objtab[k].int4);
                }
                while (k++ < for_end);
        }
        undumpint(pdfobjcount);
        undumpint(pdfxformcount);
        undumpint(pdfximagecount);
        undumpint(headtab[6]);
        undumpint(headtab[7]);
        undumpint(headtab[8]);
        undumpint(pdflastobj);
        undumpint(pdflastxform);
        undumpint(pdflastximage);
    }
    {
        undumpint(x);
        if ((x < 0) || (x > 3))
            goto lab6666;
        else
            interaction = x;
    }
    if (interactionoption != 4)
        interaction = interactionoption;
    {
        undumpint(x);
        if ((x < 0) || (x > strptr))
            goto lab6666;
        else
            formatident = x;
    }
    undumpint(x);
    if (x != 69069L)
        goto lab6666;
    curlist.auxfield.cint = eqtb[29928].cint;
    Result = true;
    return Result;
  lab6666:;
    fprintf(stdout, "%s\n", "(Fatal format file error; I'm stymied)");
    Result = false;
    return Result;
}

void finalcleanup(void)
{
        smallnumber c;
    c = curchr;
    if (jobname == 0)
        openlogfile();
    while (inputptr > 0)
        if (curinput.statefield == 0)
            endtokenlist();
        else
            endfilereading();
    while (openparens > 0) {

        print(1726);
        decr(openparens);
    }
    if (curlevel > 1) {
        printnl(40);
        printesc(1727);
        print(1728);
        printint(curlevel - 1);
        printchar(41);
        if ((eTeXmode == 1))
            showsavegroups();
    }
    while (condptr != MIN_HALFWORD) {

        printnl(40);
        printesc(1727);
        print(1729);
        printcmdchr(107, curif);
        if (ifline != 0) {
            print(1730);
            printint(ifline);
        }
        print(1731);
        ifline = mem[condptr + 1].cint;
        curif = mem[condptr].hh.b1;
        tempptr = condptr;
        condptr = mem[condptr].hh.v.RH;
        freenode(tempptr, 2);
    }
    if (history != 0) {

        if (((history == 1) || (interaction < 3))) {

            if (selector == 19) {
                selector = 17;
                printnl(1732);
                selector = 19;
            }
        }
    }
    if (c == 1) {
        ;
#ifdef INITEX
        if (iniversion) {
            {
                register int for_end;
                c = 0;
                for_end = 4;
                if (c <= for_end)
                    do
                        if (curmark[c] != MIN_HALFWORD)
                            deletetokenref(curmark[c]);
                    while (c++ < for_end);
            }
            if (saroot[6] != MIN_HALFWORD) {

                if (domarks(3, 0, saroot[6]))
                    saroot[6] = MIN_HALFWORD;
            }
            {
                register int for_end;
                c = 2;
                for_end = 3;
                if (c <= for_end)
                    do
                        flushnodelist(discptr[c]);
                    while (c++ < for_end);
            }
            if (lastglue != MAX_HALFWORD)
                deleteglueref(lastglue);
            storefmtfile();
            return;
        }
#endif /* INITEX */
        printnl(1733);
        return;
    }
}

#ifdef INITEX
void initprim(void)
{
    nonewcontrolsequence = false;
    first = 0;
    primitive(394, 75, 26628);
    primitive(395, 75, 26629);
    primitive(396, 75, 26630);
    primitive(397, 75, 26631);
    primitive(398, 75, 26632);
    primitive(399, 75, 26633);
    primitive(400, 75, 26634);
    primitive(401, 75, 26635);
    primitive(402, 75, 26636);
    primitive(403, 75, 26637);
    primitive(404, 75, 26638);
    primitive(405, 75, 26639);
    primitive(406, 75, 26640);
    primitive(407, 75, 26641);
    primitive(408, 75, 26642);
    primitive(409, 76, 26643);
    primitive(410, 76, 26644);
    primitive(411, 76, 26645);
    primitive(415, 72, 27159);
    primitive(416, 72, 27160);
    primitive(417, 72, 27161);
    primitive(418, 72, 27162);
    primitive(419, 72, 27163);
    primitive(420, 72, 27164);
    primitive(421, 72, 27165);
    primitive(422, 72, 27166);
    primitive(423, 72, 27167);
    primitive(424, 72, 27168);
    primitive(425, 72, 27169);
    primitive(426, 72, 27170);
    primitive(427, 72, 27171);
    primitive(441, 73, 29277);
    primitive(442, 73, 29278);
    primitive(443, 73, 29279);
    primitive(444, 73, 29280);
    primitive(445, 73, 29281);
    primitive(446, 73, 29282);
    primitive(447, 73, 29283);
    primitive(448, 73, 29284);
    primitive(449, 73, 29285);
    primitive(450, 73, 29286);
    primitive(451, 73, 29287);
    primitive(452, 73, 29288);
    primitive(453, 73, 29289);
    primitive(454, 73, 29290);
    primitive(455, 73, 29291);
    primitive(456, 73, 29292);
    primitive(457, 73, 29293);
    primitive(458, 73, 29294);
    primitive(459, 73, 29295);
    primitive(460, 73, 29296);
    primitive(461, 73, 29297);
    primitive(462, 73, 29298);
    primitive(463, 73, 29299);
    primitive(464, 73, 29300);
    primitive(465, 73, 29301);
    primitive(466, 73, 29302);
    primitive(467, 73, 29303);
    primitive(468, 73, 29304);
    primitive(469, 73, 29305);
    primitive(470, 73, 29306);
    primitive(471, 73, 29307);
    primitive(472, 73, 29308);
    primitive(473, 73, 29309);
    primitive(474, 73, 29310);
    primitive(475, 73, 29311);
    primitive(476, 73, 29312);
    primitive(477, 73, 29313);
    primitive(478, 73, 29314);
    primitive(479, 73, 29315);
    primitive(480, 73, 29316);
    primitive(481, 73, 29317);
    primitive(482, 73, 29318);
    primitive(483, 73, 29319);
    primitive(484, 73, 29320);
    primitive(485, 73, 29321);
    primitive(486, 73, 29322);
    primitive(487, 73, 29323);
    primitive(488, 73, 29324);
    primitive(489, 73, 29325);
    primitive(490, 73, 29326);
    primitive(491, 73, 29327);
    primitive(492, 73, 29328);
    primitive(493, 73, 29329);
    primitive(494, 73, 29330);
    primitive(495, 73, 29331);
    if (mltexp) {
        mltexenabledp = true;
        if (false)
            primitive(496, 73, 29332);
        primitive(497, 73, 29333);
        primitive(498, 73, 29334);
    }
    if (enctexp) {
        enctexenabledp = true;
        primitive(499, 73, 29335);
        primitive(500, 73, 29336);
        primitive(501, 73, 29337);
        primitive(502, 73, 29338);
    }
    primitive(503, 73, 29339);
    primitive(504, 73, 29340);
    primitive(505, 73, 29360);
    primitive(506, 73, 29341);
    primitive(507, 73, 29342);
    primitive(508, 73, 29343);
    primitive(509, 73, 29344);
    primitive(510, 73, 29345);
    primitive(538, 73, 29349);
    primitive(511, 73, 29346);
    primitive(512, 73, 29347);
    primitive(513, 73, 29348);
    primitive(514, 73, 29349);
    primitive(515, 73, 29350);
    primitive(516, 73, 29351);
    primitive(517, 73, 29352);
    primitive(518, 73, 29353);
    primitive(519, 73, 29354);
    primitive(520, 73, 29355);
    primitive(521, 73, 29356);
    primitive(522, 73, 29357);
    primitive(523, 73, 29358);
    primitive(524, 73, 29359);
    primitive(525, 73, 29361);
    primitive(526, 73, 29362);
    primitive(527, 73, 29363);
    primitive(528, 73, 29364);
    primitive(529, 73, 29365);
    primitive(530, 73, 29366);
    primitive(531, 73, 29367);
    primitive(532, 73, 29368);
    primitive(533, 73, 29369);
    primitive(534, 73, 29370);
    primitive(535, 73, 29371);
    primitive(536, 73, 29372);
    primitive(541, 74, 29896);
    primitive(542, 74, 29897);
    primitive(543, 74, 29898);
    primitive(544, 74, 29899);
    primitive(545, 74, 29900);
    primitive(546, 74, 29901);
    primitive(547, 74, 29902);
    primitive(548, 74, 29903);
    primitive(549, 74, 29904);
    primitive(550, 74, 29905);
    primitive(551, 74, 29906);
    primitive(552, 74, 29907);
    primitive(553, 74, 29908);
    primitive(554, 74, 29909);
    primitive(555, 74, 29910);
    primitive(556, 74, 29911);
    primitive(557, 74, 29912);
    primitive(558, 74, 29913);
    primitive(559, 74, 29914);
    primitive(560, 74, 29915);
    primitive(561, 74, 29916);
    primitive(562, 74, 29917);
    primitive(563, 74, 29918);
    primitive(564, 74, 29919);
    primitive(565, 74, 29920);
    primitive(566, 74, 29921);
    primitive(567, 74, 29922);
    primitive(568, 74, 29923);
    primitive(569, 74, 29924);
    primitive(570, 74, 29925);
    primitive(571, 74, 29926);
    primitive(572, 74, 29927);
    primitive(573, 74, 29928);
    primitive(574, 74, 29929);
    primitive(32, 64, 0);
    primitive(47, 44, 0);
    primitive(586, 45, 0);
    primitive(587, 90, 0);
    primitive(588, 40, 0);
    primitive(589, 41, 0);
    primitive(590, 61, 0);
    primitive(591, 16, 0);
    primitive(582, 109, 0);
    primitive(592, 15, 0);
    primitive(593, 92, 0);
    primitive(583, 67, 0);
    if (enctexp) {
        primitive(594, 67, 10);
    }
    primitive(595, 62, 0);
    hash[15516].v.RH = 595;
    eqtb[15516] = eqtb[curval];
    primitive(596, 104, 0);
    primitive(597, 88, 0);
    primitive(598, 101, 0);
    primitive(599, 102, 0);
    primitive(600, 77, 0);
    primitive(601, 32, 0);
    primitive(602, 36, 0);
    primitive(603, 39, 0);
    primitive(337, 37, 0);
    primitive(360, 18, 0);
    primitive(604, 46, 0);
    primitive(605, 17, 0);
    primitive(606, 54, 0);
    primitive(607, 91, 0);
    primitive(608, 34, 0);
    primitive(609, 65, 0);
    primitive(610, 105, 0);
    primitive(579, 105, 1);
    primitive(342, 55, 0);
    primitive(611, 63, 0);
    primitive(612, 84, 27158);
    primitive(613, 42, 0);
    primitive(614, 80, 0);
    primitive(615, 66, 0);
    primitive(616, 96, 0);
    primitive(617, 0, 256);
    hash[15521].v.RH = 617;
    eqtb[15521] = eqtb[curval];
    primitive(618, 98, 0);
    primitive(619, 111, 0);
    primitive(428, 71, membot);
    primitive(361, 38, 0);
    primitive(620, 33, 0);
    primitive(621, 56, 0);
    primitive(622, 35, 0);
    primitive(683, 13, 256);
    parloc = curval;
    partoken = 4095 + parloc;
    primitive(718, 106, 0);
    primitive(719, 106, 1);
    primitive(720, 112, 0);
    primitive(721, 112, 1);
    primitive(722, 112, 2);
    primitive(723, 112, 3);
    primitive(724, 112, 4);
    primitive(539, 89, membot + 0);
    primitive(576, 89, membot + 1);
    primitive(413, 89, membot + 2);
    primitive(414, 89, membot + 3);
    primitive(757, 79, 104);
    primitive(758, 79, 1);
    primitive(759, 82, 0);
    primitive(760, 82, 1);
    primitive(761, 83, 1);
    primitive(762, 83, 3);
    primitive(763, 83, 2);
    primitive(764, 70, 0);
    primitive(765, 70, 1);
    primitive(766, 70, 2);
    primitive(767, 70, 4);
    primitive(768, 70, 5);
    primitive(769, 70, 6);
    primitive(770, 70, 7);
    primitive(771, 70, 8);
    primitive(772, 70, 9);
    primitive(773, 70, 10);
    primitive(774, 70, 11);
    primitive(775, 70, 12);
    primitive(776, 70, 13);
    primitive(777, 70, 14);
    primitive(778, 70, 15);
    primitive(779, 70, 16);
    primitive(780, 70, 17);
    primitive(781, 70, 18);
    primitive(782, 70, 19);
    primitive(841, 110, 0);
    primitive(842, 110, 1);
    primitive(843, 110, 2);
    primitive(844, 110, 3);
    primitive(845, 110, 4);
    primitive(846, 110, 6);
    primitive(847, 110, 7);
    primitive(848, 110, 8);
    primitive(849, 110, 9);
    primitive(850, 110, 10);
    primitive(851, 110, 11);
    primitive(852, 110, 12);
    primitive(853, 110, 16);
    primitive(854, 110, 17);
    primitive(855, 110, 13);
    primitive(856, 110, 14);
    primitive(857, 110, 15);
    primitive(858, 110, 20);
    primitive(859, 110, 21);
    primitive(860, 110, 22);
    primitive(861, 110, 23);
    primitive(862, 110, 24);
    primitive(863, 110, 25);
    primitive(864, 110, 26);
    primitive(865, 110, 27);
    primitive(866, 110, 28);
    primitive(867, 110, 18);
    primitive(868, 110, 19);
    primitive(869, 110, 29);
    primitive(870, 110, 30);
    primitive(871, 110, 33);
    primitive(872, 110, 31);
    primitive(873, 110, 32);
    primitive(912, 107, 0);
    primitive(913, 107, 1);
    primitive(914, 107, 2);
    primitive(915, 107, 3);
    primitive(916, 107, 4);
    primitive(917, 107, 5);
    primitive(918, 107, 6);
    primitive(919, 107, 7);
    primitive(920, 107, 8);
    primitive(921, 107, 9);
    primitive(922, 107, 10);
    primitive(923, 107, 11);
    primitive(924, 107, 12);
    primitive(925, 107, 13);
    primitive(926, 107, 14);
    primitive(927, 107, 15);
    primitive(928, 107, 16);
    primitive(929, 107, 21);
    primitive(931, 108, 2);
    hash[15518].v.RH = 931;
    eqtb[15518] = eqtb[curval];
    primitive(932, 108, 4);
    primitive(933, 108, 3);
    primitive(958, 87, 0);
    hash[17626].v.RH = 958;
    eqtb[17626] = eqtb[curval];
    primitive(1311, 4, 256);
    primitive(1312, 5, 257);
    hash[15515].v.RH = 1312;
    eqtb[15515] = eqtb[curval];
    primitive(1313, 5, 258);
    hash[15519].v.RH = 1314;
    hash[15520].v.RH = 1314;
    eqtb[15520].hh.b0 = 9;
    eqtb[15520].hh.v.RH = memtop - 11;
    eqtb[15520].hh.b1 = 1;
    eqtb[15519] = eqtb[15520];
    eqtb[15519].hh.b0 = 117;
    primitive(1389, 81, 0);
    primitive(1390, 81, 1);
    primitive(1391, 81, 2);
    primitive(1392, 81, 3);
    primitive(1393, 81, 4);
    primitive(1394, 81, 5);
    primitive(1395, 81, 6);
    primitive(1396, 81, 7);
    primitive(350, 14, 0);
    primitive(1442, 14, 1);
    primitive(1443, 26, 4);
    primitive(1444, 26, 0);
    primitive(1445, 26, 1);
    primitive(1446, 26, 2);
    primitive(1447, 26, 3);
    primitive(1448, 27, 4);
    primitive(1449, 27, 0);
    primitive(1450, 27, 1);
    primitive(1451, 27, 2);
    primitive(1452, 27, 3);
    primitive(343, 28, 5);
    primitive(322, 29, 1);
    primitive(349, 30, 99);
    primitive(1470, 21, 1);
    primitive(1471, 21, 0);
    primitive(1472, 22, 1);
    primitive(1473, 22, 0);
    primitive(430, 20, 0);
    primitive(1474, 20, 1);
    primitive(1475, 20, 2);
    primitive(1384, 20, 3);
    primitive(1476, 20, 4);
    primitive(1386, 20, 5);
    primitive(1477, 20, 108);
    primitive(1478, 31, 99);
    primitive(1479, 31, 100);
    primitive(1480, 31, 101);
    primitive(1481, 31, 102);
    primitive(1497, 43, 1);
    primitive(1498, 43, 0);
    primitive(1499, 43, 2);
    primitive(1509, 25, 12);
    primitive(1510, 25, 11);
    primitive(1511, 25, 10);
    primitive(1512, 23, 0);
    primitive(1513, 23, 1);
    primitive(1514, 24, 0);
    primitive(1515, 24, 1);
    primitive(45, 47, 1);
    primitive(358, 47, 0);
    primitive(1547, 48, 0);
    primitive(1548, 48, 1);
    primitive(1278, 50, 16);
    primitive(1279, 50, 17);
    primitive(1280, 50, 18);
    primitive(1281, 50, 19);
    primitive(1282, 50, 20);
    primitive(1283, 50, 21);
    primitive(1284, 50, 22);
    primitive(1285, 50, 23);
    primitive(1287, 50, 26);
    primitive(1286, 50, 27);
    primitive(1549, 51, 0);
    primitive(1291, 51, 1);
    primitive(1292, 51, 2);
    primitive(1273, 53, 0);
    primitive(1274, 53, 2);
    primitive(1275, 53, 4);
    primitive(1276, 53, 6);
    primitive(1567, 52, 0);
    primitive(1568, 52, 1);
    primitive(1569, 52, 2);
    primitive(1570, 52, 3);
    primitive(1571, 52, 4);
    primitive(1572, 52, 5);
    primitive(1288, 49, 30);
    primitive(1289, 49, 31);
    hash[15517].v.RH = 1289;
    eqtb[15517] = eqtb[curval];
    primitive(1592, 93, 1);
    primitive(1593, 93, 2);
    primitive(1594, 93, 4);
    primitive(1595, 97, 0);
    primitive(1596, 97, 1);
    primitive(1597, 97, 2);
    primitive(1598, 97, 3);
    primitive(1615, 94, 0);
    primitive(1616, 94, 1);
    if (enctexp) {
        primitive(1617, 94, 10);
        primitive(1618, 94, 11);
    }
    primitive(1624, 95, 0);
    primitive(1625, 95, 1);
    primitive(1626, 95, 2);
    primitive(1627, 95, 3);
    primitive(1628, 95, 4);
    primitive(1629, 95, 5);
    primitive(1630, 95, 6);
    if (mltexp) {
        primitive(1631, 95, 7);
    }
    primitive(436, 85, 27741);
    if (enctexp) {
        primitive(1636, 85, 27690);
        primitive(1637, 85, 27691);
        primitive(1638, 85, 27692);
    }
    primitive(440, 85, 28765);
    primitive(437, 85, 27997);
    primitive(438, 85, 28253);
    primitive(439, 85, 28509);
    primitive(540, 85, 29640);
    primitive(433, 86, 27693);
    primitive(434, 86, 27709);
    primitive(435, 86, 27725);
    primitive(1358, 99, 0);
    primitive(1370, 99, 1);
    primitive(1654, 78, 0);
    primitive(1655, 78, 1);
    primitive(1656, 78, 2);
    primitive(1657, 78, 3);
    primitive(1658, 78, 4);
    primitive(1659, 78, 5);
    primitive(1660, 78, 7);
    primitive(1661, 78, 8);
    primitive(1662, 78, 9);
    primitive(1663, 78, 10);
    primitive(1664, 78, 11);
    primitive(1665, 78, 6);
    primitive(274, 100, 0);
    primitive(275, 100, 1);
    primitive(276, 100, 2);
    primitive(1673, 100, 3);
    primitive(1674, 60, 1);
    primitive(1675, 60, 0);
    primitive(1676, 58, 0);
    primitive(1677, 58, 1);
    primitive(1683, 57, 27997);
    primitive(1684, 57, 28253);
    primitive(1685, 19, 0);
    primitive(1686, 19, 1);
    primitive(1687, 19, 2);
    primitive(1688, 19, 3);
    primitive(1735, 59, 0);
    primitive(680, 59, 1);
    writeloc = curval;
    primitive(1736, 59, 2);
    primitive(1737, 59, 3);
    hash[15524].v.RH = 1737;
    eqtb[15524] = eqtb[curval];
    primitive(1738, 59, 4);
    primitive(1739, 59, 5);
    primitive(1740, 59, 6);
    primitive(1138, 59, 38);
    primitive(1741, 59, 39);
    primitive(1742, 59, 40);
    primitive(1743, 59, 41);
    primitive(1744, 59, 7);
    primitive(1745, 59, 8);
    primitive(1746, 59, 9);
    primitive(1747, 59, 10);
    primitive(1748, 59, 11);
    primitive(1749, 59, 12);
    primitive(1750, 59, 13);
    primitive(1751, 59, 14);
    primitive(1752, 59, 15);
    primitive(1753, 59, 16);
    primitive(1754, 59, 17);
    primitive(1755, 59, 18);
    primitive(1756, 59, 19);
    primitive(1757, 59, 20);
    primitive(1758, 59, 21);
    primitive(1759, 59, 34);
    primitive(1760, 59, 35);
    primitive(1761, 59, 36);
    primitive(1762, 59, 22);
    primitive(1763, 59, 23);
    primitive(1764, 59, 24);
    primitive(1765, 59, 26);
    primitive(1766, 59, 25);
    primitive(1767, 59, 27);
    primitive(1768, 59, 28);
    primitive(1769, 59, 29);
    primitive(1770, 59, 30);
    primitive(1771, 59, 31);
    primitive(1772, 59, 33);
    primitive(1773, 59, 32);
    primitive(1774, 59, 37);
    primitive(1775, 59, 42);
    primitive(1776, 59, 43);
    primitive(1777, 59, 44);
    primitive(1778, 59, 45);
    primitive(1779, 59, 46);
    primitive(1780, 59, 47);
    primitive(2084, 73, 29383);
    nonewcontrolsequence = true;
}
#endif /* INITEX */

void init_bound_variables();
void mainbody(void)
{
    init_bound_variables();
#ifdef INITEX
    if (iniversion) {
        extramemtop = 0;
        extramembot = 0;
    }
#endif /* INITEX */
    memtop = membot + mainmemory - 1;
    memmin = membot;
    memmax = memtop;
    {
        if (triesize < inftriesize)
            triesize = inftriesize;
        else if (triesize > suptriesize)
            triesize = suptriesize;
    }
    {
        if (hyphsize < infhyphsize)
            hyphsize = infhyphsize;
        else if (hyphsize > suphyphsize)
            hyphsize = suphyphsize;
    }
    {
        if (bufsize < infbufsize)
            bufsize = infbufsize;
        else if (bufsize > supbufsize)
            bufsize = supbufsize;
    }
    {
        if (nestsize < infnestsize)
            nestsize = infnestsize;
        else if (nestsize > supnestsize)
            nestsize = supnestsize;
    }
    {
        if (maxinopen < infmaxinopen)
            maxinopen = infmaxinopen;
        else if (maxinopen > supmaxinopen)
            maxinopen = supmaxinopen;
    }
    {
        if (paramsize < infparamsize)
            paramsize = infparamsize;
        else if (paramsize > supparamsize)
            paramsize = supparamsize;
    }
    {
        if (savesize < infsavesize)
            savesize = infsavesize;
        else if (savesize > supsavesize)
            savesize = supsavesize;
    }
    {
        if (stacksize < infstacksize)
            stacksize = infstacksize;
        else if (stacksize > supstacksize)
            stacksize = supstacksize;
    }
    {
        if (dvibufsize < infdvibufsize)
            dvibufsize = infdvibufsize;
        else if (dvibufsize > supdvibufsize)
            dvibufsize = supdvibufsize;
    }
    {
        if (poolsize < infpoolsize)
            poolsize = infpoolsize;
        else if (poolsize > suppoolsize)
            poolsize = suppoolsize;
    }
    {
        if (stringvacancies < infstringvacancies)
            stringvacancies = infstringvacancies;
        else if (stringvacancies > supstringvacancies)
            stringvacancies = supstringvacancies;
    }
    {
        if (poolfree < infpoolfree)
            poolfree = infpoolfree;
        else if (poolfree > suppoolfree)
            poolfree = suppoolfree;
    }
    {
        if (maxstrings < infmaxstrings)
            maxstrings = infmaxstrings;
        else if (maxstrings > supmaxstrings)
            maxstrings = supmaxstrings;
    }
    {
        if (stringsfree < infstringsfree)
            stringsfree = infstringsfree;
        else if (stringsfree > supstringsfree)
            stringsfree = supstringsfree;
    }
    {
        if (fontmemsize < inffontmemsize)
            fontmemsize = inffontmemsize;
        else if (fontmemsize > supfontmemsize)
            fontmemsize = supfontmemsize;
    }
    {
        if (fontmax < inffontmax)
            fontmax = inffontmax;
        else if (fontmax > supfontmax)
            fontmax = supfontmax;
    }
    {
        if (hashextra < infhashextra)
            hashextra = infhashextra;
        else if (hashextra > suphashextra)
            hashextra = suphashextra;
    }
    {
        if (objtabsize < infobjtabsize)
            objtabsize = infobjtabsize;
        else if (objtabsize > supobjtabsize)
            objtabsize = supobjtabsize;
    }
    {
        if (pdfmemsize < infpdfmemsize)
            pdfmemsize = infpdfmemsize;
        else if (pdfmemsize > suppdfmemsize)
            pdfmemsize = suppdfmemsize;
    }
    {
        if (destnamessize < infdestnamessize)
            destnamessize = infdestnamessize;
        else if (destnamessize > supdestnamessize)
            destnamessize = supdestnamessize;
    }
    {
        if (pkdpi < infpkdpi)
            pkdpi = infpkdpi;
        else if (pkdpi > suppkdpi)
            pkdpi = suppkdpi;
    }
    if (errorline > 255)
        errorline = 255;
    buffer = xmallocarray(unsigned char, bufsize);
    nest = xmallocarray(liststaterecord, nestsize);
    savestack = xmallocarray(memoryword, savesize);
    inputstack = xmallocarray(instaterecord, stacksize);
    inputfile = xmallocarray(alphafile, maxinopen);
    linestack = xmallocarray(int, maxinopen);
    eofseen = xmallocarray(bool, maxinopen);
    grpstack = xmallocarray(savepointer, maxinopen);
    ifstack = xmallocarray(halfword, maxinopen);
    sourcefilenamestack = xmallocarray(strnumber, maxinopen);
    fullsourcefilenamestack = xmallocarray(strnumber, maxinopen);
    paramstack = xmallocarray(halfword, paramsize);
    dvibuf = xmallocarray(eightbits, dvibufsize);
    hyphword = xmallocarray(strnumber, hyphsize);
    hyphlist = xmallocarray(halfword, hyphsize);
    hyphlink = xmallocarray(hyphpointer, hyphsize);
    objtab = xmallocarray(objentry, infobjtabsize);
    pdfmem = xmallocarray(int, infpdfmemsize);
    destnames = xmallocarray(destnameentry, infdestnamessize);
    pdfopbuf = xmallocarray(eightbits, pdfopbufsize);
    pdfosbuf = xmallocarray(eightbits, infpdfosbufsize);
    pdfosobjnum = xmallocarray(int, pdfosmaxobjs);
    pdfosobjoff = xmallocarray(int, pdfosmaxobjs);
    ;
#ifdef INITEX
    if (iniversion) {
        yzmem = xmallocarray(memoryword, memtop - membot + 1);
        mem = yzmem - membot;
        eqtbtop = 30185 + hashextra;
        if (hashextra == 0)
            hashtop = 26627;
        else
            hashtop = eqtbtop;
        yhash = xmallocarray(twohalves, 1 + hashtop - hashoffset);
        hash = yhash - hashoffset;
        hash[514].v.LH = 0;
        hash[514].v.RH = 0;
        {
            register int for_end;
            hashused = 515;
            for_end = hashtop;
            if (hashused <= for_end)
                do
                    hash[hashused] = hash[514];
                while (hashused++ < for_end);
        }
        eqtb = xmallocarray(memoryword, eqtbtop);
        strstart = xmallocarray(poolpointer, maxstrings);
        strpool = xmallocarray(unsigned char, poolsize);
        fontinfo = xmallocarray(fmemoryword, fontmemsize);
    }
#endif /* INITEX */
    history = 3;
    bad = 0;
    if ((halferrorline < 30) || (halferrorline > errorline - 15))
        bad = 1;
    if (maxprintline < 60)
        bad = 2;
    if (dvibufsize % 8 != 0)
        bad = 3;
    if (membot + 1100 > memtop)
        bad = 4;
    if (8501 > 15000)
        bad = 5;
    if (maxinopen >= 128)
        bad = 6;
    if (memtop < 267)
        bad = 7;
    ;
#ifdef INITEX
    if ((memmin != membot) || (memmax != memtop))
        bad = 10;
#endif /* INITEX */
    if ((memmin > membot) || (memmax < memtop))
        bad = 10;
    if ((0 > 0) || (255 < 127))
        bad = 11;
    if ((MIN_HALFWORD > 0) || (MAX_HALFWORD < 32767))
        bad = 12;
    if ((0 < MIN_HALFWORD) || (255 > MAX_HALFWORD))
        bad = 13;
    if ((9000 < MIN_HALFWORD) || (9000 > MAX_HALFWORD))
        bad = 15;
    if (fontmax > 9000)
        bad = 16;
    if ((savesize > MAX_HALFWORD) || (maxstrings > MAX_HALFWORD))
        bad = 17;
    if (bufsize > MAX_HALFWORD)
        bad = 18;
    if (255 < 255)
        bad = 19;
    if (34280L + hashextra > MAX_HALFWORD)
        bad = 21;
    if ((hashoffset < 0) || (hashoffset > 514))
        bad = 42;
    if (formatdefaultlength > maxint)
        bad = 31;
    if (2 * MAX_HALFWORD < memtop - memmin)
        bad = 41;
    if (bad > 0) {
        fprintf(stdout, "%s%s%ld\n", "Ouch---my internal constants have been clobbered!", "---case ", (long) bad);
        goto lab9999;
    }
    initialize();
    ;
#ifdef INITEX
    if (iniversion) {
        if (!getstringsstarted())
            goto lab9999;
        initprim();
        initstrptr = strptr;
        initpoolptr = poolptr;
        dateandtime(eqtb[29297].cint, eqtb[29298].cint, eqtb[29299]
                    .cint, eqtb[29300].cint);
    }
#endif /* INITEX */
    selector = 17;
    tally = 0;
    termoffset = 0;
    fileoffset = 0;
    if (srcspecialsp || filelineerrorstylep || parsefirstlinep)
        fprintf(stdout, "%s%s%s", "This is pdfTeX, Version 3.14159265", "-2.6", "-1.40.21");
    else
        fprintf(stdout, "%s%s%s", "This is pdfTeX, Version 3.14159265", "-2.6", "-1.40.21");
    fputs(versionstring, stdout);
    if (formatident == 0)
        fprintf(stdout, "%s%s%c\n", " (preloaded format=", dumpname, ')');
    else {

        slowprint(formatident);
        println();
    }
    if (shellenabledp) {
        putc(' ', stdout);
        if (restrictedshell) {
            fputs("restricted ", stdout);
        }
        fprintf(stdout, "%s\n", "\\write18 enabled.");
    }
    if (srcspecialsp) {
        fprintf(stdout, "%s\n", " Source specials enabled.");
    }
    if (translatefilename) {
        fputs(" (", stdout);
        fputs(translatefilename, stdout);
        {
            putc(')', stdout);
            putc('\n', stdout);
        }
    }
    fflush(stdout);
    jobname = 0;
    nameinprogress = false;
    logopened = false;
    outputfilename = 0;
    {
        {
            inputptr = 0;
            maxinstack = 0;
            sourcefilenamestack[0] = 0;
            fullsourcefilenamestack[0] = 0;
            inopen = 0;
            openparens = 0;
            maxbufstack = 0;
            grpstack[0] = 0;
            ifstack[0] = MIN_HALFWORD;
            paramptr = 0;
            maxparamstack = 0;
            first = bufsize;
            do {
                buffer[first] = 0;
                decr(first);
            } while (!(first == 0));
            scannerstatus = 0;
            warningindex = MIN_HALFWORD;
            first = 1;
            curinput.statefield = 33;
            curinput.startfield = 1;
            curinput.indexfield = 0;
            line = 0;
            curinput.namefield = 0;
            forceeof = false;
            alignstate = 1000000L;
            if (!initterminal())
                goto lab9999;
            curinput.limitfield = last;
            first = last + 1;
        }
        ;
#ifdef INITEX
        if (1) {
            nonewcontrolsequence = false;
            primitive(1974, 70, 3);
            primitive(1975, 70, 20);
            primitive(874, 110, 5);
            primitive(1977, 72, 27172);
            primitive(1978, 73, 29373);
            primitive(1979, 73, 29374);
            primitive(1980, 73, 29375);
            primitive(1981, 73, 29376);
            primitive(1982, 73, 29377);
            primitive(1983, 73, 29378);
            primitive(1984, 73, 29379);
            primitive(1985, 73, 29380);
            primitive(1986, 73, 29381);
            primitive(2001, 70, 21);
            primitive(2002, 70, 22);
            primitive(2003, 70, 23);
            primitive(2004, 70, 24);
            primitive(2005, 70, 25);
            primitive(2006, 70, 28);
            primitive(2007, 70, 29);
            primitive(2008, 70, 30);
            primitive(2009, 70, 31);
            primitive(2010, 70, 32);
            primitive(2011, 70, 33);
            primitive(2012, 70, 34);
            primitive(2013, 19, 4);
            primitive(2015, 19, 5);
            primitive(2016, 111, 1);
            primitive(2017, 111, 5);
            primitive(2018, 19, 6);
            primitive(2022, 82, 2);
            primitive(1290, 49, 1);
            primitive(2026, 73, 29382);
            primitive(2027, 33, 6);
            primitive(2028, 33, 7);
            primitive(2029, 33, 10);
            primitive(2030, 33, 11);
            primitive(2039, 106, 2);
            primitive(2041, 96, 1);
            primitive(930, 104, 1);
            primitive(2042, 107, 17);
            primitive(2043, 107, 18);
            primitive(2044, 107, 19);
            primitive(2045, 107, 20);
            primitive(2046, 107, 22);
            primitive(2047, 107, 23);
            primitive(1606, 93, 8);
            primitive(2053, 70, 39);
            primitive(2054, 70, 40);
            primitive(2055, 70, 41);
            primitive(2056, 70, 42);
            primitive(2060, 70, 26);
            primitive(2061, 70, 27);
            primitive(2062, 70, 35);
            primitive(2063, 70, 36);
            primitive(2064, 70, 37);
            primitive(2065, 70, 38);
            primitive(2066, 18, 5);
            primitive(2067, 112, 5);
            primitive(2068, 112, 6);
            primitive(2069, 112, 7);
            primitive(2070, 112, 8);
            primitive(2071, 112, 9);
            primitive(2075, 24, 2);
            primitive(2076, 24, 3);
            primitive(2077, 84, 27429);
            primitive(2078, 84, 27430);
            primitive(2079, 84, 27431);
            primitive(2080, 84, 27432);
            if ((buffer[curinput.locfield] == 42))
                incr(curinput.locfield);
            eTeXmode = 1;
            maxregnum = 32767;
            maxreghelpline = 2072;
        }
#endif /* INITEX */
        nonewcontrolsequence = true;

        if ((pdfoutputoption != 0))
            eqtb[29339].cint = pdfoutputvalue;
        if ((pdfdraftmodeoption != 0))
            eqtb[29365].cint = pdfdraftmodevalue;
        pdfinitmapfile("pdftex.map");
        if ((eTeXmode == 1))
            fprintf(stdout, "%s\n", "entering extended mode");
        if ((eqtb[29325].cint < 0) || (eqtb[29325].cint > 255))
            decr(curinput.limitfield);
        else
            buffer[curinput.limitfield] = eqtb[29325].cint;
        if (mltexenabledp) {
            fprintf(stdout, "%s\n", "MLTeX v2.2 enabled");
        }
        if (enctexenabledp) {
            fputs(" encTeX v. Jun. 2004", stdout);
            fprintf(stdout, "%s\n", ", reencoding enabled.");
            if (translatefilename) {
                fprintf(stdout, "%s\n", " (\\xordcode, \\xchrcode, \\xprncode overridden by TCX)");
            }
        }
        dateandtime(eqtb[29297].cint, eqtb[29298].cint, eqtb[29299]
                    .cint, eqtb[29300].cint);
        ;
#ifdef INITEX
        if (trienotready) {
            trietrl = xmallocarray(triepointer, triesize);
            trietro = xmallocarray(triepointer, triesize);
            trietrc = xmallocarray(quarterword, triesize);
            triec = xmallocarray(unsigned char, triesize);
            trieo = xmallocarray(trieopcode, triesize);
            triel = xmallocarray(triepointer, triesize);
            trier = xmallocarray(triepointer, triesize);
            triehash = xmallocarray(triepointer, triesize);
            trietaken = xmallocarray(bool, triesize);
            triel[0] = 0;
            triec[0] = 0;
            trieptr = 0;
            trier[0] = 0;
            hyphstart = 0;
            fontcheck = xmallocarray(fourquarters, fontmax);
            fontsize = xmallocarray(scaled, fontmax);
            fontdsize = xmallocarray(scaled, fontmax);
            fontparams = xmallocarray(fontindex, fontmax);
            fontname = xmallocarray(strnumber, fontmax);
            fontarea = xmallocarray(strnumber, fontmax);
            fontbc = xmallocarray(eightbits, fontmax);
            fontec = xmallocarray(eightbits, fontmax);
            fontglue = xmallocarray(halfword, fontmax);
            hyphenchar = xmallocarray(int, fontmax);
            skewchar = xmallocarray(int, fontmax);
            bcharlabel = xmallocarray(fontindex, fontmax);
            fontbchar = xmallocarray(ninebits, fontmax);
            fontfalsebchar = xmallocarray(ninebits, fontmax);
            charbase = xmallocarray(int, fontmax);
            widthbase = xmallocarray(int, fontmax);
            heightbase = xmallocarray(int, fontmax);
            depthbase = xmallocarray(int, fontmax);
            italicbase = xmallocarray(int, fontmax);
            ligkernbase = xmallocarray(int, fontmax);
            kernbase = xmallocarray(int, fontmax);
            extenbase = xmallocarray(int, fontmax);
            parambase = xmallocarray(int, fontmax);
            pdfcharused = xmallocarray(charusedarray, fontmax);
            pdffontsize = xmallocarray(scaled, fontmax);
            pdffontnum = xmallocarray(int, fontmax);
            pdffontmap = xmallocarray(fmentryptr, fontmax);
            pdffonttype = xmallocarray(eightbits, fontmax);
            pdffontattr = xmallocarray(strnumber, fontmax);
            pdffontblink = xmallocarray(internalfontnumber, fontmax);
            pdffontelink = xmallocarray(internalfontnumber, fontmax);
            pdffontstretch = xmallocarray(int, fontmax);
            pdffontshrink = xmallocarray(int, fontmax);
            pdffontstep = xmallocarray(int, fontmax);
            pdffontexpandratio = xmallocarray(int, fontmax);
            pdffontautoexpand = xmallocarray(bool, fontmax);
            pdffontlpbase = xmallocarray(int, fontmax);
            pdffontrpbase = xmallocarray(int, fontmax);
            pdffontefbase = xmallocarray(int, fontmax);
            pdffontknbsbase = xmallocarray(int, fontmax);
            pdffontstbsbase = xmallocarray(int, fontmax);
            pdffontshbsbase = xmallocarray(int, fontmax);
            pdffontknbcbase = xmallocarray(int, fontmax);
            pdffontknacbase = xmallocarray(int, fontmax);
            vfpacketbase = xmallocarray(int, fontmax);
            vfdefaultfont = xmallocarray(internalfontnumber, fontmax);
            vflocalfontnum = xmallocarray(internalfontnumber, fontmax);
            vfefnts = xmallocarray(int, fontmax);
            vfifnts = xmallocarray(internalfontnumber, fontmax);
            pdffontnobuiltintounicode = xmallocarray(bool, fontmax);
            {
                register int for_end;
                fontk = 0;
                for_end = fontmax;
                if (fontk <= for_end)
                    do {
                        {
                            register int for_end;
                            k = 0;
                            for_end = 31;
                            if (k <= for_end)
                                do
                                    pdfcharused[fontk][k] = 0;
                                while (k++ < for_end);
                        }
                        pdffontsize[fontk] = 0;
                        pdffontnum[fontk] = 0;
                        pdffontmap[fontk] = 0;
                        pdffonttype[fontk] = 0;
                        pdffontattr[fontk] = 345;
                        pdffontblink[fontk] = 0;
                        pdffontelink[fontk] = 0;
                        pdffontstretch[fontk] = 0;
                        pdffontshrink[fontk] = 0;
                        pdffontstep[fontk] = 0;
                        pdffontexpandratio[fontk] = 0;
                        pdffontautoexpand[fontk] = false;
                        pdffontlpbase[fontk] = 0;
                        pdffontrpbase[fontk] = 0;
                        pdffontefbase[fontk] = 0;
                        pdffontknbsbase[fontk] = 0;
                        pdffontstbsbase[fontk] = 0;
                        pdffontshbsbase[fontk] = 0;
                        pdffontknbcbase[fontk] = 0;
                        pdffontknacbase[fontk] = 0;
                        pdffontnobuiltintounicode[fontk] = false;
                    }
                    while (fontk++ < for_end);
            }
            fontptr = 0;
            fmemptr = 7;
            makepdftexbanner();
            fontname[0] = 958;
            fontarea[0] = 345;
            hyphenchar[0] = 45;
            skewchar[0] = -1;
            bcharlabel[0] = 0;
            fontbchar[0] = 256;
            fontfalsebchar[0] = 256;
            fontbc[0] = 1;
            fontec[0] = 0;
            fontsize[0] = 0;
            fontdsize[0] = 0;
            charbase[0] = 0;
            widthbase[0] = 0;
            heightbase[0] = 0;
            depthbase[0] = 0;
            italicbase[0] = 0;
            ligkernbase[0] = 0;
            kernbase[0] = 0;
            extenbase[0] = 0;
            fontglue[0] = MIN_HALFWORD;
            fontparams[0] = 7;
            parambase[0] = -1;
            {
                register int for_end;
                fontk = 0;
                for_end = 6;
                if (fontk <= for_end)
                    do
                        fontinfo[fontk].cint = 0;
                    while (fontk++ < for_end);
            }
        }
#endif /* INITEX */
        fontused = xmallocarray(bool, fontmax);
        {
            register int for_end;
            fontk = 0;
            for_end = fontmax;
            if (fontk <= for_end)
                do
                    fontused[fontk] = false;
                while (fontk++ < for_end);
        }
        randomseed = (microseconds * 1000) + (epochseconds % 1000000L);
        initrandoms(randomseed);
        magicoffset = strstart[1305] - 9 * 16;
        if (interaction == 0)
            selector = 16;
        else
            selector = 17;
        printf(" nearly done: locfield=%d, limitfield=%d\n", curinput.locfield, curinput.limitfield);
        if ((curinput.locfield < curinput.limitfield) && (eqtb[27741 + buffer[curinput.locfield]].hh.v.RH != 0))
            startinput();
    }
    history = 0;
    synctexinitcommand();
    maincontrol();
    finalcleanup();
    closefilesandterminate();
  lab9999:{

        fflush(stdout);
        if ((history != 0) && (history != 1))
            uexit(1);
        else
            uexit(0);
    }
}
