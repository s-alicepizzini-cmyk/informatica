#include <stdio.h>

int main(){
	int a=10, i;
	int *ptr=&a;
	
	printf("%d \n", *ptr);

	(*ptr)++;

	printf("%d", *ptr);
	
	return 0;
}