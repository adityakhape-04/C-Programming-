#include <stdio.h>
int main()
{
    int choice;
    float side,length,breadth;

    printf("1. For Area of Square\n");
    printf("2. For Area of Rectangle\n");
    printf("Enter Your Choice:\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("AREA OF SQUARE\n");
                printf("Enter length of Side of square :");
                scanf("%f",&side);
                printf("Area of Square = %.2f\n",side*side);

         case 2: printf("AREA OF Rectangle\n");
                printf("Enter length and breadth of rectangle :");
                scanf("%f%f",&length,&breadth);
                printf("Area of rectangle = %.2f\n",length*breadth);
    }

    return 0;
}