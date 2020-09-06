.PHONY : clean test

CPP = g++ $(CPPFLAGS)
CPPFLAGS = -Wall -O3

all : pierwiastek.o test_pierwiastek test_odleglosc mapa
#uzyj_myabs

#uzyj_myabs: uzyj_myabs.cpp myabs.o
#	$(CPP) -o uzyj_myabs uzyj_myabs.cpp myabs.o

pierwiastek.o: pierwiastek.cpp pierwiastek.hpp

odleglosc.o: pierwiastek.o odleglosc.cpp odleglosc.hpp

test_pierwiastek: pierwiastek.o test_pierwiastek.cpp

test_odleglosc: odleglosc.o pierwiastek.o test_odleglosc.cpp

mapa: odleglosc.o pierwiastek.o mapa.cpp

clean:
	rm -rf *.o test_pierwiastek test_odleglosc mapa

test: mapa
	./mapa < dane1.txt
