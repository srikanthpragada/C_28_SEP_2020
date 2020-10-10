// Display even numbers between two numbers

#include <stdio.h>

void main()
{
  int start,end, i;

     printf("Enter start and end values :");
     scanf("%d%d",&start,&end);

     if(start % 2 == 1) // odd number
         start ++;

     for(i = start; i <= end; i += 2)
         printf("%d ",i);
}
