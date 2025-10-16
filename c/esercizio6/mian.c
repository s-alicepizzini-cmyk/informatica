#include <stdio.h>

void raddoppiaElementiArray(int *array, int dimensione);

int main(){

    int i;
    int array[10]={1,2,4,2,34,4,2,2,9,7};

    raddoppiaElementiArray(&*array, 10);

    for(i=0;i<10;i++){
        printf("%d \n", array[i]);
    }

    return 0;
}

void raddoppiaElementiArray(int *array, int dimensione){
    int i;

    for(i=0;i<dimensione;i++){
        (*array)=(*array)*2;
        array++;
    }

} 