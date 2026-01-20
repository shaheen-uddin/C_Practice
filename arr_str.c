#include <stdio.h>

int main ()

{
  char *str = "Hello world from shaheen!";	
  int i= 0;
  while(*str)
  {
	  printf("index: %d, ASCII: %d,  char: %c\n", i, *str, *str);
	  str++;
	  i++;
  }
	
	printf("\n");
	
	
}