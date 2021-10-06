main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp
	g++ -Wall -c test-ascii.cpp

funcs.o: funcs.cpp funcs.h
	g++ -Wall -c funcs.cpp

main.o: main.cpp funcs.h
	g++ -Wall -c main.cpp

tests.o: tests.cpp doctest.h funcs.h
	g++ -std=c++11 -Wall -c tests.cpp

clean:
	rm -f *o main tests test-ascii
