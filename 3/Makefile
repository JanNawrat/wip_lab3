all: zad3

zad3: main.o phi.o
	clang -o zad3 main.o phi.o
	
main.o: main.c
	clang -c main.c
	
phi.o: phi.c
	clang -c phi.c
	
clean:
	rm -f zad3 *.o *~
