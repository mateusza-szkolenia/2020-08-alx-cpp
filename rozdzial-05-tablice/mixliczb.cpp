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
        std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
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