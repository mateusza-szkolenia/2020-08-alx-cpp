#include <iostream>

#include "Struktury.hpp"

int main(){
    Lista l;

    l.pokaz();

    int x;
    
    x = 101;
    std::cout << "Dodaję pierwszy element: " << x << std::endl;
    l.append( x );

    x = 102;
    std::cout << "Dodaję drugi element: " << x << std::endl;
    l.insert( x );

    for ( auto i = 200; i < 210; i++ ){
        l.append( i );
    }

    l.pokaz();

}