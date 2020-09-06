#include <iostream>
#include "odleglosc.hpp"

int main(){
    double sklepx, sklepy, sklepr;

    int liczba_wiosek;
    int wzasiegu = 0;

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
        double odl;
        odl = odleglosc( sklepx, sklepy, wx[i], wy[i] );

        std::cout << "Wioska #" << i << ": ("
            << wx[i] << ", " << wy[i] << ") " << wp[i] << 
            " = " << odl << " vs " << sklepr << std::endl;
        if ( odl < sklepr ){
            wzasiegu += wp[i];
            std::cout << "W zasiegu" << std::endl;
        }
        else {
            std::cout << "Za daleko" << std::endl;
        }
    }

    std::cout << "W zasiegu: " << wzasiegu << std::endl;
}
