#include "pierwiastek.hpp"

double odleglosc( double x1, double y1, double x2, double y2 ){
    double a,b,c;
    a = y1 - y2;
    b = x1 - x2;
    c = pierwiastek( a*a + b*b );
    return c;
}