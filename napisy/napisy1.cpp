#include <iostream>

int main(){
    std::string imie = "Mąka";
    std::string imie2{"Marcin"};

    std::cout << "Imie to: " << imie << "(liczba liter: " << imie.size() << std::endl;
    std::cout << "Imie2 to: " << imie2 << "(liczba liter: " << imie2.size() << std::endl;

    // "[M][a][t][e][u][s][z]"

    imie[1] = '@';

    for( long unsigned i = 0; i < imie.size(); i++ ){
        char znak = imie.at( i );
        std::cout << "[" << znak << "]";
    }
    std::cout << std::endl;

    imie2[1] = '_';

    for( long unsigned i = 0; i < imie2.size(); i++ ){
        char znak = imie2[ i ];
        std::cout << "[" << znak << "]";
    }
    std::cout << std::endl;

}