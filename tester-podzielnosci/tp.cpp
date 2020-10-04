#include <iostream>

class TesterPodzielnosci {
    int dzielnik;
    public:
        TesterPodzielnosci( int dzielnik ):
            dzielnik(dzielnik)
        {

        }

        bool operator ()( int & a ){
            return a % dzielnik == 0;
        }
};

int main(){
    auto tp = TesterPodzielnosci(7);

    for ( auto i = 3; i<20; i++ ){
        std::cout << i << ": " << ( tp(i) ? "podzielne" : "nie" ) << std::endl;
    }

}
