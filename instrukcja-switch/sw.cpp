#include <iostream>

int main(){

    int miesiac;
    int kw;

    std::cout << "Podaj miesiac: " << std::endl;

    std::cin >> miesiac;

    switch( miesiac ){
        case 1:
            kw = 1;
            break;
        default:
            break;
    }

    std::cout << "Kwartal: " << kw << std::endl;

}