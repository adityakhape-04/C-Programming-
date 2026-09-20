#include <stdio.h>

int main()
{
    char Name[100], Branch[100], Division[100], College[100], Mobile_Number[15];
    float Marks;

    printf("Enter Your Name : ");
    scanf("%s", Name);

    printf("Enter Your Mobile Number : ");
    scanf("%s", Mobile_Number);

    printf("Enter Your Branch : ");
    scanf("%s", Branch);

    printf("Enter Your Division : ");
    scanf("%s", Division);

    printf("Enter College Name : ");
    scanf("%s", College);

    printf("Enter Your Marks : ");
    scanf("%f", &Marks);

    return 0;
}