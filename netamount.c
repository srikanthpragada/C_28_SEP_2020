// Calculate net amount given price and qty

#include <stdio.h>

void main()
{
 float price, qty, amount, tax, net_amount;

    printf("Enter price : ");
    scanf("%f", &price);

    printf("Enter qty   : ");
    scanf("%f", &qty);

    amount = qty * price;
    tax = amount * 12.5 / 100;
    net_amount = amount + tax;

    printf("Amount     : %8.2f\n",amount);
    printf(" + Tax     : %8.2f\n",tax);
    printf("             --------\n");
    printf("Net Amount : %8.2f\n",net_amount);
}
