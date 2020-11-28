CC = gcc -I..

all: web2c fixwrites splitup makecpool

# --------------------------
my_OBJS = ../mykpse.o

web2c_OBJS = \
    web2c-parser.o \
    web2c-lexer.o \
    $(my_OBJS) \
    main.o

web2c: $(web2c_OBJS)
	$(CC) -o $@ $(web2c_OBJS)

fixwrites: fixwrites.o $(my_OBJS)
	$(CC) -o $@ $< $(my_OBJS)

splitup: splitup.o $(my_OBJS)
	$(CC) -o $@ $< $(my_OBJS)

makecpool: makecpool.o
	$(CC) -o $@ $<

# --------------------------
%.o: %.c
	$(CC) -c -o $@ $<
