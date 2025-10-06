#include <stdio.h>

void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media);

int main(){

    int array[10]={1,1,1,1,1,1,1,1,1,1};
    int n=10, somma=0;
    float media=0.0f;

    calcolaSommaEMedia(array, n, &somma, &media);

    printf("La somma è: %d\n", somma);
    printf("la media è: %f", media);



    return 0;
}

void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media){
    int i;
    for(i=0;i<dimensione;i++){
        *somma=*somma+(*array);
        array++;

    }

    *media= *somma / dimensione;
}