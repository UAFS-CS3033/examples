#include <stdio.h>

void swap(long int *a, long int *b);

int main(){
	long int a=20;
	long int b=30;

	printf("A: %ld  B: %ld\n",a,b);
	swap(&a,&b);
	printf("A: %ld  B: %ld\n",a,b);

	return 0;
}

void swap(long int *a, long int *b){
	long int c;

	c = *b;
	*b = *a;
	*a = c;
}
