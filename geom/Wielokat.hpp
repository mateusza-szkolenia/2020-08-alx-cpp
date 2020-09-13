#include "Punkt.hpp"

#ifndef WIELOKAT_HPP
#define WIELOKAT_HPP

class Wielokat {
    public:
        Wielokat();
        void dodaj( const Punkt & );
        double obwod();
        void pokaz();
    private:
        int rozmiar;
        int ilep;
        Punkt *punkty;
};

#endif
