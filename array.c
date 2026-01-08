#include <stdio.h>

#define SIZE 5

//int sum(int num[]);
int *showAve(int num[], int size);

int main()
{
    int values[SIZE];
    int *info;

    printf("Enter 5 elements: ");
    //taking input and storing in a array
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", values + i);
    }

    printf("Displaying integers: ");
    //printing elements of the array

    for(int i = 0; i < 5; i++)
    {
        printf("Element index: %d, element value %d and address %p\n", i + 1, *(values + i), values + i);
    }
    printf("**************Average and Sum***********************\n");
    info = showAve(values, SIZE);

    
    
        printf("The sum : %d and average : %d\n", *info, *(info + 1));
    

    return 0;
}



int *showAve(int num[], int size)
{
    int sum = 0;
    static int data[2];

    for(int i = 0; i <  5; i++)
    {
        sum += *(num + i);
    }

   
    data[0] = sum;
    data[1] = sum / size;
    return data;
}

/*int sum(int num[])
{
    int sum = 0;
    for(int i = 0; i < (int) sizeof(num) / sizeof(int); i++)
    {
        sum += num[i];
    }
    return sum;
}*/
