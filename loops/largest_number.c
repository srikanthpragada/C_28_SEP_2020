// Largest of 10 numbers

#include <stdio.h>

void main()
{
   int num, largest = 0, i;

       for(i=1; i <= 5; i ++)
       {
         printf("Enter a number :");
         scanf("%d",&num);

         if(num > largest)
            largest = num;
       }

       printf("Largest : %d", largest);
}
