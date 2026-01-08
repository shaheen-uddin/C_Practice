#include <stdio.h>

int main()
{
    /*
    int x[4];
    int i;

    for(i = 0; i < 4; ++i)
    {
        printf("&x[%d] = %p\n", i, &x[i]);


    }
     printf("Address of array x: %p", x);
    */
  /*  int i, x[6], sum = 0;
    printf("Enter 6 numbers: ");

    for(i = 0; i < 6; ++i)
    {
        //equivalent to scanf("%d", &x[i]);
        scanf("%d", x+1);
        //equivalent to sum +=x[i];
         sum += *(x+1);
    }
    printf("Sum = %d", sum);
  */
int x[5] = {1, 2, 3, 4, 5};
int* ptr;
//ptr is assigned the address of the third element
ptr = &x[2];

printf("*ptr = %d \n", *ptr); //3;
printf("*(ptr+1) =%d \n", *(ptr + 1)); //4
printf("*(ptr -1 = %d)", *(ptr -1)); //2

printf("***********************************\n");


printf("*ptr = %d \n", *x[2]); //3;
printf("*(ptr+1) =%d \n", *(ptr + 1)); //4
printf("*(ptr -1 = %d)", *(ptr -1)); //2
    return 0;
}
