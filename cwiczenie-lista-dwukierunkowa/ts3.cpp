#include <iostream>

#include "Struktury.hpp"

int main(){
    Drzewo t;

    while( true ){
        int x;
        std::cin >> x;
        t.insert( x );
        t.drukuj();
    }

}