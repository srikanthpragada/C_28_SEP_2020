// Print numbers from 1 to given number

#include <stdio.h>

void main()
{
  int i,n;

     printf("Enter a number:");
     scanf("%d",&n);

     for(i=1; i <= n; i ++)
     {
         printf("%5d",i);
     }


}
