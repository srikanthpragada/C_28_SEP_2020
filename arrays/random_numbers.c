// Take an array and fill it with 10 random numbers

#include <stdio.h>

void main()
{
  int a[10],i;

      srand(time(0));   // Initialize seed

      for(i=0; i < 10; i ++)
      {
          a[i] = rand()  % 100;
          // printf("%d\n", a[i]);
      }

      for(i=0; i < 10; i ++)
      {
        if(a[i] % 2 == 0)
            printf("%d\n", a[i]) ;
      }


      for(i=0; i < 10; i ++)
      {
        if(a[i] % 2 != 0)
            printf("%d\n", a[i]) ;
      }
}
