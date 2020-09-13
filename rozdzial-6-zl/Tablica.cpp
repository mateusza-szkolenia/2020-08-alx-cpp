#include <iostream>

#include "Tablica.hpp"

Tablica::Tablica( int rozmiar ){
    this->rozmiar = rozmiar;
    this->dane = new int[rozmiar];
    for ( auto i = 0; i < rozmiar; i++ ){
        this->dane[i] = 0;
    }
    std::cout << "utworzono Tablica( " << rozmiar << ")" << std::endl;
}

Tablica::~Tablica(){
    delete [] this->dane;
    std::cout << "Zegnajcie!" << std::endl;
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
