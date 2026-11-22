/*Write a program to accept the side of a square and
calculate its area.*/

#include <stdio.h>
int main()
{
    float side,Area;
    printf("Enter The Length Of Side :");
    scanf("%f",&side);

    Area=side*side;
    printf("Area=%.2f",Area);

    return 0;
}