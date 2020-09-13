#include <iostream>

#include "Tablica.hpp"

int main(){
    auto *t = new Tablica(5);
    t->ustaw( 3, 10 );
    auto x = t->daj( 3 );

    //t->zmien_rozmiar( 10 );


    std::cout << "x wynosi " << x << std::endl;
    t->pokazsie();
    delete t;
}