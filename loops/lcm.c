// Display whether the given number is prime

#include <stdio.h>

void main()
{
  int num1,num2,n, largest;

     printf("Enter two numbers :");
     scanf("%d%d",&num1,&num2);

     largest = num1 > num2 ? num1 : num2;

     if (largest % num1 == 0 && largest % num2 == 0)
         printf("LCM = %d", largest);
     else
     {
       for(n = largest * 2;   ; n++)
       {
           if(n % num1 == 0 && n % num2 == 0) {
               printf("LCM = %d", n);
               break;
           }
       }
     }




}
