/*Write a program to accept the radius of a circle
and calculate its area.*/

#include <stdio.h>
#define pi 3.14
int main()
{
	double radius,Area;
    printf("Enter Radius :");
    scanf("%lf",&radius);

    Area=pi*radius*radius;

    printf("Area=%.2f",Area);

    return 0;
}
