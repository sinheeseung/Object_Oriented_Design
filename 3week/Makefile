all:main

OBJS = palindrome.o main.o

palindrome.o : palindrome.h palindrome.cpp
	g++ -c palindrome.cpp

main.o : main.cpp palindrome.h
	g++ -c main.cpp

main : palindrome.o main.o
	g++ --std=c++17 palindrome.o main.o -o main

clean:
	rm -f $(OBJS) main
