#include <iostream>

#include "Struktury.hpp"

Lista::Lista():
    licznik(0),
    first( nullptr ),
    last( nullptr )
{

}

void Lista::pokaz() const {
    std::cout << "Lista: " << std::endl;
    std::cout << " first,last: " << first << "," << last << std::endl;
    if ( this->is_empty() ){
        std::cout << "*** PUSTA ***" << std::endl;
    }
    else {
        // TODO: wyświetlić elementy

    }
}

bool Lista::is_empty() const {
    return this->licznik == 0;
}

void Lista::append( int v ){
    ElementListy *pe;
    pe = new ElementListy( v );
    pe->prev = this->last;
    if ( is_empty() ){
        this->first = pe;
    }
    else {
        this->last->next = pe;
    }
    this->last = pe;
    this->licznik++;
}

ElementListy::ElementListy( const int v ):
    wartosc( v ),
    prev( nullptr ),
    next( nullptr )
{

}