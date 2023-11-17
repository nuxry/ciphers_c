CC = gcc
CFLAGS = -c -g 

target: $(cipher)

$(cipher): main.o $(cipher).o
	$(CC) bin\\main.o bin\\$(cipher).o -o bin\\$(cipher)

main.o: src\\main.c
	$(CC) $(CFLAGS) src\\main.c -o bin\\main.o

$(cipher).o: lib\\$(cipher)\\$(cipher).c
	$(CC) $(CFLAGS) lib\\$(cipher)\\$(cipher).c -o bin\\$(cipher).o

run:
	.\\bin\\$(exe)

clean:
	del /Q bin\*