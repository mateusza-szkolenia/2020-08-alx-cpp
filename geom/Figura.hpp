#ifndef FIGURA_HPP
#define FIGURA_HPP

class Figura {
    public:
        virtual double getPole() const = 0;
};

namespace Figury {
    const int Kwadrat = 101;
    const int Prostokat = 102;
}

#endif