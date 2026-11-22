/*Write a program to accept the length and breadth
of a rectangle and calculate its area.*/

#include <stdio.h>
int main()
{
    float length,breadth,Area;

    printf("Enter The Length :\n");
    scanf("%f",&length);

    printf("Enter The Breadth :\n");
    scanf("%f",&breadth);

    Area=length*breadth;

    printf("Area=%.2f",Area);

    return 0;
}