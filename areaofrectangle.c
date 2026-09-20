#include<stdio.h>
int main()
{
    float Side1,Side2,Area;

    printf("Enter Side 1 : ");
    scanf("%f",&Side1);

    printf("Enter Side 2 : ");
    scanf("%f",Side2);

    Area=Side1*Side2;

    printf("Area=%.2f\n",Area);

    return 0;

}