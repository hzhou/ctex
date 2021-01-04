CC = gcc -g

all: lib.a

lib_a_OBJECTS = \
    mykpse.o \
    basechsuffix.o \
    coredump.o \
    eofeoln.o \
    fprintreal.o \
    inputint.o \
    input2int.o \
    openclose.o \
    printversion.o \
    setupvar.o \
    uexit.o \
    usage.o \
    version.o \
    zround.o

lib.a: $(lib_a_OBJECTS)
	ar -crs $@ $(lib_a_OBJECTS)

%.o : %.c
	$(CC) -c -o $@ $<
