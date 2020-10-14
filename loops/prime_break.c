// Display whether the given number is prime

#include <stdio.h>

void main()
{
  int num,i, prime = 1; // flag is set true

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num / 2; i ++)
     {
         if (num % i == 0)
         {
             prime = 0; // false
             break;
         }
     }

     if(prime)   // prime == 1
         printf("Prime number!");
     else
         printf("Not Prime number!");

}
