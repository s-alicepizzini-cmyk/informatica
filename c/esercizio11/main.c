#include <stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    int n;

    printf("inserisci la dimensione dell'array: ");
    scanf("%d",&n);

    ptr=(float*)malloc(n*sizeof(float));

    return 0;
}