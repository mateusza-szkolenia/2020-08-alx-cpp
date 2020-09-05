#include "sl.hpp"

int suma_liczb( int a, int b ){
    int i;
    int suma = 0;
    for( i = a; i <= b; i++ ){
        suma += i;
    }
    xyz();
    return suma;
    // TODO zaimplementować jako wzór a nie pętle
}

int xyz(){
    return 7;
}