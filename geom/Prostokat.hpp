#include "Kwadrat.hpp"

#ifndef PROSTOKAT_HPP
#define PROSTOKAT_HPP

class Prostokat : public Kwadrat {
    private:
        double bok2;
    public:
        Prostokat( const double a, const double b, int t = Figury::Prostokat );
        double getBok2() const;
        void setBok2( double a );
        virtual double getPole() const;
};

#endif
