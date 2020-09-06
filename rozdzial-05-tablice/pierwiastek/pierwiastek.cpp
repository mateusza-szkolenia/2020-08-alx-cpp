#include "pierwiastek.hpp"

double pierwiastek( double n ){
    double wynik;
    wynik = 1.0;
    const int LICZBA_ITERACJI = 32;

    for ( int i = 0; i < LICZBA_ITERACJI; i++ ){
        wynik = ( wynik + ( n/wynik ) ) / 2.0;
    }
    return wynik;
}
