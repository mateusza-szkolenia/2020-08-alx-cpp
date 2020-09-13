#ifndef PUNKT_HPP
#define PUNKT_HPP

class Punkt {
    public:
        Punkt();
        Punkt( double, double );
        double odleglosc( const Punkt & );
        double x;
        double y;

};

#endif