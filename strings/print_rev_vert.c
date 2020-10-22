// Print a string vertically in reverse order

#include <stdio.h>

void main()
{
  char st[30];
  int i;

      printf("Enter a string:");
      gets(st);

      for(i=0; st[i] != '\0'; i++)
               ;

      for(i--; i >= 0; i --)
          printf("%c\n", st[i]);

}
