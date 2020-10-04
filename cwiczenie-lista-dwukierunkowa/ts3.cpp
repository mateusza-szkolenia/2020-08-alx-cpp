#include <iostream>

#include "Drzewo.hpp"

class Czlowiek {
    std::string imie;
    int wiek;
    public:
    Czlowiek( std::string i, int w ) :
        imie(i),
        wiek(w){}

    bool operator < ( const Czlowiek & c ){
        return c.imie < this->imie;
    }
    friend std::ostream& operator << ( std::ostream &os, const Czlowiek & c ){
        os << "CZLOWIEK: " << c.imie << " " << c.wiek;
        return os;
    }
};



int main(){
    Drzewo<Czlowiek> t;

    while( true ){
        std::string imie;
        int wiek;
        std::cout << "Podaj imie: " << std::endl;
        if ( imie == "KONIEC" ){
            return 0;
        }
        std::cin >> imie;
        std::cout << "Podaj wiek: " << std::endl;
        std::cin >> wiek;
        Czlowiek x { imie, wiek };
        t.insert( x );
        t.drukuj();
    }

}