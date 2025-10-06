#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Libri{

    int codice;
    int pagine;
    float costo;

};

void selectionSort(struct Libri array[], int n){
    int i, j, min, tmp;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(array[j].costo<array[min].costo){
                min=j;
            }    
        }
    tmp=array[i].costo;
    array[i].costo=array[min].costo;
    array[min].costo=tmp;

    }
}

int main(){

   struct Libri array[3];
   int i;
   float costo_medio;

   srand(time(NULL));
   for(i=0;i<3;i++){
    array[i].codice= rand()%100+1;
    array[i].pagine= rand()%100+1;
    array[i].costo= rand()%20+1;
   }

   for(i=0;i<3;i++){
    costo_medio = array[i].costo / array[i].pagine;
    printf("Il costo per libro %d (n pagine %d, costo %.2f): %.4f \n", i+1, array[i].pagine, array[i].costo, costo_medio);
   }


   selectionSort(array, 3);
   for(i=0;i<3;i++){
    printf("Costo libro %d: %f\n", i, array[i].costo);
   }

    return 0;
}