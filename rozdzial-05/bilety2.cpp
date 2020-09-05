#include <iostream>

const int cena_normalna = 20;

int koszt1( int b ){
    int suma = 0;
    int i;

    for ( i = 1; i <= b; i++ ){
        int cena;
        if ( i <= 5 ){
            cena = 20;
        }
        else {
            cena = 15;
        }
        suma += cena;
        //std::cout << "bilet numer " << i << " cena " << cena << std::endl;
    }
    return suma;
}

int koszt3( int b ){
    return (( b <= 5 ) ? b * 20 : ( ( 5 * 20 ) + ( b - 5 ) * 15 ));
}

int koszt2( int b ){
    
    int suma = 0;

    if ( b <= 5 ){
        suma = b * cena_normalna;
    }
    else {
        suma = 5 * cena_normalna + ( b - 5 ) * 15;
    }
    return suma;
}

int main(){
    int ile;

    double kurs = 4.46;
    double calk;

    std::cin >> ile;

    calk = koszt3( ile );

    std::cout << "Koszt biletow to: " << calk << std::endl;

}