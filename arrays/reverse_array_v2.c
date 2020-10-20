#include <stdio.h>

void main()
{
   int a[] = {10,20,30,40,50};
   int i,j, temp;

    // Copy elements from first array to second array in reverse order
    for(i=0, j = 4; i < j; i ++, j --)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    // Copy elements from second array to first array
    for(i=0; i < 5; i++)
    {
       printf("%5d",a[i]);
    }

}
