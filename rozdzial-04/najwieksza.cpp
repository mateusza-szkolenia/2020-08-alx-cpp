#include <iostream>

int main(){
    int n;
    int liczba;
    int najwieksza;

    std::cin >> n;

    if ( n <= 0 ){
        return 0;
    }

    int i;
    for ( i = 0; i < n; i++ ){
        std::cin >> liczba;
        if ( ( i == 0 ) || ( liczba > najwieksza ) ){
            najwieksza = liczba;
        }
    }
    std::cout << "Najwieksza to: " << najwieksza << std::endl;

}