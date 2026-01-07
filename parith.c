#include <stdio.h>


int main()
{
	int arr[][5] = 
	{
			{10, 20, 30, 40, 50},
			{20, 25, 30, 35, 40},
			{45, 50, 55, 60, 65}
	};
	printf("array address =%p\n, value = %d\n", arr, *arr);
	printf("****************************\n");
	int i = 0; 
	for(i; i < 3; i++)
	{
		printf("Row address = %p  and no = %d\n", arr+i, i);
		for(int j=0; j<5; j++) 
		{
			printf("Column element address = %p and element =%d\n", &arr[i][j], arr[i][j]);
		}
	}
	return 0;
}