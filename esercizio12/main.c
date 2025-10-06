#include <stdio.h>
#include <stdlib.h>

char * dimensionestringa(int dimensione);

int main(){

    int dimensione;
    char * stringa;

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d",&dimensione);

    stringa = dimensionestringa(dimensione);

    return 0;
}

char * dimensionestringa(int dimensione){
    char * ptr;
    ptr=(char*)malloc((dimensione+1)*sizeof(char));

    return ptr;
}