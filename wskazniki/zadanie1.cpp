/*
Mamy tablice int [8] z liczbami:
    { 2, 34, 350, 23, 19, 192, 123, 87 }

Napisać funkcję wyczysc(), która wyzeruje w tablicy wartosci wieksze niz 100.
*/
#include <iostream>


void wyczysc( int * tab, int ile_elementow ){
    for( int i = 0; i < ile_elementow; i++ ){
        std::cout << "Wartosc w tablicy[" << i << "] wynosi " << tab[i] << std::endl;
        if ( tab[i] > 100 ){
            tab[i] = 0;
        }
    }
}

int main(){
    const int ile = 8;

    int *wazneliczby;

    int liczby[] = { 2, 34, 350, 23, 19, 192, 123, 87 };

    wazneliczby = liczby;
    wazneliczby += 1;

    for(int i=0; i<ile; i++){
 //           std::cout << liczby[i] << " ";
    }
    std::cout << std::endl;

    //wyczysc( liczby, ile );

    for(int i=0; i<ile; i++){
            std::cout << liczby[i] << " ";
    }
    std::cout << std::endl;

    std::cout << *wazneliczby << std::endl;
    std::cout << wazneliczby[0] << std::endl;

    std::cout << *( wazneliczby+1 ) << std::endl;
    std::cout << wazneliczby[1] << std::endl;

    std::cout << *( 3 + wazneliczby ) << std::endl;
    std::cout << 3[ wazneliczby ] << std::endl; 

}