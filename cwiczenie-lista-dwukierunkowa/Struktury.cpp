#include <iostream>

#include "Struktury.hpp"

Lista::Lista():
    licznik(0),
    first( nullptr ),
    last( nullptr )
{

}

std::string Lista::nazwaStr() const {
    return "Lista";
}

std::string Stos::nazwaStr() const {
    return "Stos";
}

std::string Kolejka::nazwaStr() const {
    return "Kolejka";
}

void Lista::pokaz() const {
    std::cout << this->nazwaStr() << "(" << this->licznik << "):" << std::endl;
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

void Lista::deleteEle( ElementListy const * const e ){
    if ( e->prev ){
        // jeśli ma poprzednika, to zmieniamy poprzednikowi następnika
        e->prev->next = e->next;
    }
    else {
        // nie ma poprzednika, a więc jest pierwszy
        this->first = e->next;
    }

    if ( e->next ){
        // jeśli ma następnika, to zmieniamy poprzednikowi mu poprzednika
        e->next->prev = e->prev;
    }
    else {
        // nie ma następnika, a więc jest ostatni
        this->last = e->prev;
    }
    this->licznik--;
    delete e;

}

void Lista::cleanup(){
    auto cur = this->first;
    ElementListy *ne;

    while ( cur ){
        ne = cur->next;
        delete cur;
        cur = ne;
    }
    this->first = nullptr;
    this->last = nullptr;

    return;

    // KONIEC

    // TEN KOD JEST NIEDOSTEPNY:
    while( this->first ){
        // FIXME
        // prosciej kasowac wszystkie recznie, bez wolania deleteEle(), ktore marnuje czas na aktualizacje wskaznikow
        this->deleteEle( this->first );
    }

}

void Stos::push( const int v ){
    this->append( v );
}

int Stos::pop(){
    if ( is_empty() ){
        return 0;
    }
    int w;
    w = this->last->wartosc;
    this->deleteEle( this->last );
    return w;
}

void Kolejka::enqueue( const int v ){
    this->append( v );
}

int Kolejka::dequeue(){
    if ( is_empty() ){
        return 0;
    }
    auto w = this->first->wartosc;
    this->deleteEle( this->first );
    return w;
}
