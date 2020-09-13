#include "Punkt.hpp"

#ifndef WIELOKAT_HPP
#define WIELOKAT_HPP

class Wielokat {
    public:
        Wielokat( int r = 16 );
        Wielokat( const Wielokat & ) = delete;
        ~Wielokat();
        void dodaj( const Punkt & );
        double obwod();
        void pokaz();
        Wielokat & operator= ( const Wielokat &w ) = delete;
    private:
        int rozmiar;
        int ilep;
        Punkt *punkty;
        void zmien_rozmiar( int );
};

#endif
