#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo{

    private:
        int base;
        int altezza;

    public:
        rettangolo();
        void setBase(int _Base);
        void setAltezza(int _Altezza);
        int getBase();
        int getAltezza();
        int Area();
        int Perimetro();
};

#endif