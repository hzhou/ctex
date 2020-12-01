CXX = g++ -I.

INC = -Igoo -Ifofi -Isplash -Ixpdf
CXXFLAGS = -DPDF_PARSER_ONLY

libxpdf_a_OBJECTS = \
    $(goo_libGoo_a_OBJECTS) \
    $(fofi_libfofi_a_OBJECTS) \
    $(xpdf_libxpdf_a_OBJECTS)

goo_libGoo_a_OBJECTS = \
	goo/FixedPoint.o \
	goo/GHash.o \
	goo/GList.o \
	goo/GString.o \
	goo/gfile.o \
	goo/gmem.o \
	goo/gmempp.o

fofi_libfofi_a_OBJECTS = \
	fofi/FoFiBase.o \
	fofi/FoFiEncodings.o \
	fofi/FoFiIdentifier.o \
	fofi/FoFiTrueType.o \
	fofi/FoFiType1.o \
	fofi/FoFiType1C.o

xpdf_libxpdf_a_OBJECTS = \
	xpdf/AcroForm.o \
	xpdf/Annot.o \
	xpdf/Array.o \
	xpdf/BuiltinFont.o \
	xpdf/BuiltinFontTables.o \
	xpdf/CMap.o \
	xpdf/Catalog.o \
	xpdf/CharCodeToUnicode.o \
	xpdf/Decrypt.o \
	xpdf/Dict.o \
	xpdf/Error.o \
	xpdf/FontEncodingTables.o \
	xpdf/Form.o \
	xpdf/Function.o \
	xpdf/Gfx.o \
	xpdf/GfxFont.o \
	xpdf/GfxState.o \
	xpdf/GlobalParams.o \
	xpdf/JArithmeticDecoder.o \
	xpdf/JBIG2Stream.o \
	xpdf/JPXStream.o \
	xpdf/Lexer.o \
	xpdf/Link.o \
	xpdf/NameToCharCode.o \
	xpdf/Object.o \
	xpdf/OptionalContent.o \
	xpdf/Outline.o \
	xpdf/OutputDev.o \
	xpdf/PDF417Barcode.o \
	xpdf/PDFDoc.o \
	xpdf/PDFDocEncoding.o \
	xpdf/PSTokenizer.o \
	xpdf/Page.o \
	xpdf/Parser.o \
	xpdf/SecurityHandler.o \
	xpdf/Stream.o \
	xpdf/TextString.o \
	xpdf/UnicodeMap.o \
	xpdf/UnicodeRemapping.o \
	xpdf/UTF8.o \
	xpdf/XFAForm.o \
	xpdf/XRef.o \
	xpdf/Zoox.o

libxpdf.a: $(libxpdf_a_OBJECTS)
	ar -crs libxpdf.a $(libxpdf_a_OBJECTS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) $(INC) -c -o $@ $<
