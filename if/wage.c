// Take week and no. of hours and display wage

#include <stdio.h>

void main()
{
  int week, hours, rate, wage;

      printf("Enter week [1-6] and no. of hours :");
      scanf("%d%d",&week, &hours);

      if (week == 1 || week == 3)
         rate = 200;
      else
        if(week == 2 || week == 4)
            rate = 250;
        else
           if(week == 5)
              rate = 300;
           else
              rate = 400;


      wage = rate * hours;
      if (wage > 1500)
          wage = wage * 1.1;  // add 10% bonus

      printf("Wage = %d", wage);
}
