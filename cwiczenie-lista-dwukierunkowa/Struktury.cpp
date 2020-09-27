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
        ElementListy *cur;
        cur = this->first;
        while( cur != nullptr ){
            std::cout << "* ";
            cur->pokaz();
            cur = cur->next;
        }

    }
}

void ElementListy::pokaz() const {
    std::cout << "Element <" << this 
        << "> wartosc=" << this->wartosc
        << " [prev=" << prev << ", next=" << next << "]"
        << std::endl;
}

bool Lista::is_empty() const {
    return this->licznik == 0;
}

void Lista::append( const int v ){
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

void Lista::insert( const int v ){
    ElementListy *pe;
    pe = new ElementListy( v );
    pe->next = this->first;
    if ( is_empty() ){
        this->last = pe;
    }
    else {
        this->first->prev = pe;
    }
    this->first = pe;
    this->licznik++;
}

int Lista::count( const int v ) const {
    auto cur = this->first;
    int wynik = 0;
    while ( cur != nullptr ){
        if ( cur->wartosc == v ){
            wynik++;
        }
        cur = cur->next;
    }
    return wynik;
}

ElementListy* Lista::find( const int v ) const {
    auto cur = this->first;
    while ( cur != nullptr ){
        if ( cur->wartosc == v ){
            return cur;
        }
        cur = cur->next;
    }
    return nullptr;
}

ElementListy::ElementListy( const int v ):
    wartosc( v ),
    prev( nullptr ),
    next( nullptr )
{

}