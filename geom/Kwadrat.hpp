#include "Figura.hpp"

#ifndef KWADRAT_HPP
#define KWADRAT_HPP

class Kwadrat : public Figura {
    private:
        double bok;
        const int typ;

/*
    protected:
        void setTyp( const int t );
*/

    public:
        Kwadrat( const double a, int t = Figury::Kwadrat );
        double getBok() const ;
        void setBok( const double a );
        int getTyp() const;
        virtual double getPole() const;
};

#endif
