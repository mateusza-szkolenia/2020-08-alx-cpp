#include <iostream>
#include <vector>

int main(){
    bool X[24];
    std::vector<bool> X2;

    X2.reserve( 24 );

    for ( auto i = 0; i < 24; i++ ){
        X[i] = ( i % 3 ? true : false );
        X2.push_back( i % 3 ? true : false );
    }

    for ( auto i = 0; i < 24; i++ ){
        std::cout << (int)*((char*)(void*)&(X[i])) << " ";
    }
    std::cout << std::endl;

    X2.data();

}