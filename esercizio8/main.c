#include <stdio.h>

void modificaVariabile(int *variabile);

int main(){
    int a=10;
    
    printf("%d\n",a);
    modificaVariabile(&a);
    printf("%d",a);

    return 0;
}

void modificaVariabile(int *variabile){
    *variabile=42;
}