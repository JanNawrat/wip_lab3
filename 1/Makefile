all: zad1

zad1: main.o palindrom.o
	clang -o zad1 main.o palindrom.o
	
main.0: main.c
	clang -c main.c
	
palindrom.o: palindrom.c
	clang -c palindrom.c
	
clean:
	rm -f zad1 palindrom *.o *~
