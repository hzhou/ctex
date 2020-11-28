CC = gcc -I.. -I.

all: ctangle tie web2c pdftex-final.ch

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

pdftex-final.ch: $(pdftex_ch_files)
	./tie -c $@ $(pdftex_ch_files)

# --------------------------
%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
