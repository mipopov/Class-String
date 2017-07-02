all: string

string: mystring.o main.o
	g++ mystring.o main.o -o string

mystring.o: mystring.h mystring.cpp
	g++ -c mystring.cpp

main.o: main.cpp mystring.cpp
	g++ -c main.cpp

clean:
	rm -f *.o string

