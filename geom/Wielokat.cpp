#include <iostream>

#include "Wielokat.hpp"
#include "Punkt.hpp"

Wielokat::Wielokat(){
    this->rozmiar = 8;
    this->ilep = 0;
    this->punkty = new Punkt[ this->rozmiar ];
}

void Wielokat::dodaj( const Punkt &p ){
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

