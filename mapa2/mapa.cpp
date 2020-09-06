#include <iostream>
#include "odleglosc.hpp"

int main(){
    
    int liczba_wiosek;
    int liczba_sklepow;

    std::cin >> liczba_sklepow;
    double sklepx[ liczba_sklepow ];
    double sklepy[ liczba_sklepow ];

    int sklepyk[ liczba_sklepow ];

    for ( int i = 0; i < liczba_sklepow; i++){
        std::cin >> sklepx[i];
        std::cin >> sklepy[i];
        sklepyk[ i ] = 0;
    }

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
        int ns;
        //odl = odleglosc( sklepx, sklepy, wx[i], wy[i] );
        

        std::cout << "Wioska #" << i << ": ("
            << wx[i] << ", " << wy[i] << ") " << wp[i] 
            << std::endl;
       
        ns = 0;
        for ( int j = 0; j < liczba_sklepow; j++ ){
            double odl = odleglosc( wx[i], wy[i], sklepx[j], sklepy[j] );
            if ( odl < odleglosc( wx[i], wy[i], sklepx[ns], sklepy[ns] )  ){
                ns = j;
            }
            std::cout << "Sklep " << sklepx[j] << ", " << sklepy[j] << "=" << odl;            
            std::cout << std::endl;
        }
        std::cout << "Najmniejsza: " << ns << std::endl;
        sklepyk[ ns ] += wp[i];
    }

    for ( int i = 0; i < liczba_sklepow; i++ ){
        std::cout << "Sklep #" << i << ": " << sklepyk[ i ] << std::endl;
    }
}
