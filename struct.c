#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct user{
	int id;
	char lname[SIZE];
	char fname[SIZE];
};

//** Function Prototypes **
void printUserByValue(struct user user1);
void printUserByRef(struct user *user1);

int main(int argc, char *argv[]){
	struct user user1;

	user1.id=1;
	strcpy(user1.lname,"Smith");
	strcpy(user1.fname,"Joe");

	printUserByValue(user1);  //Pass user1 by value
	printUserByRef(&user1);	  //Pass user1 by reference

	return 0;
}

void printUserByValue(struct user user1){
	printf("Access Struct by value\n");
	printf("id:    %d\n",user1.id);
	printf("Last:  %s\n",user1.lname);
	printf("First: %s\n",user1.fname);
}

void printUserByRef(struct user *user1){
	printf("Access Struct by reference\n");
	printf("id:    %d\n",user1->id);
	printf("Last:  %s\n",user1->lname);
	printf("First: %s\n",user1->fname);
}

