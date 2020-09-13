#include <iostream>

#include "Tablica.hpp"

int main(){
    auto *t = new Tablica(15);
    t->ustaw( 0, 30 );
    t->ustaw( 1, 10 );
    t->ustaw( 2, 100 );

    t->pokazsie();
    t->zmien_rozmiar( 3 );
    t->pokazsie();

    std::cout << "Suma: " << t->suma() << std::endl;
    std::cout << "Min: " << t->min() << std::endl;
    std::cout << "Max: " << t->max() << std::endl;

    delete t;
}