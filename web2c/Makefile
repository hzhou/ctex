CC = gcc -I.. -I.

all: ctangle web2c

# --------------------------
ctangle: ctangleboot
	ln -s ctangleboot ctangle

ctangleboot: ctangleboot.o cwebboot.o mykpse.o
	$(CC) -o $@ ctangleboot.o cwebboot.o mykpse.o

.PHONY: web2c
web2c:
	$(MAKE) -C web2c

# --------------------------
%.o: %.c
	$(CC) -c -o $@ $<

%.i: %.c
	$(CC) -E -o $@ $<
