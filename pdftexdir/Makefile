CC = gcc -I.. -I.
CXX = g++ -I.. -I. -I../libxpdf -I../libxpdf/goo -I../libxpdf/xpdf

libpdftex_a_OBJECTS = \
    avl.o \
    avlstuff.o \
    epdf.o \
    mapfile.o \
    pdftoepdf.o \
    pkin.o \
    subfont.o \
    tounicode.o \
    utils.o \
    vfpacket.o \
    writeenc.o \
    writefont.o \
    writeimg.o \
    writejbig2.o \
    writejpg.o \
    writepng.o \
    writet1.o \
    writet3.o \
    writettf.o \
    writezip.o

libpdftex.a: $(libpdftex_a_OBJECTS)
	ar -crs $@ $(libpdftex_a_OBJECTS)

%.o: %.c
	$(CC) -c -o $@ $<

%.o: %.cc
	$(CXX) -c -o $@ $<

