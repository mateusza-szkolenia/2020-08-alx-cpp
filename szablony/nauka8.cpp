#include <iostream>
#include <string>
#include <list>

class Czlowiek {
    public:
        std::string imie;
        double waga;
        double wzrost;
        Czlowiek( std::string i, double wa, double wz ):
            imie(i),
            waga(wa),
            wzrost(wz)
        {
        }
        operator std::string() {
            return "Czlowiek[ " 
                + imie + " " + std::to_string( waga ) + "kg " 
                + std::to_string( wzrost ) + "m]";
        }

};

struct KomparatorLiczb
{
    bool operator()( const int & a, const int & b ){
        std::cout << "Porownanie liczb " << a << " i " << b << std::endl;
        return a > b;
    }
};

struct KomparatorLudzi_WgWagi
{
    bool operator()( const Czlowiek & a, const Czlowiek & b ){
        return a.waga < b.waga;
    }

};

int main(){

    std::list<int> liczby = {
        100, 13, 14, 15, 166, 16616, 666, 6546, 456
    };

    liczby.sort( KomparatorLiczb{} );

    for ( auto l : liczby ){
        std::cout << l << std::endl;
    }

    std::list<Czlowiek> ludzie;

    ludzie.push_back( Czlowiek{ "Andrzej", 80, 1.8 } );
    ludzie.push_back( Czlowiek{ "Michal", 83, 1.7 } );
    ludzie.push_back( Czlowiek{ "Piotr", 78, 1.54 } );
    ludzie.push_back( Czlowiek{ "Bartek", 64, 1.76 } );
    ludzie.push_back( Czlowiek{ "Czeslaw", 100, 1.58 } );

    ludzie.sort( KomparatorLudzi_WgWagi() );

    for ( auto c : ludzie ){
        std::cout << static_cast<std::string>( c ) << std::endl;
    }


}