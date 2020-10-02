// Calculate net price

#include <stdio.h>

void main()
{
 float price, discount, netprice;

    printf("Enter price : ");
    scanf("%f", &price);

    discount = price * 15 / 100;
    netprice = price - discount;

    printf("Amount to be paid = %.2f",netprice);
}
