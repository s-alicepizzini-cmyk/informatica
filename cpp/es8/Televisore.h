#ifndef TELEVISORE_H
#define TELEVISORE_H


class Televisore{

    private:
        bool stato;
        int volume;
        int canale;
        bool modalità;

    public:
        Televisore();
        void pulsanterosso();
        void canaleSuccessivo();
        void canalePrecedente();
        void aumentaVolume();
        void abbassaVolume();
        void impostaCanale(int c); 
        void pulsanteSilenzioso();
        void print();

}


#endif