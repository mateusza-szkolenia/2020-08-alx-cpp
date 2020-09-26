#include "Figura.hpp"

#ifndef KWADRAT_HPP
#define KWADRAT_HPP

class Kwadrat {
    private:
        double bok;
        const int typ;

/*
    protected:
        void setTyp( const int t );
*/

    public:
        Kwadrat( const double a, int t = Figura::Kwadrat );
        double getBok() const ;
        void setBok( const double a );
        int getTyp() const;
        double getPole() const;
};

#endif
