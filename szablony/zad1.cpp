#include <iostream>
#include <vector>

std::vector<int> zakres( int a, int b ){
    std::vector<int> w;
    for( auto i = a; i <= b; i++ ){
        w.push_back( i );
    }

    return w;
}

int main(){

    for ( auto x : zakres( 5, 12 ) ){
        std::cout << x << std::endl;
    }

}