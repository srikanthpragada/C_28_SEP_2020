// Perfect number
#include <stdio.h>

void main()
{
   int num, sum = 1, i;

       printf("Enter a number :");
       scanf("%d",&num);

       for(i=2; i <= num/2; i ++)
       {
          if (num % i == 0)
              sum += i;
       }

       if( sum == num )
          printf("Perfect Number!");
       else
          printf("Not a Perfect Number!");
}
