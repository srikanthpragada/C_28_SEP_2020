#include <stdio.h>
void main()
{
    int i,num1, num2, end;

    num1 = 24;
    num2 = 30;

    // Go up to half of smallest of two numbers
    end = num1 < num2 ? num1/2 : num2/2;

    for(i=2;i <= end ;i++)
    {
       if(num1 % i == 0 && num2 % i == 0)
           printf("%d ",i);
    }

}
