#include <iostream>

#include "Struktury.hpp"

void Lista::pokaz() const {
    std::cout << "Lista: " << std::endl;
    if ( this->is_empty() ){
        std::cout << "*** PUSTA ***" << std::endl;
    }
    else {
        // TODO: wyświetlić elementy

    }
}

bool Lista::is_empty() const {
    return this->licznik == 0;
}
