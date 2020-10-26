#include <stdio.h>

// Function declaration - Prototype declaration
float average(int,int);

void main()
{
  float avg;

      avg = average(10,20);
      printf("Abc");
}


// Definition
float average(int n1, int n2)
{
   return  (n1 + n2) / 2.0;
}
