#include <stdio.h>

int contalunghezza(const char *stringa);

int main(){

    printf("%d", contalunghezza("Ciao"));

    return 0;
}


int contalunghezza(const char *stringa){
    int len=0;

    while(*stringa!='\0'){
        len++;
        stringa++;
    }

    return len;
}