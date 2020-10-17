// Accept pin from user

#include <stdio.h>

void main()
{
 char ch;
 int i, valid = 1;

     printf("Enter your pin :");
     for(i=1; i <= 4; i ++)
     {
        ch = getch();
        putch('*');

        if(! isdigit(ch)) {
            valid = 0; // false
            break;
        }
     }

     if(valid)
        printf("\nValid!");
     else
        printf("\nInvalid");
}
