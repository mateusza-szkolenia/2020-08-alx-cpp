#include <iostream>

template <typename T>
class ElementDrzewa;

template <typename T>
class Drzewo {
    private:
        ElementDrzewa<T> *root;
    public:
        Drzewo();
        void insert( const T v );
        void drukuj();
        void drukujPoddrzewo( ElementDrzewa<T> *st, int wciecie = 0 );
};

template <typename T>
class ElementDrzewa {
    public:
        T wartosc;
        ElementDrzewa *left;
        ElementDrzewa *right;

        ElementDrzewa( const T );
        void insert( ElementDrzewa<T> * );

        void drukuj();
};

template <typename T>
Drzewo<T>::Drzewo() :
    root( nullptr )
{

}

template <typename T>
void Drzewo<T>::insert( const T v ){

    auto nowy = new ElementDrzewa<T>( v );

    if ( this->root == nullptr ){
        this->root = nowy;
    }
    else {
        this->root->insert( nowy );
    }
}

template <typename T>
void ElementDrzewa<T>::insert( ElementDrzewa<T> *i ){
    if ( i->wartosc < this->wartosc ){
        // wsadzamy go po lewej str
        if ( this->left == nullptr ){
            this->left = i;
        }
        else {
            this->left->insert( i );
        }
    }
    else {
        // wsadzamy go po prawej str
        if ( this->right == nullptr ){
            this->right = i;
        }
        else {
            this->right->insert( i );
        }
    }

}

template <typename T>
ElementDrzewa<T>::ElementDrzewa( const T v ):
    wartosc( v ),
    left( nullptr ),
    right( nullptr )
{

}

template <typename T>
void ElementDrzewa<T>::drukuj(){
    std::cout << "[" << this->wartosc << "] "
        << "<L: " << this->left << " R: " << this->right << ">"; 
}

template <typename T>
void Drzewo<T>::drukuj(){
    std::cout << "Drzewo: " << this
        << " <korzen: " << this->root << ">"
        << std::endl;
    if ( this->root != nullptr ){
        drukujPoddrzewo( this->root );
    }
}

template <typename T>
void Drzewo<T>::drukujPoddrzewo( ElementDrzewa<T> *st, int wciecie ){
    if ( st->right != nullptr ){
        drukujPoddrzewo( st->right, wciecie + 1 );
    }

    for ( auto i = 0; i < wciecie; i++ ){
        std::cout << "    ";
    }
    st->drukuj();
    std::cout << std::endl;

    if ( st->left != nullptr ){
        drukujPoddrzewo( st->left, wciecie + 1 );
    }

}
