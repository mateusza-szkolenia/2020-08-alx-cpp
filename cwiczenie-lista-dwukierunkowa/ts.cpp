#include <iostream>

#include "Struktury.hpp"

int main(){
    Lista l;
    
    int x;
    
    x = 0;
    std::cout << "Wartosc " << x << " wystepuje: " << l.count(x) << " razy" << std::endl;

    for ( auto i = 0; i<10; i++ ){
        l.append( i );
    }

    auto piatka = l.find( 5 );

    l.insertAfter( piatka, 100 );

    l.insertAfter( l.find(9), 200 );

    l.pokaz();

}