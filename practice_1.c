#include <stdio.h>

#define SIZE 5

int add_ends(int* arr, int array_size)
{
 	return *arr + *(arr + array_size -1);
}

int main()
{
	
	int arr[SIZE] = {10, 20, 30, 40, 50};
	
	printf("array value: %d\n", *arr);
	int sum = add_ends(arr, SIZE);
	printf("The sum is : %d", sum);
	
return 0;	
}