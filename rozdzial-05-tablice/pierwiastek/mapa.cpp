#include <iostream>
#include "odleglosc.hpp"

int main(){
    double sklepx, sklepy, sklepr;

    int liczba_wiosek;

    std::cin >> sklepx;
    std::cin >> sklepy;
    std::cin >> sklepr;

    std::cout << "Sklep: " << sklepx << ", " << sklepy << " (" << sklepr << ")\n";

    std::cin >> liczba_wiosek;

    double wx[ liczba_wiosek ];
    double wy[ liczba_wiosek ];
    int wp[ liczba_wiosek ];

    std::cout << "Liczba wiosek: " << liczba_wiosek << std::endl;

    for ( int i = 0; i < liczba_wiosek; i++){
        std::cin >> wx[i];
        std::cin >> wy[i];
        std::cin >> wp[i];
    }
for ( int i = 0; i < liczba_wiosek; i++){
        std::cout << "Wioska #" << i << ": ("
            << wx[i] << ", " << wy[i] << ") " << wp[i] << std::endl;
    }
}
