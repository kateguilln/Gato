CC=gcc
CFLAGS=`pkg-config --cflags gtk+-3.0`
LFLAGS=`pkg-config --libs gtk+-3.0`
SRC=./gato.c
EXE=Gato

all:
	$(CC) $(CFLAGS) $(SRC) -o $(EXE) $(LFLAGS)

run:
	./Gato

clean:
	rm Gato
