#include<stdio.h>
int main()
{
    int num1,num2,num3;
    float avg;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    avg=(num1+num2+num3)/3;

    printf("Average=%.2f",avg);

    return 0;
}