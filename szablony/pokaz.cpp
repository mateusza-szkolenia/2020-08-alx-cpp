#include <iostream>
#include "pokaz.hpp"

template <typename T>
void pokazTo( T o ){
    std::cout << o.nazwa << std::endl;
    o.pokaz();
}

template <>
void pokazTo( int o ){
    std::cout << "INT: " << o << std::endl;
}

