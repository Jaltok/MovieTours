CC=gcc
CFLAGS=-I.

mjmake: movieJobs.o sets.o
	&(CC) -o mj movieJobs.o sets.o -I.
