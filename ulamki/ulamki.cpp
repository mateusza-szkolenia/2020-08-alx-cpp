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
    std::cout << "Powstal nowy Ulamek() pod adresem " << this << std::endl;
    this->skroc_sie();
}

Ulamek::~Ulamek(){
    std::cout << "Zniszczono Ulamek() z adresu " << this << std::endl;
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

Ulamek Ulamek::operator + ( const Ulamek& u ){
    Ulamek wynik;
    wynik.licznik = this->licznik * u.mianownik + this->mianownik * u.licznik;
    wynik.mianownik = this->mianownik * u.mianownik;
    wynik.skroc_sie();
    return wynik;
}
Ulamek Ulamek::operator - ( const Ulamek& u ){
    Ulamek wynik;
    wynik.licznik = this->licznik * u.mianownik - this->mianownik * u.licznik;
    wynik.mianownik = this->mianownik * u.mianownik;
    wynik.skroc_sie();
    return wynik;
}

int Ulamek::operator > ( const Ulamek& u ){
    return ( this->licznik * u.mianownik - this->mianownik * u.licznik > 0 );
}




Ulamek Ulamek::operator * ( const Ulamek& u ){
    Ulamek wynik;
    wynik.licznik = this->licznik * u.licznik;
    wynik.mianownik = this->mianownik * u.mianownik;
    wynik.skroc_sie();
    return wynik;
}


Ulamek Ulamek::operator / ( const Ulamek& u ){
    Ulamek wynik;
    wynik.licznik = this->licznik * u.mianownik;
    wynik.mianownik = this->mianownik * u.licznik;
    if ( wynik.mianownik == 0 ){
        // Obsluga bledu
        wynik.mianownik = 1;
    }
    wynik.skroc_sie();
    return wynik;
}

Ulamek::operator double(){
    double wynik;
    wynik = (double)licznik / (double)mianownik;
    return wynik;
}

Ulamek::operator int(){
    return licznik / mianownik;
}

Ulamek::operator std::string(){
    std::string w;
    w = std::to_string( licznik ) + "/" + std::to_string( mianownik );
    return w;
}

void Ulamek::skroc_sie(){
    int dz;
    dz = gcd( this->licznik, this->mianownik );
    this->licznik /= dz;
    this->mianownik /= dz;
}
