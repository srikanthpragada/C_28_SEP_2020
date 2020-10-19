#include <stdio.h>

void main()
{
   int a[] = {10,20,30,40,50};
   int t[5],i,j;

    // Copy elements from first array to second array in reverse order
    for(i=4, j = 0; i >= 0; i --, j ++)
    {
       t[j] = a[i];
    }

    // Copy elements from second array to first array
    for(i=0; i < 5; i++)
    {
       a[i] = t[i];
       printf("%5d",a[i]);
    }







}
