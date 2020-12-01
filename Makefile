CC = gcc -I.. -I. -Ilibmd5 -D__SyncTeX__ 
CXX = g++ -I.. -I.

all: pdftex pdftex-web2c

# ---- pdftex ----------------------
pdftex_OBJECTS = \
    mykpse.o \
    texextra.o \
    synctexdir/synctex.o \
    my-pdftexini.o \
    my-pdftex0.o \
    my-pdftex-pool.o

pdftex_DEPS = \
    pdftexdir/libpdftex.a \
    lib/lib.a \
    libmd5/libmd5.a \
    libxpdf/libxpdf.a

pdftex: $(pdftex_OBJECTS) $(pdftex_DEPS)
	$(CXX) -o pdftex $(pdftex_OBJECTS) $(pdftex_DEPS) -lz -lpng -lm

# ----
texextra.o: lib/texmfmp.c

synctexdir/synctex.o: synctexdir/synctex.c
	$(CC) -DSYNCTEX_ENGINE_H=\"synctexdir/synctex-pdftex.h\" -c -o $@ $<

lib/lib.a: lib/mykpse.c
	$(MAKE) -C lib lib.a

libmd5/libmd5.a:
	$(MAKE) -C libmd5 libmd5.a

libxpdf/libxpdf.a:
	$(MAKE) -C libxpdf libxpdf.a

pdftexdir/libpdftex.a:
	$(MAKE) -C pdftexdir libpdftex.a

# ---- web2c stuff ----------------------
tangle_OBJS = web2cdir/tangle.o web2cdir/tangle_glue.o mykpse.o 
tangle: $(tangle_OBJS)
	$(CC) -o tangle $(tangle_OBJS)

tie: web2cdir/tie.o
	$(CC) -o $@ $<

web2c_OBJS = \
    mykpse.o \
    web2cdir/web2c-parser.o \
    web2cdir/web2c-lexer.o \
    web2cdir/main.o
web2c: $(web2c_OBJS)
	$(CC) -o $@ $(web2c_OBJS)

fixwrites: web2cdir/fixwrites.o mykpse.o
	$(CC) -o $@ $< mykpse.o

splitup: web2cdir/splitup.o mykpse.o
	$(CC) -o $@ $< mykpse.o

makecpool: web2cdir/makecpool.o
	$(CC) -o $@ $<

# -- pdftex.p pdftex.pool ----------------------
pdftex_ch_files = \
    web/pdftex.web \
    web/tex.ch0 \
    web/tex.ch \
    web/zlib-fmt.ch \
    web/enctex.ch \
    synctexdir/synctex-def.ch0 \
    synctexdir/synctex-mem.ch0 \
    synctexdir/synctex-e-mem.ch0 \
    synctexdir/synctex-e-mem.ch1 \
    synctexdir/synctex-rec.ch0 \
    synctexdir/synctex-rec.ch1 \
    synctexdir/synctex-e-rec.ch0 \
    synctexdir/synctex-pdf-rec.ch2 \
    web/pdftex.ch \
    web/char-warning-pdftex.ch \
    web/tex-binpool.ch

pdftex-final.ch: tie $(pdftex_ch_files)
	./tie -c $@ $(pdftex_ch_files)

# -> web/pdftex.p web/pdftex.pool
web/pdftex.p: tangle pdftex-final.ch
	./tangle web/pdftex.web pdftex-final.ch

# -- pdftex-web2c --------------
.PHONY: pdftex-web2c
pdftex-web2c: output/pdftex0.c

pdftex_defines = \
    web2cdir/common.defines \
    web2cdir/texmf.defines \
    synctexdir/synctex.defines \
    pdftexdir/pdftex.defines

web2c = ./web2c -htexmfmp.h -t -cpdftexcoerce
fixwrites = ./fixwrites -t pdftex
splitup = ./splitup -i -l 65000 pdftex

# ->: [output/] pdftex0.c pdftexini.c pdftexd.h pdftex-pool.c
WEB2C_TOOL = web2c fixwrites splitup makecpool
output/pdftex0.c: web/pdftex.p web/pdftex.pool $(WEB2C_TOOL)
	cat $(pdftex_defines) $< | $(web2c) | $(fixwrites) | $(splitup)
	mkdir -p output
	mv -v pdftex0.c pdftexini.c pdftexd.h pdftexcoerce.h output/
	./makecpool web/pdftex > output/pdftex-pool.c || rm output/pdftex-pool.c

# --------------------------
clean:
	find . -name '*.[oa]' |xargs rm -fv
	rm -fv tangle tie web2c fixwrites splitup makecpool
	rm -fv pdftex-final.ch output/*

%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
