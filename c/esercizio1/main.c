#include <stdio.h>

int main(){

    float a=17.8;

    float *ptr = &a;

    printf("%f",*ptr);

    return 0;
}