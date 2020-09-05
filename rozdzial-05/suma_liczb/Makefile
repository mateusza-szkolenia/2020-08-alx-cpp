.PHONY : clean test all

CPP = g++ $(CPPFLAGS)
CPPFLAGS = -Wall -O3

all : test1

test1: test1.cpp sl.o
	$(CPP) -o $@ test1.cpp sl.o

sl.o: sl.cpp sl.hpp
	$(CPP) -c sl.cpp

clean:
	rm -rf *.o test1
