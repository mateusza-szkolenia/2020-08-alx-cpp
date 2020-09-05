#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int tab[n];
    int i;
    for ( i = 0; i < n; i++ ){
        int liczba;
        std::cin >> liczba;
        tab[i] = liczba;
    }

    for ( i = 0; i < n; i++ ){
        int czy_maks;

        //wersja z pomijaniem pierwszego i ostatniego
        //czy_maks = ( i > 0 && i < n-1 && tab[i] > tab[i-1] && tab[i] > tab[i+1] );

        //wersja z "zawijaniem dookola"
        czy_maks = ( tab[i] > tab[ (i+n-1) % n ] && tab[i] > tab[ (i+1) % n] );

        std::cout << "tab[" << i << "] = " 
            << tab[i] << " " << ( czy_maks ? "*" : "" )
            << std::endl;
    }

    
    for ( int j = 0; j < 2; j++){
        std::cout << ( j ? "Nieparzyste: " : "Parzyste: " );
        for ( i = 0; i < n; i++ ){
            if ( tab[i] % 2 == j ){
                std::cout << tab[i] << " ";
            }
        }
        std::cout << std::endl;
    }
}