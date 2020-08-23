#include <iostream>

int main(){
    int rok;

    int podzielny4, podzielny100, podzielny400;

    std::cin >> rok;

    podzielny4 = ( rok % 4 == 0 );
    podzielny100 = ( rok % 100 == 0 );
    podzielny400 = ( rok % 400 == 0 );

    std::cout << "Podzielny przez 4: " << ( podzielny4 ? "tak" : "nie" ) << std::endl;
    std::cout << "Podzielny przez 100: " << ( podzielny100 ? "tak" : "nie" ) << std::endl;
    std::cout << "Podzielny przez 400: " << ( podzielny400 ? "tak" : "nie" ) << std::endl;

    if ( podzielny400 || ( podzielny4 && ! podzielny100 ) ){
        std::cout << "rok przestepny" << std::endl;
    }
    else {
        std::cout << "rok zwykly" << std::endl;
    }

}

