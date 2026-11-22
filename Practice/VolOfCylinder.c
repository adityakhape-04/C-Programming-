/*Write a program to accept the radius and height Of
a cylinder and calculate its volume.*/

#include <stdio.h>
# define pi 3.14

int main()
{
    float radius,height,volume;

    printf("Enter The Radius :");
    scanf("%f",&radius);

    printf("Enter The Height :");
    scanf("%f",&height);

    volume=pi*radius*radius*height;

    printf("Volume=%.2f",volume);

    return 0;



}