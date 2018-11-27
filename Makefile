# File: Makefile
# Author: Anderson Taylor
# Makefile for the git-test assignment.

# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=main

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

# Makefile syntax:
# target: dependencies
#(tab) system command(s)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)

