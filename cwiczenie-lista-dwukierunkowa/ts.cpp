#include <iostream>

#include "Struktury.hpp"

int main(){
    Lista l;

    l.pokaz();

    int x;
    
    x = 0;
    std::cout << "Wartosc " << x << " wystepuje: " << l.count(x) << " razy" << std::endl;

    x = 101;
    std::cout << "Dodaję pierwszy element: " << x << std::endl;
    l.append( x );

    x = 102;
    std::cout << "Dodaję drugi element: " << x << std::endl;
    l.insert( x );

    for ( auto i = 200; i < 210; i++ ){
        l.insert( i % 4 );
    }

    l.pokaz();
    x = 0;
    std::cout << "Wartosc " << x << " wystepuje: " << l.count(x) << " razy" << std::endl;

    auto e = l.find(3);

    e->pokaz();

}