all: sunnybeamtool

CC=gcc
CFLAGS=-std=c11 -D_DEFAULT_SOURCE
LDLIBS=-lusb

sunnybeamtool: sunnybeamtool.c

clean:
	rm sunnybeamtool

install:
	mkdir -p ~/bin
	cp sunnybeamtool ~/bin
