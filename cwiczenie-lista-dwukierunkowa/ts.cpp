#include <iostream>

#include "Struktury.hpp"

int main(){
    Lista l;
    l.pokaz();
    int x;
    
    x = 0;
    std::cout << "Wartosc " << x << " wystepuje: " << l.count(x) << " razy" << std::endl;

    for ( auto i = 200; i < 205; i++ ){
        l.insert( i % 4 );
    }

    l.pokaz();
    x = 0;
    std::cout << "Wartosc " << x << " wystepuje: " << l.count(x) << " razy" << std::endl;

    auto e = l.find(3);

    l.deleteEle( e );

    l.pokaz();

    l.cleanup();
    l.cleanup();
    l.cleanup();

    l.pokaz();


}