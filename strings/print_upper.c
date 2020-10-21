// Print only uppercase letters

#include <stdio.h>

void main()
{
  char st[30];
  int i;

      printf("Enter a string:");
      gets(st);

      for(i=0; st[i] ; i++)   // st[i] != '\0' or st[i] != 0
        if (isupper(st[i]))
            putch(st[i]);

}
