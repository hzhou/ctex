CC = gcc -g -I.. -I. -Ilibmd5 -D__SyncTeX__ 
CXX = g++ -g -I.. -I.

all: pdftex

# ---- pdftex ----------------------
pdftex_OBJECTS = \
    mykpse.o \
    synctexdir/synctex.o \
    my-pdftexini.o \
    my-pdftex0.o \
    my-pdftex-pool.o \
    out/texextra.o \
    out/ctex.o

pdftex_DEPS = \
    pdftexdir/libpdftex.a \
    lib/lib.a \
    libmd5/libmd5.a \
    libxpdf/libxpdf.a

pdftex: $(pdftex_OBJECTS) $(pdftex_DEPS) ctex.def
	$(CXX) -o pdftex $(pdftex_OBJECTS) $(pdftex_DEPS) -lz -lpng -lm

ctex.c: ctex.def
	mydef_page -mc ctex.def

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

# --------------------------
clean:
	find . -name '*.[oa]' |xargs rm -fv
	rm -fv tangle tie web2c fixwrites splitup makecpool
	rm -fv pdftex-final.ch output/*

%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
