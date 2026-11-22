/*Write a program to accept the price and quantity
of a product and calculate the total bill.*/

#include <stdio.h>
int main()
{
    int quantity;
    float price,TotalBill;

    printf("Enter the no. of items :");
    scanf("%d",&quantity);

    printf("Enter the price of item :");
    scanf("%f",&price);

    TotalBill=quantity*price;
    printf("FinalBill=%.2f",TotalBill);

    return 0;
}