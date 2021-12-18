all: zad2

zad2: main.o f.o rozwiazanie.o
	clang -o zad2 main.o f.o rozwiazanie.o -lm
	
main.o: main.c
	clang -c main.c
	
f.o: f.c
	clang -c f.c
	
rozwiazanie.o: rozwiazanie.c
	clang -c rozwiazanie.c
	
clean:
	rm zad2 *.o *~
