#include <iostream>

#include "Tablica.hpp"

Tablica::Tablica( int rozmiar ){
    this->id = Tablica::licznik;
    Tablica::licznik++;
    this->rozmiar = rozmiar;
    this->dane = new int[rozmiar];
    for ( auto i = 0; i < rozmiar; i++ ){
        this->dane[i] = 0;
    }
    std::cout << "utworzono Tablica #"<< this->id << " ( " << rozmiar << ")" << "@ " << this->dane << std::endl;
}

Tablica::Tablica( const Tablica &zrodlo ){
    this->rozmiar = zrodlo.rozmiar;
    this->dane = new int[this->rozmiar];
    for ( auto i = 0; i < rozmiar; i++ ){
        this->dane[i] = zrodlo.dane[i];
    }
    std::cout << "skopiowano Tablica( " << rozmiar << ")" << std::endl;
}

Tablica& Tablica::operator=( const Tablica& zrodlo ){
    if ( this == &zrodlo ){
        return *this;
    }
    delete [] this->dane;
    this->rozmiar = zrodlo.rozmiar;
    this->dane = new int[ zrodlo.rozmiar ];
    
    for ( auto i = 0; i < this->rozmiar; i++ ){
        this->dane[i] = zrodlo.dane[i];
    }
    return *this;
}

Tablica::~Tablica(){
    delete [] this->dane;
    std::cout << "Zegnajcie! " << this->rozmiar << " @ " << this->dane << std::endl;
}

void Tablica::ustaw( int pozycja, int wartosc ){
    //std::cout << "Ustawiam wartosc na poz " << pozycja << " na " << wartosc << std::endl;
    this->dane[ pozycja ] = wartosc;
}

int Tablica::daj( int pozycja ){
    //std::cout << "Zwracam wartosc z pozycji " << pozycja << std::endl;
    if ( pozycja >= rozmiar ){
        pozycja = rozmiar - 1;
    }
    if ( pozycja < 0 ){
        pozycja = 0;
    }
    return this->dane[ pozycja ];
}

void Tablica::pokazsie(){
    std::cout << "Jestem Tablica o rozmiarze " << this->rozmiar << std::endl;
    std::cout << "Trzymam dane pod adresem " << this->dane << std::endl;
    for ( auto i = 0; i < this->rozmiar; i++ ){
        std::cout << "Element nr " << i << " : " << this->daj( i ) << std::endl;
    }
}

int Tablica::suma(){
    int s = 0;
    for ( auto i = 0; i < this->rozmiar; i++ ){
        s += this->dane[i];
    }
    return s;
}

int Tablica::min(){
    int m = this->dane[0];
    for ( auto i = 1; i < this->rozmiar; i++ ){
        if ( this->dane[i] < m ){
            m = this->dane[i];
        }
    }
    return m;
}

int Tablica::max(){
    int m = this->dane[0];
    for ( auto i = 1; i < this->rozmiar; i++ ){
        if ( this->dane[i] > m ){
            m = this->dane[i];
        }
    }
    return m;
}


void Tablica::zmien_rozmiar( const int nowy_rozmiar ){
    if ( nowy_rozmiar == this->rozmiar ){
        return;
    }

    int *np;
    // zaalokuj nowa pamiec
    np = new int[nowy_rozmiar];

    if ( nowy_rozmiar > rozmiar ){
        // przepisz istniejace wartosci
        for( auto i=0; i < this->rozmiar; i++ ){
            np[i] = this->dane[ i ];
        }

        // wyzeruj nowa czesc
        for( auto i=this->rozmiar; i < nowy_rozmiar; i++ ){
            np[i] = 0;
        }
    }
    else {
        for( auto i=0; i < nowy_rozmiar; i++ ){
            np[i] = this->dane[ i ];
        }
    }
    // zwolnij stara pamiec
    delete [] this->dane;

    // zamien wskaznik
    this->dane = np;

    // zamien rozmiar
    this->rozmiar = nowy_rozmiar;
}

int Tablica::licznik = 0;
