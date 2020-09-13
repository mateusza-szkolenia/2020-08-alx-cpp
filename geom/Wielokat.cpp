#include <iostream>

#include "Wielokat.hpp"
#include "Punkt.hpp"

Wielokat::Wielokat( int r ){
    this->rozmiar = r;
    this->ilep = 0;
    this->punkty = new Punkt[ this->rozmiar ];
}

Wielokat::~Wielokat(){
    delete [] this->punkty;
}

void Wielokat::zmien_rozmiar( int nr ){
    if ( nr == this->rozmiar ){
        return;
    }
    Punkt *nowe_punkty = new Punkt[ nr ];
    if ( nr > this->rozmiar ){
        for ( auto i = 0; i < this->rozmiar; i++ ){
            nowe_punkty[ i ] = this->punkty[i];
        }
    }
    else {
        for ( auto i = 0; i < nr; i++ ){
            nowe_punkty[ i ] = this->punkty[i];
        }
        if ( this->ilep > nr ){
            this->ilep = nr;
        }
    }
    delete [] this->punkty;
    this->punkty = nowe_punkty;
    this->rozmiar = nr;
}

void Wielokat::dodaj( const Punkt &p ){
    if ( this->ilep == this->rozmiar ){
        std::cout << "BRAK MIEJSCA!" << std::endl;
        this->zmien_rozmiar( this->rozmiar * 2 );
    }
    this->punkty[ this-> ilep ] = p;
    this->ilep++;
}

double Wielokat::obwod(){
    double o;
    for ( auto i = 0; i < ilep; i++ ){
        o += this->punkty[i].odleglosc( this->punkty[ (i+1) % ilep ] );
    }
    return o;
}

void Wielokat::pokaz(){
    for ( auto i = 0; i < this->ilep; i ++ ){
        std::cout << i << ". Punkt(" << this->punkty[i].x << "," << this->punkty[i].y << ")" << std::endl;
    }
    for ( auto i = ilep; i < this->rozmiar; i++ ){
        std::cout << i << ". ***" << std::endl;
    }
}

