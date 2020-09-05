#include <iostream>
#include <iomanip> 

int main(){
    double n;
    double wynik;

    double dolny;
    double gorny;

    std::cout << "Podaj liczbe: " << std::endl;
    std::cin >> n;

    if ( n < 1.0 ){
        dolny = n;
        gorny = 1.0;
    }
    else 
    {
        dolny = 0;
        gorny = n;
    }


    int i;

    for ( i = 0; i < 60; i++ ){
        wynik = ( dolny + gorny )/2;
        std::cout << "krok: " << i << " ";
        std::cout << "(" << dolny << ", " << gorny << ") ";
        std::cout << wynik << " --> " << std::setprecision(19) << ( wynik * wynik ) << " ";

        if ( wynik * wynik > n ){
            std::cout << "Za duzo!";
            gorny = wynik;
        }
        else {
            std::cout << "Za malo!";
            dolny = wynik;
        }


        std::cout << std::endl;
    }

    std::cout << "Pierwiastek z " << n << " wynosi " << wynik << std::endl;

}