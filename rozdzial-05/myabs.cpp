#include <iostream>

int myabs( int n ){
    std::cout << "myabs(INT)" << std::endl;
    if ( n >= 0 ){
        return n;
    }
    else {
        return -n;
    }
}

long myabs( long n ){
    std::cout << "myabs(LONG)" << std::endl;
    if ( n >= 0 ){
        return n;
    }
    else {
        return -n;
    }
}

int main(){
    long liczba;
    std::cin >> liczba;

    std::cout << "Wartosc bezwzgledna " << liczba << " to " << myabs( 18L ) << std::endl;

}