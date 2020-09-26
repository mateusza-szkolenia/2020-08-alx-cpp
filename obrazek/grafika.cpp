#include <iostream>

#include "grafika.hpp"

Obrazek::Obrazek( int w, int h ){
    this->w = w;
    this->h = h;
    this->bitmap = new int[w*h];
    this->liczba_prostokatow = 0;
    this->max_prostokatow = 16;

    for ( auto y = 0; y < this->h; y++ ){
        for ( auto x = 0; x < this->w; x++ ){
            int indeks;
            indeks = y * w + x;
            this->bitmap[ indeks ] = 0xffffff;
        }
    }

    this->prostokaty = new Prostokat[ this->max_prostokatow ];      
}

Obrazek::~Obrazek(){
    delete [] this->bitmap;
    delete [] this->prostokaty;
}

void Obrazek::render(){
    this->renderuj_prostokaty();

    std::cout << "P3" << std::endl;
    std::cout << this->w << " " << this->h << std::endl;
    std::cout << 255 << std::endl;
    for ( auto y = 0; y < this->h; y++ ){
        for ( auto x = 0; x < this->w; x++ ){
            int r,g,b;
            int indeks;
            indeks = y * w + x;
            b = ( this->bitmap[ indeks ] & 0x0000ff ) >> 0;
            g = ( this->bitmap[ indeks ] & 0x00ff00 ) >> 8;
            r = ( this->bitmap[ indeks ] & 0xff0000 ) >> 16;
            std::cout << r << " " << g << " " << b << std::endl;
        }
    }
}

void Obrazek::dodaj( const Prostokat &p ){
    this->prostokaty[ this->liczba_prostokatow ] = p;
    this->liczba_prostokatow++;
}

void Obrazek::renderuj_prostokaty(){
    for ( auto y = 0; y < this->h; y++ ){
        for ( auto x = 0; x < this->w; x++ ){
            int indeks;
            indeks = y * w + x;
            double ro,go,bo;
            bo = ( this->bitmap[ indeks ] & 0x0000ff ) >> 0;
            go = ( this->bitmap[ indeks ] & 0x00ff00 ) >> 8;
            ro = ( this->bitmap[ indeks ] & 0xff0000 ) >> 16;

            for ( auto i = 0; i < this->liczba_prostokatow ; i++ ){          
                if ( this->prostokaty[i].czy_punkt( x, y ) ){
                    double rp,gp,bp;
                    bp = ( this->prostokaty[i].color & 0x0000ff ) >> 0;
                    gp = ( this->prostokaty[i].color & 0x00ff00 ) >> 8;
                    rp = ( this->prostokaty[i].color & 0xff0000 ) >> 16;

                    ro = (1.0 - this->prostokaty[i].opacity ) * ro + this->prostokaty[i].opacity * rp;
                    go = (1.0 - this->prostokaty[i].opacity ) * go + this->prostokaty[i].opacity * gp;
                    bo = (1.0 - this->prostokaty[i].opacity ) * bo + this->prostokaty[i].opacity * bp;
                    //this->bitmap[ indeks ] = this->prostokaty[i].color;
                    //break;
                }
            }
            int r,g,b;
            r = ro;
            g = go;
            b = bo;

            this->bitmap[ indeks ] = ( r << 16 ) | ( g << 8 ) | ( b << 0 );
            
        }
    }
    return;

    /* METODA NIEWYDAJNA */
    
    for ( auto i = 0; i < this->liczba_prostokatow; i++ ){
        //std::cout << "Prostokat #" << i << " " << this->prostokaty[i].h << std::endl;
        for ( auto y = this->prostokaty[i].y; y < this->prostokaty[i].y + this->prostokaty[i].h; y++ ){
            //std::cout << "Linia #" << y << std::endl;
            for ( auto x = this->prostokaty[i].x; x < this->prostokaty[i].x + this->prostokaty[i].w; x++ ){
                auto indeks = y * this->w + x;
                this->bitmap[ indeks ] = this->prostokaty[i].color;
            }
        }
    }
    
}

Prostokat::Prostokat( int x, int y, int w, int h, int c, double o ){
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    this->color = c;
    this->opacity = o;
}

bool Prostokat::czy_punkt( int px, int py){
    return ( px >= this->x ) && ( px <= (this->w + this->x) ) &&
    ( py >= this->y ) && ( py <= (this->h + this->y) );

}