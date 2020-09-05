.PHONY : clean test

CPP = g++ $(CPPFLAGS)
CPPFLAGS = -Wall -O3

all : uzyj_myabs

uzyj_myabs: uzyj_myabs.cpp myabs.o
	$(CPP) -o uzyj_myabs uzyj_myabs.cpp myabs.o

myabs.o: myabs.cpp
	$(CPP) -c myabs.cpp

clean:
	rm *.o uzyj_myabs

test: uzyj_myabs
	echo -56 | ./uzyj_myabs
