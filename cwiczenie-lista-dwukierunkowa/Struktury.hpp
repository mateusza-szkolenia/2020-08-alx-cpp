#ifndef STRUKTURY_HPP
#define STRUKTURY_HPP

class ElementListy;

class Lista {
    int licznik;
    ElementListy *first;
    ElementListy *last;

    public:
        void pokaz() const;
        bool is_empty() const;

};

class ElementListy {
    Lista *lista;
};


#endif
