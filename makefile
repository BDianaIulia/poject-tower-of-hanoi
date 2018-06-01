CC=gcc

# -c = compilation
# -Wall = throws all warnings
CFLAGS=-c -Wall

all: hanoi
# -c = compilation
# -Wall = throws all warnings
hanoi: main.o basic.o moves.o
	$(CC) main.o basic.o moves.o -o hanoi

main.o: main.c
	$(CC) $(CFLAGS) main.c

basic.o: basic.c
	$(CC) $(CFLAGS) basic.c

moves.o: moves.c
	$(CC) $(CFLAGS) moves.c

