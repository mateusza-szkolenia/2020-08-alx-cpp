#include <iostream>

#ifndef ULAMKI_HPP
#define ULAMKI_HPP

int gcd(int , int );

class Ulamek {
    
        int licznik;
        int mianownik;
        void skroc_sie();
    
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
        Ulamek operator + ( const Ulamek& u );
        Ulamek operator - ( const Ulamek& u );
        Ulamek operator / ( const Ulamek& u );

        int operator > ( const Ulamek& u );


        operator double();
        operator int();
        operator std::string();

};

#endif
