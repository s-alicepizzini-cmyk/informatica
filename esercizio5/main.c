#include <stdio.h>

int sommaArray(int *array, int dimensione);

int main(){

    int array[10]={1,1,1,1,1,1,1,1,1,1};
    printf("%d", sommaArray(&*array, 10));

    return 0;
}

int sommaArray(int *array, int dimensione){
    int somma=0, i;

    for(i=0;i<dimensione;i++){
        somma=somma+(*array);
    }

    return somma;
}