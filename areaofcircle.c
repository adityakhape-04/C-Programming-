#include<stdio.h>
#define pi 3.14
int main()
{
    int radius;

    printf("Enter RADIUS : ");
    scanf("%d",&radius);

    float Area;

    Area=pi*radius*radius;
    printf("%.2f",Area);

    return 0;

}