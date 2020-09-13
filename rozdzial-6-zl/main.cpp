#include <iostream>

#include "Tablica.hpp"

int main(){
    auto *t = new Tablica(15);
    t->ustaw( 3, 10 );
    auto x = t->daj( 3 );

    t->pokazsie();
    t->zmien_rozmiar( 3 );
    t->pokazsie();

    delete t;
}