// Strong number

#include <stdio.h>

void main()
{
  int num = 145, org_num, i, digit, fact, sum = 0;

      org_num = num;
      while(num > 0)
      {
          digit = num % 10;

          // Find out factorial for digit
          fact = 1;
          for(i = 2; i <= digit; i ++)
               fact *= i;

          sum += fact;
          num /= 10;  // remove rightmost digit
      }

      if(sum == org_num)
         printf("Strong Number!");
      else
         printf("Not a Strong Number!");
}
