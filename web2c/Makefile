CC = gcc -I.. -I.

all: ctangle tie web2c

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
%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
