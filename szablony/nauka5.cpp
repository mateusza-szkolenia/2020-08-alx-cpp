#include <iostream>
#include <vector>

int main(){
    std::vector<int> Liczby;

    Liczby.push_back( 10 );
    Liczby.push_back( 13 );
    Liczby.push_back( 15 );
    Liczby.push_back( 1767 );
    Liczby.push_back( 10234 );
    Liczby.shrink_to_fit();
    Liczby.push_back( 1034 );

    for ( auto i = 0; i < Liczby.size(); i++ ){
        std::cout << Liczby[i] / 2 << std::endl;

    }

}