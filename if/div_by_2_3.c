// Check whether number is divisible by 2 and 3

#include<stdio.h>

void main()
{
 int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 2 == 0 && num % 3 == 0)
        printf("It is divisible by 2 and 3");
    else
        printf("It is not divisible by 2 and 3");
}
