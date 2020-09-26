#ifndef GRAFIKA_HPP
#define GRAFIKA_HPP

class Prostokat;

class Obrazek { 
    private:
        int w;
        int h;
        int *bitmap;
        Prostokat *prostokaty;
        int liczba_prostokatow;
        int max_prostokatow;
        void renderuj_prostokaty();

    public:
        Obrazek( int w, int h );
        void dodaj( const Prostokat &p );
        ~Obrazek();
        void render();

};

class Prostokat {
    public:
        int x;
        int y;
        int w;
        int h;
        int color;
        double opacity;

        Prostokat( int x=0, int y=0, int w=0, int h=0, int c=0, double o=1.0 );
        bool czy_punkt( int px, int py );

};

#endif
