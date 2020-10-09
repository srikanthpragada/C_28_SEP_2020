// Print table for the given number

#include <stdio.h>

void main()
{
  int i,n;

     printf("Enter a number:");
     scanf("%d",&n);

     for(i=1; i <= 10; i ++)
     {
         printf("%3d * %3d = %5d\n",n,i, n*i);
     }


}
