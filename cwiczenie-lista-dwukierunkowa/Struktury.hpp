#ifndef STRUKTURY_HPP
#define STRUKTURY_HPP

class ElementListy;

class Lista {
    int licznik;
    ElementListy *first;
    ElementListy *last;

    public:
        Lista();
        void pokaz() const;
        bool is_empty() const;
        void append( int );

};

class ElementListy {
    int wartosc;
    ElementListy *next;
    ElementListy *prev;
};


#endif
