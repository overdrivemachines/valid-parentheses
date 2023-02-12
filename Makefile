
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

valid-parentheses: valid-parentheses.o
	$(CC) $(CFLAGS) -o valid-parentheses valid-parentheses.o

valid-parentheses.o: valid-parentheses.cpp
	$(CC) $(CFLAGS) -c valid-parentheses.cpp

clean:
	rm -rf valid-parentheses valid-parentheses.o
