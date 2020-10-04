#include <iostream>

class UjemnyRozmiarException : public std::exception {

    public:
        int a;
        int b;
        int ile;

        UjemnyRozmiarException( int a, int b ) :
            a(a),
            b(b),
            ile(a-b){

            }

};

int rozmiar( int a, int b ){

    if ( b >= a ){
        throw UjemnyRozmiarException(a,b);
    }

    return a - b;
}

int main(){

    int a = 5;
    int b = 0;

    //auto c = a / b;
    int *x = nullptr;
    try {
        x = new int[ rozmiar( 0x7fffffff, -0 ) ];
    }
    catch( std::bad_alloc &e ){
        std::cout << "Blad alokacji\n";
    }
    catch( UjemnyRozmiarException &e ){
        std::cout << "Proba obliczenia ujemnego rozmiaru: " << e.a << "-" << e.b << "=" << e.ile << std::endl;
    }
    catch( std::exception &e ){
        std::cout << "Rzucono wyjatek: " << e.what() << std::endl;
    }
    catch( int e ){
        std::cout << "Wyjatek numeryczny: " << e << std::endl;
    }
    catch(...){
        std::cout << "Cos sie zepsulo" << std::endl;
    }
    

    std::cout << "Wskaznik: " << x << std::endl;

}