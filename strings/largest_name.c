// Print largest of 5 names

#include <stdio.h>

void main()
{
  char names[5][30];  // 5 strings each of 30 chars
  char largest_name[30];
  int i;

     // strcpy(largest_name,"");
     largest_name[0] = '\0';    // Empty string

     for(i=0; i < 5; i ++) {
       printf("Enter a string:");
       gets(names[i]);

       if (stricmp(names[i], largest_name) > 0)
            strcpy(largest_name, names[i]);
     }

     printf("Largest name = %s", largest_name);
}
