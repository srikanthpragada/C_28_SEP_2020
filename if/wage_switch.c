// Take week and no. of hours and display wage

#include <stdio.h>

void main()
{
  int week, hours, rate, wage;

      printf("Enter week [1-6] and no. of hours :");
      scanf("%d%d",&week, &hours);

      switch(week)
      {
         case 1 :
         case 3 : rate = 200; break;
         case 2 :
         case 4 : rate = 250; break;
         case 5 : rate = 300; break;
         default: rate = 400;
      }

      wage = rate * hours;
      if (wage > 1500)
          wage = wage * 1.1;  // add 10% bonus

      printf("Wage = %d", wage);
}
