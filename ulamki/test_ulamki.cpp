#include <iostream>

#include "ulamki.hpp"

int main(){

    Ulamek u1{ 70, 400 };
    Ulamek u2{ 21, 49 };
    Ulamek u3;

    //u1.inicjuj( 1, 3 );
    //u2.inicjuj( 3, 5 );

    u1.wypisz();
    u2.wypisz();

    std::cout << "Mianownik wynosi " << u1.getMianownik() << std::endl;

    u1.setLicznik( 10 );
    u1.wypisz();

    u3 = u1 * u2;

    u3.wypisz();
    u3.skroc_sie();
    u3.wypisz();

}