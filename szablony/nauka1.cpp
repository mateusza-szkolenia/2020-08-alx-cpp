#include <iostream>

class Czlowiek {
    public:
        std::string imie;
        double wzrost;
        Czlowiek( std::string i, double w ):
            imie(i),
            wzrost(w)
        {
        }

        bool operator < ( Czlowiek & c ){
            if ( this->wzrost < c.wzrost ){
                return true;
            }
            else {
                return false;
            }
        }

};

template <typename T>
T mniejsza( T a, T b ){
    if ( a < b ){
        return a;
    }
    else {
        return b;
    }
}

int main(){
    std::cout << mniejsza( 500, 499 ) << std::endl;
    std::cout << mniejsza( 500.5, 499.9 ) << std::endl;
    std::cout << mniejsza( "zebra", "albatros" ) << std::endl;
    std::cout << mniejsza<int>( 100, 95.5 ) << std::endl;

    auto c1 = Czlowiek{ "Andrzej", 1.8 };
    auto c2 = Czlowiek{ "Zygmunt", 1.59 };

    std::cout << mniejsza( c1, c2 ).imie << std::endl;

}
