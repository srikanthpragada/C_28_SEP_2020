// Take a number and display its cube

#include <stdio.h>

void main()
{
   int num, cube; // Variables

      printf("Enter a number :");
      scanf("%d",&num);

      cube = num * num  * num;

      printf("Cube of %d is %d", num, cube);
}
