all : main

main: main.o Polynome.o 
	g++ -g main.o Polynome.o -o main -std=c++11
	
main.o: main.cpp Polynome.h 
	g++ -g -c main.cpp -o main.o -std=c++11
	
Polynome.o: Polynome.cpp Polynome.h
	g++ -g -c Polynome.cpp -Wall -o Polynome.o --std=c++11 

clean : 
	rm -f *.o
