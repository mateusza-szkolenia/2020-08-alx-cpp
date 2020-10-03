#include <iostream>

template <typename T>
void pokazTo( T o ){
    std::cout << o.nazwa << std::endl;
    o.pokaz();
}

template <>
void pokazTo( int o ){
    std::cout << "INT: " << o << std::endl;
}

class Czlowiek {
    public:
        std::string imie;
        int nazwa;
        double wzrost;
        Czlowiek( std::string i, double w ):
            imie(i),
            wzrost(w)
        {
            this->nazwa = ((int)(wzrost*wzrost*1000)) % 50;
        }
        void pokaz(){
            std::cout << "Czlowiek( " << imie << ", " << wzrost << ")" << std::endl;
        }
};

class Samochod {
    public:
        std::string nazwa;
        double moc;
        int rocznik;
        Samochod( std::string n, int r, double m ):
            nazwa{n},
            moc{m},
            rocznik{r}
        {
        }
        void pokaz(){
            std::cout << "Samochod( " << nazwa << " " << rocznik << " " << moc << ")" << std::endl;
        }
};

int main(){
    auto c1 = Czlowiek{ "Marcin", 1.82 };
    auto s1 = Samochod{ "Toyota", 2005, 135 };

    pokazTo( c1 );
    pokazTo( s1 );
    pokazTo( 80 );

}