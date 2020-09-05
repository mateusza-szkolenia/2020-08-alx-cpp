#include <iostream>

double f( double x ){
    double a = 4.0;
    if ( x > 0 ){
        return a * x * x;
    }
    else {
        return -x;
    }
}

void powitanie(){
    std::cout << "Witaj w programie prezentujacym funkcje w C++" << std::endl;
}


void dwukrotnosc( int a ){
    std::cout << "Liczba wynosi: " << a << std::endl;
    std::cout << "Dwukrotnosc liczby wynosi: " << 2 * a << std::endl;
}

int main(){
    dwukrotnosc( 10 );

/*
    powitanie();
    double xx;
    for ( xx = -3.0; xx < 3.0; xx+=0.25){
        std::cout << xx << " --> " << f( xx ) << std::endl;
    }
*/

}