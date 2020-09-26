#include "Kwadrat.hpp"

#ifndef PROSTOKAT_HPP
#define PROSTOKAT_HPP

class Prostokat : public Kwadrat {
    private:
        double bok2;
    public:
        Prostokat( const double a, const double b, int t = Figura::Prostokat );
        double getBok2() const;
        void setBok2( double a );
        double getPole() const;
};

#endif
