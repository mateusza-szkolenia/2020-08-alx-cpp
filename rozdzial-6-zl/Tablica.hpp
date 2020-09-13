class Tablica {
    public:
        Tablica( int );
        ~Tablica();
        void ustaw( int, int );
        int daj( int );
        void pokazsie( );
    private:
        int rozmiar;
        int *dane;

};
