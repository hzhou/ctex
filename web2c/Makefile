CC = gcc -I.. -I.

all: ctangle

# --------------------------
ctangle: ctangleboot
	ln -s ctangleboot ctangle

ctangleboot: ctangleboot.o cwebboot.o mykpse.o
	$(CC) -o $@ ctangleboot.o cwebboot.o mykpse.o

# --------------------------
%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
