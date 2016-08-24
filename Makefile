.PHONY: clean
CC=clang
CFLAGS=-g -Wall --std=c99 -fpic
OBJ=lab01.o

lab01: $(OBJ)
	$(CC) -o $@ $^

%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f lab01.o lab01 liblab01.so

liblab01.so: $(OBJ)
	$(CC) -shared -o $@ $^
