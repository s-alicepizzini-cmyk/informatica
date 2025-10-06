#include <stdio.h>

void stampaArray(int *array, int dimensione);

int main(){

    int array[10]={1,2,3,4,5,6,7,8,9,10};
    
    stampaArray(array,10);

    return 0;
}

void stampaArray(int *array, int dimensione){
    int i;

    for(i=0;i<dimensione;i++){
        printf("%d \n", array[i]);
    }
}