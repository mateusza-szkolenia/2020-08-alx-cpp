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
                + std::to_string( wzrost ) + "m " 
                + std::to_string( bmi() ) +
                "]";
        }
    private:
        double bmi() const {
            return waga/(wzrost*wzrost);
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

struct KomparatorLudzi_WgWzrostu
{
    bool operator()( const Czlowiek & a, const Czlowiek & b ){
        return a.wzrost < b.wzrost;
    }
};

struct KomparatorLudzi
{
    std::string wlasnosc;
    bool reversed;

    KomparatorLudzi( std::string wlasnosc, bool rev = false ):
        wlasnosc(wlasnosc),
        reversed(rev)
    {

    }

    double BMI( const Czlowiek & czl ){
        return czl.waga / ( czl.wzrost * czl.wzrost );
    }

    bool porownaj_wg_wagi( const Czlowiek & a, const Czlowiek & b ){
        return a.waga < b.waga;
    }

    bool porownaj_wg_wzrostu( const Czlowiek & a, const Czlowiek & b ){
        return a.wzrost < b.wzrost;
    }

    bool porownaj_wg_imienia( const Czlowiek & a, const Czlowiek & b ){
        return a.imie < b.imie;
    }
/*
    bool porownaj_wg_bmi( const Czlowiek & a, const Czlowiek & b ){
        return a.bmi() < b.bmi();
    }
*/

    bool porownaj_wg_bmi2( const Czlowiek & a, const Czlowiek & b ){
        return BMI( a ) < BMI( b );
    }


    bool operator()( const Czlowiek & a, const Czlowiek & b ){
        bool wynik;
        if ( wlasnosc == "waga" ) wynik = porownaj_wg_wagi( a, b );
        else if ( wlasnosc == "wzrost" ) wynik = porownaj_wg_wzrostu( a, b );
        else if ( wlasnosc == "imie" ) wynik = porownaj_wg_imienia( a, b );
        else if ( wlasnosc == "bmi" ) wynik = porownaj_wg_bmi2( a, b );
        
        if ( reversed ) wynik = ! wynik;

        return wynik;
    }
};

// y = ax + b
// f(x) = ax + b

struct FunkcjaLiniowa
{
    double a;
    double b;
    FunkcjaLiniowa( double a, double b ):
        a(a),
        b(b)
    {
    }

    double policz( double x ){
        return a*x + b;
    }

    double operator()( const double & x ){
        return a*x + b;
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

    ludzie.sort( KomparatorLudzi( "bmi" ) );

    for ( auto c : ludzie ){
        std::cout << static_cast<std::string>( c ) << std::endl;
    }

    auto komp = KomparatorLiczb();

    std::cout << komp( 44, 10 ) << std::endl;

    auto f1 = FunkcjaLiniowa( 2, -5 );

    std::cout << f1.policz( 0 ) << std::endl;
    std::cout << f1( 0 ) << std::endl;


}