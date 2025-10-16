#include <stdio.h>
#include <stdlib.h>

int **matriceCreator(int n, int m);

int main(){
    int n,m;

    printf("Inserisci il numero di righe: ");
    scanf("%d", &n);
    printf("Inserisci il numero di colonne: ");
    scanf("%d", &m);

    int **ptr;

    ptr=matriceCreator(n,m);

    return 0;
}

int **matriceCreator(int n, int m){
    int **ptr, i;
    ptr=(int**)malloc(n * sizeof(int*));
    for(i=0;i<n;i++){
        ptr[i]=(int*)malloc(m * sizeof(int));
    }

    return ptr;
}