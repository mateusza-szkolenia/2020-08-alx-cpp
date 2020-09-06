.PHONY : clean test

CPP = g++ $(CPPFLAGS)
CPPFLAGS = -Wall -O3

all : pierwiastek.o test_pierwiastek
#uzyj_myabs

#uzyj_myabs: uzyj_myabs.cpp myabs.o
#	$(CPP) -o uzyj_myabs uzyj_myabs.cpp myabs.o

pierwiastek.o: pierwiastek.cpp pierwiastek.hpp

test_pierwiastek: pierwiastek.o test_pierwiastek.cpp

clean:
	rm *.o 

#test: uzyj_myabs
#	echo -56 | ./uzyj_myabs
