#include <iostream>

double koszt( int ile, double cena_podstawowa, double cena_promo, int duzo )
{
    double suma = 0;

    if ( ile <= duzo ){
        return ile * cena_podstawowa;
    }
    else {
        return duzo * cena_podstawowa + ( ile - duzo ) * cena_promo;
    }
    
}

int main(){
    // 30*10 + 70*3 => 300 + 210 => 510
    std::cout << koszt( 100, 10.0, 3.0, 30 ) << std::endl;
}