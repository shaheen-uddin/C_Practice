#include <stdio.h>

int main(){
	int var =100;
	int *ptr = &var;
	int **pptr = &ptr; //pointer to pointer

	printf("Value of var: %d\n", var);
	printf("Value using ptr: %d\n", *ptr);
	printf("value using pptr: %d\n", **pptr);
	
	printf("**********************************\n");
	printf("Address of var: %p\n", (void *) &var);
	printf("value of ptr:%p\n", (void *) ptr);
	printf("Address of ptr:%p\n", (void *) &ptr);
	printf("value of pptr: %p\n", (void *) pptr);
	printf("Adrees of pptr: %p\n", (void *) &pptr);
	
	printf("**********************************\n");
	printf("Address of var: %p\n", (void *) &var);
	printf("Address of ptr:%p\n", (void *) &ptr);
	printf("Adrees of pptr: %p\n", (void *) &pptr);
	
	
	return 0;
}