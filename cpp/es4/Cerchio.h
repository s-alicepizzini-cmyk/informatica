#ifndef CERCHIO_H
#define CERCHIO_H

class Cerchio{

    private:
        int raggio;

    public:
        Cerchio();
        void setRaggio(int _Raggio);
        int getRaggio();
        float circonferenza();
        float area();
};

#endif