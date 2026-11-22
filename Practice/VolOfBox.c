/*Write a program to accept the length, width, and
height of a box and calculate its volume.*/

#include <stdio.h>

int main()
{
    float length,breadth,height,Volume;

    printf("Enter the length of box :");
    scanf("%f",&length);

    printf("Enter the breadth of box :");
    scanf("%f",&breadth);

    printf("Enter the height of box :");
    scanf("%f",&height);

    Volume=length*breadth*height;

    printf("The Volume Of The Box Is %.2f",Volume);
    return 0;





}