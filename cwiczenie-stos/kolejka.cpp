#include <iostream>

class ElementKolejki {
    int wartosc;
    ElementKolejki *nastepny;
    public:
        ElementKolejki( int w ):
            wartosc(w),
            nastepny(nullptr)
        {
        }
        ElementKolejki* getNastepny() const {
            return nastepny;
        }
        void setNastepny( ElementKolejki *n ){
            this->nastepny = n;
        }
        int getWartosc(){
            return this->wartosc;
        }
};

class Kolejka {
    private:
        ElementKolejki *pierwszy;
        ElementKolejki *ostatni;
        int licznik;

    public:        
        Kolejka():
            pierwszy(nullptr),
            ostatni(nullptr),
            licznik(0)
        {

        }

        ~Kolejka(){
            while( ! empty() ){
                dequeue();
            }
        }

        void drukuj(){
            std::cout << "Kolejka (" << licznik << ")" << std::endl;

            if ( ! empty() ){
                ElementKolejki *c = pierwszy;
                while( c != nullptr ){
                    std::cout << "* " << c << " = " << c->getWartosc() << std::endl;
                    c = c->getNastepny();
                }
            }
        }

        void enqueue( const int liczba ){
            ElementKolejki *pe = new ElementKolejki( liczba );

            if ( empty() ){
                this->pierwszy = pe;
            }
            else {
                this->ostatni->setNastepny( pe );
            }
            this->ostatni = pe;
            licznik++;
        }

        int dequeue(){
            int wartosc = this->pierwszy->getWartosc();
            auto n = this->pierwszy->getNastepny();
            delete this->pierwszy;
            
            this->pierwszy = n;
            licznik--;
            return wartosc;
        }

/*
        ElementKolejki* last(){
            ElementKolejki *cur;
            cur = this->pierwszy;
            while( cur->getNastepny() != nullptr ){
                cur = cur->getNastepny();
            }
            return cur;
        }
*/

        bool empty(){
            return pierwszy == nullptr;
        }
};

int main(){
    Kolejka k;
    if ( k.empty() ){
        std::cout << "Kolejka pusta" << std::endl;
    }

    k.drukuj();

    k.enqueue( 999 );
    k.enqueue( 1999 );
    k.enqueue( 2999 );
    k.enqueue( 3999 );

    k.drukuj();

    if ( k.empty() ){
        std::cout << "Kolejka pusta" << std::endl;
    }
    else {
        std::cout << "Kolejka niepusta" << std::endl;
    }

    int x;
    
    std::cout << k.dequeue() << std::endl;
    std::cout << k.dequeue() << std::endl;
    std::cout << k.dequeue() << std::endl;
    
    
}