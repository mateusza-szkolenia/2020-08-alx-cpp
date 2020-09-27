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
        void append( const int );
        void insert( const int );
        int count( const int ) const;
        ElementListy* find( const int ) const;
        void deleteEle( ElementListy const * const );
        void cleanup();

};

class ElementListy {
    public:
        int wartosc;
        ElementListy *next;
        ElementListy *prev;
        ElementListy( const int );    
        void pokaz() const;
};


#endif
