all: main

Vector.o: Vector.cpp Vector.h
	clang++ -c -Wall -Werror -std=c++11 Vector.cpp

main.o: main.cpp Vector.h
	g++ -c -Wall -Werror main.cpp

main: main.o Vector.o
	g++ -o main main.o Vector.o
