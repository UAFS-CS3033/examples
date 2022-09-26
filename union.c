#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

union block{
	long int ivalue;
	char array[SIZE];
	char *ptr;
};

int main(int argc, char *argv[]){
	union block b1;
	int index;

	for(index=0;index<SIZE;index++){
		b1.array[index]=index+65;
	}

	printf("Size: %ld\n",sizeof(b1));
	printf("ivalue: %p : %d\n",b1.ivalue,b1.ivalue);
	for(index=0;index<SIZE;index++){
		printf("%p:%c  ",b1.array[index],b1.array[index]);
	}
	printf("\n");
	printf("ptr:    %p\n",b1.ptr);


	return 0;
}
