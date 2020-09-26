class Stos {
    private:
        int *dane;
        int max;
        int rozm;

    public:
        Stos();
        ~Stos();

        int pop();
        void push(const int);
        bool empty() const;

};