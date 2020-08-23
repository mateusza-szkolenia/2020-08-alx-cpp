#include <iostream>

int main(){

    int a;
    int b;
    int c;
    int d;

    int liczba_prob = 3;

    while( liczba_prob > 0 ){
        std::cout << "podaj kod: " << std::endl;
        std::cin >> a ;
        std::cin >> b ;
        std::cin >> c ;
        std::cin >> d ;

        liczba_prob--;
        if ( a == 5 && b == 77 && c == 12 && d == 34 ){
            std::cout << "kod poprawny" << std::endl;
            liczba_prob = 3;
            return 0;
        }
        else {
            std::cout << "kod niepoprawny" << std::endl;
            //liczba_prob--;
        }
    }
    std::cout << "KONIEC. KARTA ZABLOKOWANA." << std::endl;
}