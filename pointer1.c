#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int val=5;
	int *ptr;
	ptr=&val;
	int numbers[5]={10,20,30,40,50};
	int *aptr;
	aptr=numbers;
	int index;

	for(index=0;index<5;index++){
		printf("[%d]:%p : %d\n",index,&numbers[index],numbers[index]);
	}

	for(index=0;index<5;index++){
		printf("[%d]:%p : %d\n",index,(aptr+index),*(aptr+index));
	}

	printf("&val: %p val: %d\n",&val,val);
	printf("&ptr: %p ptr: %p  *ptr: %d\n",&ptr,ptr,*ptr);

	return 0;
}
