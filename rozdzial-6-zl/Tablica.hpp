class Tablica {
    public:
        Tablica( int );
        ~Tablica();
        void ustaw( int, int );
        int daj( int );
        void pokazsie( );
        void zmien_rozmiar( const int );
    private:
        int rozmiar;
        int *dane;

};
