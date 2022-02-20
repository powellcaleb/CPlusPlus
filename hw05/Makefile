all: main

Range.o: Range.cpp Range.h
	g++ -c -Wall -Werror Range.cpp

main.o: main.cpp Range.h
	g++ -c -Wall -Werror main.cpp

main: main.o Range.o
	g++ -o main main.o Range.o
