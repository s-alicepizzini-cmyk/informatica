#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Tavoli{
    int posti;
    float altezza;
    float lunghezza;
    float larghezza;
};

int main(){

    struct Tavoli tavolo[4];
    int posti_tot=0;
    float superficie;
    float sup_media_persona;
    float sup_media_tot=0;
    int i;

    srand(time(NULL));
    for(i=0;i<4;i++){
        tavolo[i].posti = rand()%10+1;
        tavolo[i].altezza = rand()%200;
        tavolo[i].altezza = tavolo[i].altezza/100;
        tavolo[i].lunghezza = rand()%300;
        tavolo[i].lunghezza = tavolo[i].lunghezza/100;
        tavolo[i].larghezza = rand()%300; 
        tavolo[i].larghezza = tavolo[i].larghezza/100;
        posti_tot = posti_tot + tavolo[i].posti; 
        superficie = tavolo[i].lunghezza * tavolo[i].larghezza;
        sup_media_persona= superficie/tavolo[i].posti;
        printf("La superficie media a persona è di: %.2f \n", sup_media_persona);
        sup_media_tot = sup_media_tot + sup_media_persona; 
    }

    printf("Il numero totale i posti è: %d \n", posti_tot);
    printf("La suprficie media totale è di: %.2f \n", sup_media_tot);


    return 0;
}