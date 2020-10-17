// Take a char and display whether it is uppercase or lowercase

#include <stdio.h>

void main()
{
 char ch;

     printf("Enter a char :");
     ch = getchar();

     if(ch >= 97 && ch <= 122)
         ch -= 32;

     putch(ch);
}
