//Accept two numbers and display the relationship between numbers

#include <stdio.h>

void main()
{
   int a,b;

   printf("Enter two numbers :");
   scanf("%d%d",&a,&b);

   if(a == b)
     printf("Equal");
   else
     if(a > b)
        printf("First is bigger");
     else
        printf("Second is bigger");

} // main()
