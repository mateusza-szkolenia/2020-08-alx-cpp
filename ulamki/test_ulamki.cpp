#include <iostream>

#include "ulamki.hpp"

Ulamek * fff( int a, int b, int n){
    Ulamek * pu;
    pu = new Ulamek[n];
    for ( auto i = 0; i < n; i ++ ){
        pu[i].setLicznik( a + i );
        pu[i].setMianownik( b + 1 );
    }

    std::cout << (std::string)(*pu) << std::endl;
    //delete pu;
    return pu;
}

int main(){

    Ulamek u1{ 70, 400 };
    Ulamek u2{ 21, 49 };

    std::cout << (double) u1 << std::endl;
    std::cout << (double) u2 << std::endl;
    std::cout << ( ( u1 > u2 ) ? "pierwszy mniejszy" : "drugi mniejszy " ) << std::endl;

    std::cout << (std::string) u1 << std::endl;

    Ulamek * pu;
    pu = fff( 1, 8, 10 );

    for ( auto i = 0; i < 10; i++){
        std::cout << (std::string)(pu[i]) << std::endl;
    }

    delete [] pu;

}