CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: safeadd safesubtract safemultiply safedivide

safeadd: safeadd.o safeint.o util.o
	$(CC) -o safeadd safeadd.o safeint.o util.o

safesubtract: safesubtract.o safeint.o util.o
	$(CC) -o safesubtract safesubtract.o safeint.o util.o

safemultiply: safemultiply.o safeint.o util.o
	$(CC) -o safemultiply safemultiply.o safeint.o util.o

safedivide: safedivide.o safeint.o util.o
	$(CC) -o safedivide safedivide.o safeint.o util.o

safeint.o: safeint.c safeint.h
	$(CC) $(CFLAGS) -c safeint.c

util.o: util.c util.h
	$(CC) $(CFLAGS) -c util.c

clean:
	rm -f *.o safeadd safesubtract safemultiply safedivide
