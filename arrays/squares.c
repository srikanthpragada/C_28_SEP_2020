// Take 5 numbers and display their squares

#include <stdio.h>

void main()
{
  int a[5],i;

      for(i=0; i < 5; i ++)
      {
         printf("Enter a number :");
         scanf("%d",&a[i]);
      }

      printf("\nSquares\n");

      for(i=0; i < 5; i ++)
         printf("\n%d", a[i] * a[i]);
}
