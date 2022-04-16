all: main

main.o: main.cpp 
	clang++ -c -Wall -Werror -std=c++11 main.cpp

main: main.o 
	g++ -o main main.o
