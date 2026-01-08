#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int* showAve(int num[], int size);


int main()
{
	int values[SIZE];
	int* info;

	printf("Enter 5 elements: \n");
	for(int i=0; i<SIZE; ++i)
	{
		//printf("Enter %d number: ", i+1);
		scanf("%d\n", values + i);
	}

   printf("================Array data Info=====================\n");
   for(int i=0; i<SIZE; i++)
   {
   	printf("%d element value = %d and address = %p\n", i, *(values +i), values + i);
   }

   info = showAve(values, SIZE);
   if(info != NULL)
   {
   	printf("The sum = %d and average =%d\n", info[0], info[1]);
   }

   free(info);
}

int* showAve(int num[], int size)
{
	//allocate memory for two interger on the HEAP
	int* data = (int*) malloc(2 * sizeof(int));
	//safty check: ensure memory was actually allocated

	if(data == NULL) return NULL;
	int sum = 0;
	for(int i=0; i<size; i++)
	{
		sum += *(num+i);
	}
	data[0] = sum;
	data[1] = sum / size;

	return data;
}