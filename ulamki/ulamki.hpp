#include <iostream>

#ifndef ULAMKI_HPP
#define ULAMKI_HPP

int gcd(int , int );

struct Ulamek {
    private:
        int licznik;
        int mianownik;
    
    public:
        void setLicznik( int l );
        void setMianownik( int m );

        int getLicznik();
        int getMianownik();

        void wypisz();

        Ulamek( int l, int m );
        Ulamek( int l );
        Ulamek();
        
        Ulamek mnoz( const Ulamek& u );

        Ulamek dodaj( const Ulamek& u );
        Ulamek operator * ( const Ulamek& u );

        void skroc_sie();
};

#endif
