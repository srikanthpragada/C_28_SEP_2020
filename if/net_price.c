// Calculate net price by taking price

#include <stdio.h>

void main()
{
   int price, discount, netprice;

      printf("Enter price :");
      scanf("%d",&price);

      if(price >= 10000)
      {
         discount = price * 0.20;
      }
      else
      {
         discount = price * 0.10;
      }

      netprice = price - discount;
      printf("Net Price : %d", netprice);
}
