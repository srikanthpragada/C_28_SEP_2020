// Take 10 chars and display no. of alphas, digits and others

#include <stdio.h>

void main()
{
 char ch;
 int i, alphas, digits, others;

     alphas = digits = others = 0;

     printf("Enter 10 chars :");
     for(i=1; i <= 10; i ++)
     {
        ch = getche();

        if(isalpha(ch))
               alphas ++;
        else
            if(isdigit(ch))
               digits ++;
            else
               others ++;
     }

     printf("\n%d alphas, %d digits, %d others", alphas,digits,others);
}
