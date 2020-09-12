#include <iostream>

#ifndef ULAMKI_HPP
#define ULAMKI_HPP

int gcd(int , int );

struct Ulamek {
    private:
        int licznik;
        int mianownik;
    
    public:
    
    void setLicznik( int l ){
        this->licznik = l;
        this->skroc_sie();
    }

    void setMianownik( int m ){
        if ( m == 0 ){
            // zglos blad, albo zrob quick fix
            m = 1;
        }
        this->mianownik = m;
        this->skroc_sie();
    }

    int getLicznik(){
        return this->licznik;
    }

    int getMianownik(){
        return this->mianownik;
    }

    void wypisz(){
        std::cout << this->licznik << "/" << this->mianownik << std::endl;
    }

    Ulamek( int l = 0, int m = 1 ){
        this->licznik = l;
        if ( m == 0 ){
            // quick fix
            m = 1;
        }
        this->mianownik = m;
        std::cout << "Powstal nowy ulamek o podanych l i m!" << std::endl;
        this->skroc_sie();
    }

    Ulamek mnoz( const Ulamek& u ){
        Ulamek wynik;
        wynik.licznik = this->licznik * u.licznik;
        wynik.mianownik = this->mianownik * u.mianownik;
        wynik.skroc_sie();
        return wynik;
    }

    Ulamek dodaj( const Ulamek& u ){
        Ulamek wynik;
        wynik.licznik = this->licznik * u.mianownik + this->mianownik * u.licznik;
        wynik.mianownik = this->mianownik * u.mianownik;
        wynik.skroc_sie();
        return wynik;
    }

    Ulamek operator * ( const Ulamek& u ){
        Ulamek wynik;
        wynik.licznik = this->licznik * u.licznik;
        wynik.mianownik = this->mianownik * u.mianownik;
        wynik.skroc_sie();
        return wynik;
    }

    void skroc_sie(){
        int dz;
        dz = gcd( this->licznik, this->mianownik );
        this->licznik /= dz;
        this->mianownik /= dz;
    }

};

#endif
