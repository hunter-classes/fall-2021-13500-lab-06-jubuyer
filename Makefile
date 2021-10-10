main: main.o caeser.o
	g++ -o main main.o caeser.o

tests: tests.o caeser.o vigenere.o
	g++ -o tests tests.o caeser.o vigenere.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp
	g++ -Wall -c test-ascii.cpp

caeser.o: caeser.cpp caeser.h
	g++ -Wall -c caeser.cpp

vigenere.o: vigenere.cpp vigenere.h
	g++ -Wall -c vigenere.cpp

main.o: main.cpp funcs.h
	g++ -Wall -c main.cpp

tests.o: tests.cpp doctest.h caeser.h vigenere.h
	g++ -std=c++11 -Wall -c tests.cpp

clean:
	rm -f *o a.out main tests test-ascii
