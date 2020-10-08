// Display grade based on marks in two subjects

#include <stdio.h>

void main()
{
  int m1, m2;

    printf("Enter marks in two subjects :");
    scanf("%d%d",&m1,&m2);

    if(m1 > 80)
      if(m2 > 80)
         printf("A");
      else
         printf("B");
    else
       if (m2 > 80)
           printf("C");
       else
           printf("D");
}
