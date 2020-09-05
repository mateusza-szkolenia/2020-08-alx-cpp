#include <iostream>

void koszt1( int b ){
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

    std::cout << "Razem: " << suma << std::endl;

}

void koszt3( int b ){
    std::cout << "Razem:" << (( b <= 5 ) ? b * 20 : ( ( 5 * 20 ) + ( b - 5 ) * 15 )) << std::endl;
}

void koszt2( int b ){
    int suma = 0;

    if ( b <= 5 ){
        suma = b * 20;
    }
    else {
        suma = 5 * 20 + ( b - 5 ) * 15;
    }

    std::cout << "Razem: " << suma << std::endl;

}

int main(){
    int ile;

    std::cin >> ile;

    koszt3( ile );

}