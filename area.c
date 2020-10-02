// A program to find the area of the circle for a given radius

#include <stdio.h>

void main()
{
  float radius, area;

      printf("Enter radius of the circle:");
      scanf("%f",&radius);

      area = 3.14 * radius * radius;

      printf("The area of the circle for the radius %.2f is %.2f", radius , area);
}
