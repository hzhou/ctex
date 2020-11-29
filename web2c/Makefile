CC = gcc -I.. -I.

all:  web2c tangle

# --------------------------
tangle: tangle.o mykpse.o tangle_glue.o
	$(CC) -o tangle tangle.o mykpse.o tangle_glue.o

# --------------------------
ctangle: ctangleboot
	ln -sf ctangleboot ctangle

ctangleboot: ctangleboot.o cwebboot.o mykpse.o
	$(CC) -o $@ ctangleboot.o cwebboot.o mykpse.o

tie: tie.o
	$(CC) -o $@ $<

.PHONY: web2c
web2c:
	$(MAKE) -C web2c

# --------------------------
pdftex_ch_files = \
    pdftexdir/pdftex.web \
    pdftexdir/tex.ch0 \
    tex.ch \
    zlib-fmt.ch \
    enctex.ch \
    synctexdir/synctex-def.ch0 \
    synctexdir/synctex-mem.ch0 \
    synctexdir/synctex-e-mem.ch0 \
    synctexdir/synctex-e-mem.ch1 \
    synctexdir/synctex-rec.ch0 \
    synctexdir/synctex-rec.ch1 \
    synctexdir/synctex-e-rec.ch0 \
    synctexdir/synctex-pdf-rec.ch2 \
    pdftexdir/pdftex.ch \
    pdftexdir/char-warning-pdftex.ch \
    tex-binpool.ch

pdftex-final.ch: tie $(pdftex_ch_files)
	./tie -c $@ $(pdftex_ch_files)

pdftexdir/pdftex.p: tangle pdftex-final.ch
	./tangle pdftexdir/pdftex.web pdftex-final.ch

pdftex_defines = \
    ./web2c/common.defines \
    ./web2c/texmf.defines \
    ./synctexdir/synctex.defines \
    ./pdftexdir/pdftex.defines

web2c = web2c/web2c -htexmfmp.h -t -cpdftexcoerce
fixwrites = web2c/fixwrites -t pdftex
splitup = web2c/splitup -i -l 65000 pdftex

pdftex0.c: pdftexdir/pdftex.p
	cat $(pdftex_defines) $< | $(web2c) | $(fixwrites) | $(splitup)

# --------------------------
pdftex_OBJECTS = \
    pdftexdir/pdftexextra.o \
    pdftexdir/pdftexini.o \
    pdftex0.o \
    pdftex-pool.o

pdftex: libpdftex.a $(pdftex_OBJECTS)
	$(CC) -o pdftex $(pdftex_OBJECTS) libpdftex.a

pdftex-pool.c: pdftexdir/pdftex.pool
	web2c/makecpool pdftexdir/pdftex > $@ || rm $@

# --------------------------
lib/lib.a:
	$(MAKE) -C lib

libmd5/libmd5.a:
	$(MAKE) -C libmd5

pdftexdir/libpdftex.a:
	$(MAKE) -C pdftexdir

# --------------------------
%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
