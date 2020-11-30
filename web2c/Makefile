CC = gcc -I.. -I. -Ilibmd5 -D__SyncTeX__ 
CXX = g++ -I.. -I.

all: web2c tangle pdftex

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

output/pdftex0.c: pdftexdir/pdftex.p
	cat $(pdftex_defines) $< | $(web2c) | $(fixwrites) | $(splitup)
	mkdir -p output
	mv -v pdftexd.h pdftex0.c pdftexini.c output/

# --------------------------
pdftex_OBJECTS = \
    mykpse.o \
    texextra.o \
    synctexdir/synctex.o \
    my-pdftexini.o \
    my-pdftex0.o \
    pdftex-pool.o

pdftex_DEPS = \
    pdftexdir/libpdftex.a \
    lib/lib.a \
    libmd5/libmd5.a \
    xpdf/libxpdf.a

pdftex: $(pdftex_OBJECTS) $(pdftex_DEPS)
	$(CXX) -o pdftex $(pdftex_OBJECTS) $(pdftex_DEPS) -lz -lpng -lm

pdftex-pool.c: pdftexdir/pdftex.pool
	web2c/makecpool pdftexdir/pdftex > $@ || rm $@

# --------------------------
texextra.o: lib/texmfmp.c

# --------------------------
lib/lib.a: lib/mykpse.c
	$(MAKE) -C lib

libmd5/libmd5.a:
	$(MAKE) -C libmd5

xpdf/libxpdf.a:
	$(MAKE) -C xpdf

pdftexdir/libpdftex.a:
	$(MAKE) -C pdftexdir

synctexdir/synctex.o: synctexdir/synctex.c
	$(CC) -DSYNCTEX_ENGINE_H=\"synctexdir/synctex-pdftex.h\" -c -o $@ $<

# --------------------------
clean:
	find . -name '*.o' |xargs rm
# --------------------------
%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
