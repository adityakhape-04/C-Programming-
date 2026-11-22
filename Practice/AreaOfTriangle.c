/*Write a program to accept the base and height of a
triangle and calculate its area of triangle.*/

#include<stdio.h>
int main()
{
    float base,height,Area;
    printf("Enter The Height Of Triangle:");
    scanf("%f",&height);
    printf("Enter The Baselength Of Triangle:");
    scanf("%f",&base);

    Area=0.5*base*height;
    printf("Area=%.2f",Area);

    return 0;
}