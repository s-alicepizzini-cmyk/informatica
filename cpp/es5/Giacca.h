#ifndef GIACCA_H
#define GIACCA_H


class Giacca{

    private:
        int taglia;
        int percentuale;

    public:
        Giacca();
        void setTaglia(int _taglia);
        void setPercentuale(int _percentuale);
        int getTaglia();
        int getPercentuale();
        void apri_completo();
        void chiudi_completo();
        int apri(int _percentuale);
        int chiudi(int _percentuale);
        void if_chiuso();

};




#endif