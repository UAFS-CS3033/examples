#include <stdio.h>

void swap(int *a, int *b);

int main(){
	int a=20;
	int b=30;

	printf("A: %d  B: %d\n",a,b);
	swap(&a,&b);
	printf("A: %d  B: %d\n",a,b);

	return 0;
}

void swap(int *a, int *b){
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
