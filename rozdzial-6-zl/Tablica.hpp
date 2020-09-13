class Tablica {
    public:
        static int licznik;
        Tablica( int );
        Tablica( const Tablica & );
        ~Tablica();
        void ustaw( int, int );
        int daj( int );
        void pokazsie( );
        void zmien_rozmiar( const int );
        int suma();
        int min();
        int max();
        Tablica& operator=( const Tablica &zrodlo );
        

    private:
        int rozmiar;
        int *dane;
        int id;

};
