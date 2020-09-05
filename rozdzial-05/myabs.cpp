#include <iostream>

int myabs( int n ){
    // std::cout << "myabs(INT)" << std::endl;
    if ( n > 0 ){
        return n;
    }
    else {
        return -n;
    }
}

long myabs( long n ){
    //std::cout << "myabs(LONG)" << std::endl;
    if ( n >= 0 ){
        return n;
    }
    else {
        return -n;
    }
}
