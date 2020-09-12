#include "ulamki.hpp"

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

void Ulamek::setLicznik( int l ){
    this->licznik = l;
    this->skroc_sie();
}

void Ulamek::setMianownik( int m ){
    if ( m == 0 ){
        // zglos blad, albo zrob quick fix
        m = 1;
    }
    this->mianownik = m;
    this->skroc_sie();
}

int Ulamek::getLicznik(){
    return this->licznik;
}

int Ulamek::getMianownik(){
    return this->mianownik;
}

void Ulamek::wypisz(){
    std::cout << this->licznik << "/" << this->mianownik << std::endl;
}

Ulamek::Ulamek( int l ) : Ulamek( l, 1 ){}

Ulamek::Ulamek() : Ulamek( 0 ){}

Ulamek::Ulamek( int l, int m ){
    this->licznik = l;
    if ( m == 0 ){
        // quick fix
        m = 1;
    }
    this->mianownik = m;
    std::cout << "Powstal nowy ulamek o podanych l i m!" << std::endl;
    this->skroc_sie();
}

Ulamek Ulamek::mnoz( const Ulamek& u ){
    Ulamek wynik;
    wynik.licznik = this->licznik * u.licznik;
    wynik.mianownik = this->mianownik * u.mianownik;
    wynik.skroc_sie();
    return wynik;
}

Ulamek Ulamek::dodaj( const Ulamek& u ){
    Ulamek wynik;
    wynik.licznik = this->licznik * u.mianownik + this->mianownik * u.licznik;
    wynik.mianownik = this->mianownik * u.mianownik;
    wynik.skroc_sie();
    return wynik;
}

Ulamek Ulamek::operator * ( const Ulamek& u ){
    Ulamek wynik;
    wynik.licznik = this->licznik * u.licznik;
    wynik.mianownik = this->mianownik * u.mianownik;
    wynik.skroc_sie();
    return wynik;
}

void Ulamek::skroc_sie(){
    int dz;
    dz = gcd( this->licznik, this->mianownik );
    this->licznik /= dz;
    this->mianownik /= dz;
}
