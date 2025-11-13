#ifndef SCARPE_H
#define SCARPE_H

class Scarpe{

    private:
        int dimensione;
        int scretch[6];

    public:
        Scarpe();
        void setDimensione(int _dimensione);
        int getDimensione();
        void aprichiudi(int i);
        int getScretch(int i);

};

#endif