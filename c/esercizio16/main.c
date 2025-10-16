#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Casa{
    int metri;
    char classe;
    float costo;
    float costo_mq;
};

void selectionSort(struct Casa home[], int n){
    int i, j, min, tmp;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(home[j].costo_mq<home[min].costo_mq){
                min=j;
            }    
        }
    tmp=home[i].costo_mq;
    home[i].costo_mq=home[min].costo_mq;
    home[min].costo_mq=tmp;

    }
}

int migliorclasse(struct Casa a, struct Casa b){
    if(a.classe<b.classe){
        return 1;
    }
    if(a.classe>=b.classe){
        return 0;
    }
    return a.metri>=b.metri;
}

int main(){

    int i;
    struct Casa home[3];

    for(i=0;i<3;i++){
        printf("Inserisci i metri quadri della casa numero %d: ", i+1);
        scanf("%d", &home[i].metri);
        printf("Inserisci la classe energetica della casa: ");
        scanf(" %c", &home[i].classe);
        printf("Inserisci il costo della casa: ");
        scanf("%f", &home[i].costo);
        home[i].costo_mq = home[i].costo/home[i].metri;
    }

    selectionSort(home,3);
    printf("Il minor prezzo a metro quado è: %.2f \n", home[0].costo_mq);

    int x=0;
    for(i=1;i<3;i++){
        if(migliorclasse(home[i], home[x])){
            x=i;
        }
    }

    printf("La classe con la miglior classe energetica è: %d, mq: %d", x+1, home[x].metri);


    return 0;
}