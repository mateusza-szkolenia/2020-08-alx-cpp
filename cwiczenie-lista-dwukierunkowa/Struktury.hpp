#ifndef STRUKTURY_HPP
#define STRUKTURY_HPP

class ElementListy;

class Lista {
    protected:
        int licznik;
        ElementListy *first;
        ElementListy *last;

    public:
        Lista();
        void pokaz() const;
        virtual std::string nazwaStr() const;
        bool is_empty() const;
        void append( const int );
        void insert( const int );
        void insertAfter( ElementListy * const, const int );
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

class Stos : public Lista {
    public:
        virtual std::string nazwaStr() const;
        void push( const int );
        int pop( );
};

class Kolejka : public Lista {
    public:
        virtual std::string nazwaStr() const;
        void enqueue( const int );
        int dequeue( );
};

class ElementDrzewa;

class Drzewo {
    private:
        ElementDrzewa *root;

    public:
        Drzewo();
        void insert( const int v );
        void drukuj();
        void drukujPoddrzewo( ElementDrzewa *st, int wciecie = 0 );

};

class ElementDrzewa {
    public:
        int wartosc;
        ElementDrzewa *left;
        ElementDrzewa *right;

        ElementDrzewa( const int );
        void insert( ElementDrzewa * );

        void drukuj();
        
};

#endif
