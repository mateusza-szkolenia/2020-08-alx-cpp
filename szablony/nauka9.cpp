#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
                + std::to_string( wzrost ) + "m " 
                + std::to_string( bmi() ) +
                "]";
        }
    private:
        double bmi() const {
            return waga/(wzrost*wzrost);
        }
};

void wyswietl_dwukrotnosc( int & a ){
    std::cout << ( a * 2 ) << std::endl;
}

void wyzeruj_parzyste( int &a ){
    if ( a % 2 == 0 ){
        a = 0;
    }
}

bool czy_wieksze_niz_150( const int &a ){
    std::cerr << "sprawdzamy czy wieksze niz 150: " << a << std::endl;
    return a > 150;
}

bool czy_wieksze_niz_30000( const int &a ){
    std::cerr << "sprawdzamy czy wieksze niz 30000: " << a << std::endl;
    return a > 30000;
}

bool czy_podzielne_przez_3( const int &a ){
    std::cerr << "sprawdzam podzielnosc przez 3 liczby " << a << std::endl;
    return a % 3 == 0;
}

int main(){

    std::vector<int> liczby = {
        100, 13, 14, 15, 166, 16616, 666, 36546, 60000, 456
    };

    // std::for_each( liczby.begin(), liczby.end(), wyzeruj_parzyste );

    int ile_podzielnych;

    ile_podzielnych = std::count_if(
        std::find_if(
            liczby.begin(),
            liczby.end(),
            czy_wieksze_niz_150
        ),
        std::find_if(
            liczby.begin(),
            liczby.end(),
            []( int x ){ return x > 50000; }
        ),
        czy_podzielne_przez_3
    );

    for ( auto l : liczby ){
       std::cout << l << " ";
    }
    std::cout << std::endl;
    std::cout << "Podzielnych przez 3: " << ile_podzielnych << std::endl;


/*
    std::list<Czlowiek> ludzie;

    ludzie.push_back( Czlowiek{ "Andrzej", 80, 1.8 } );
    ludzie.push_back( Czlowiek{ "Michal", 83, 1.7 } );
    ludzie.push_back( Czlowiek{ "Piotr", 78, 1.54 } );
    ludzie.push_back( Czlowiek{ "Bartek", 64, 1.76 } );
    ludzie.push_back( Czlowiek{ "Czeslaw", 100, 1.58 } );

    ludzie.sort( KomparatorLudzi( "bmi" ) );

    for ( auto c : ludzie ){
        std::cout << static_cast<std::string>( c ) << std::endl;
    }

    auto komp = KomparatorLiczb();

    std::cout << komp( 44, 10 ) << std::endl;

    auto f1 = FunkcjaLiniowa( 2, -5 );

    std::cout << f1.policz( 0 ) << std::endl;
    std::cout << f1( 0 ) << std::endl;
*/

}