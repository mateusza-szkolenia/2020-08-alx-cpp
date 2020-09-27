#include <iostream>

#include "Struktury.hpp"

int main(){
    Lista l;

    l.pokaz();

    int x = 101;
    std::cout << "Dodaję pierwszy element: " << 101 << std::endl;

    l.append( x );

    l.pokaz();

}