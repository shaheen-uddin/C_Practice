#include <stdio.h>

int main()
{
	int i, n, sum = 0;
	double average;
	
	printf("Enter number of elements:  ");
	scanf("%d", &n);
	
	int marks[n];
	
	
	for(i = 0; i < n; ++i)
	{
		printf("Enter number-%d: ", i + 1);
		scanf("%d", &marks[i]);
		
		//adding integers entered by the user to the sum variable
		sum += marks[i];
	}
	
	//explicitly convert the sum to double 
	//then canculate average
	average = (double) sum /n;
	
	printf("Average = %.2lf", average);
	return 0;
}