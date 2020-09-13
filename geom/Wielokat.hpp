#include "Punkt.hpp"

#ifndef WIELOKAT_HPP
#define WIELOKAT_HPP

class Wielokat {
    public:
        Wielokat( int r = 16 );
        void dodaj( const Punkt & );
        double obwod();
        void pokaz();
    private:
        int rozmiar;
        int ilep;
        Punkt *punkty;
};

#endif
