// Calculate net price

#include <stdio.h>

void main()
{
 float price, discount, net_price;

    printf("Enter price : ");
    scanf("%f", &price);

    discount = price * 15 / 100;
    net_price = price - discount;

    printf("Amount to be paid = %.2f",net_price);
}
