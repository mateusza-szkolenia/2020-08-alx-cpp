#ifndef PUNKT_HPP
#define PUNKT_HPP

class Punkt {
    public:
        Punkt( double x = 0.0, double y = 0.0 );
        double odleglosc( const Punkt & );
        double x;
        double y;

};

#endif