#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <iterator>
#include <map>


struct Wezel;
struct Kompresor;

class Kompresor {
    std::vector<Wezel*> wezly;
    std::map<int,Wezel*> znaki;
    Wezel *korzen;

    public:
        void BudujDrzewo();
        void Info();
        Wezel *znajdzNajmniejszyWezel();
};

struct Wezel {
        int wartosc;
        long count;
        bool uzyty;
        Wezel *left;
        Wezel *right;
        Wezel( long c = 0, int w = -1 );
        Wezel( Wezel *l, Wezel *r );
        void Info();
        void drukujPoddrzewo( int wciecie = 0 );
        void kodujPoddrzewo();
        std::vector<int> kod;
};

void Wezel::kodujPoddrzewo( ){
    if ( left ){
        std::copy( kod.begin(), kod.end(), std::back_inserter( left->kod ) );
        left->kod.push_back( 0 );
        left->kodujPoddrzewo();
    }
    if ( right ){
        std::copy( kod.begin(), kod.end(), std::back_inserter( right->kod ) );
        right->kod.push_back( 1 );
        right->kodujPoddrzewo();
    }
}

void Wezel::drukujPoddrzewo( int wciecie ){
    if ( right ){
        right->drukujPoddrzewo( wciecie + 1 );
    }
    for ( auto i = 0; i < wciecie; i++ ){
        std::cout << "    ";
    }
    Info();
    std::cout << std::endl;
    if ( left ){
        left->drukujPoddrzewo( wciecie + 1 );
    }
}

void Kompresor::BudujDrzewo(){
    int znak;
    do 
    {
        znak = std::cin.get();
        if ( znaki.count( znak ) ){
            znaki[ znak ]->count++;
        }
        else {
            auto pw = new Wezel( 1, znak );
            znaki[ znak ] = pw;
            wezly.push_back( pw );
        }
    }
    while( znak != -1 );

    for ( auto i = 0; i < znaki.size() - 1; i++ ){
        std::cout << "Budowanie drzewa krok #" << i << ": " << std::endl;

        auto pw1 = znajdzNajmniejszyWezel();
        pw1->uzyty = true;
        auto pw2 = znajdzNajmniejszyWezel();
        pw2->uzyty = true;

        std::cout << "pw1: "; pw1->Info(); std::cout << std::endl;
        std::cout << "pw2: "; pw2->Info(); std::cout << std::endl;

        auto pnw = new Wezel( pw1, pw2 );
        wezly.push_back( pnw );
    }

    korzen = znajdzNajmniejszyWezel();
    korzen->kodujPoddrzewo();

}

void Kompresor::Info(){
    std::cout << "Mapa: " << znaki.size() << std::endl;
    for ( auto kv : znaki ){
        std::cout << "[" << kv.first << "] ";
        kv.second->Info();
        std::cout << std::endl;
    }

    std::cout << "Wektor: " << wezly.size() << std::endl;
    for ( auto w : wezly ){
        w->Info();
        std::cout << std::endl;
    }

    std::cout << "Drzewo: " << korzen << std::endl;
    if ( korzen ){
        korzen->drukujPoddrzewo();
    }

}

Wezel* Kompresor::znajdzNajmniejszyWezel(){
    Wezel *wynik = nullptr;
    long minc = __LONG_MAX__;

    for( auto pw : wezly ){
        if ( pw->uzyty ) continue;
        if ( pw->count <= minc ){
            wynik = pw;
            minc = pw->count;
        }
    }
    return wynik;
}

Wezel::Wezel( Wezel *l, Wezel *p ) :
    left(l),
    right(p),
    wartosc(-2),
    count( l->count + p->count ),
    uzyty( false )
{
}


Wezel::Wezel( long c, int w ) :
    wartosc( w ),
    left(nullptr),
    right(nullptr),
    count( c ),
    uzyty( false )
{

}

void Wezel::Info(){

    std::cout << count << " ";

    if ( wartosc == -2 ){
        std::cout << "***";
    }
    else if ( wartosc == -1 ) {
        std::cout << "EOF";
    }
    else if ( wartosc == 0xa ) {
        std::cout << "NL ";
    }
    else if ( wartosc >= ' ' && wartosc <= 127 ){
        std::cout << "[" << (char)wartosc << "]";
    }
    else {
        std::cout << std::hex << wartosc;
    }

    std::cout << " kod=";
    for ( auto k : kod ){
        std::cout << k ;
    }

    if ( left ){
        std::cout << " <" << left << ":" << right << ">";
    }
}

int main(){
    Kompresor k;
    k.BudujDrzewo();
    k.Info();

}

/*
    std::vector<Wezel> wezly;

    int znak;
    while( (znak = std::cin.get()) != -1 ){
        auto z = std::find_if(
            std::begin( wezly ),
            std::end( wezly ),
            [znak]( const Wezel & w ){ return w.wartosc == znak; }
        );
        if ( z == std::end( wezly ) ){
            wezly.push_back( Wezel(1, znak ) );
        }
        else {
            (*z).count++;
        }
    }
    wezly.push_back( {1, -1 } );

    for ( auto w : wezly ){
        std::cout << w.wartosc << " : " << w.count << std::endl;
    }
/*
    long maxs = 0;
    long sums = 0;
    for ( auto i = 0; i < 256; i ++ ){
        sums += statystyki[i];
        if ( statystyki[i] > maxs ) maxs = statystyki[ i ];
    }

    for ( auto i = 0; i < 256; i ++ ){
        if ( statystyki[i] == 0 ) continue;
        std::cout << std::setw( 3 ) << i 
            << ": [" ;
        if ( i >= 32 && i <= 126 ){
            std::cout << " " << (char)i << " ";
        }
        else {
            std::cout << "...";
        }


        std::cout << "] " << std::setw( 6 ) << statystyki[ i ] << " ";
        std::cout << std::fixed << std::setprecision( 4 ) << std::setw( 7 ) << ( 1.0 * statystyki[i] / sums ) << " ";
        for ( auto j = 0; j < 50 * statystyki[ i ] / maxs; j++ ){
            std::cout << "#";
        }
        std::cout << std::endl;
    }
*/
