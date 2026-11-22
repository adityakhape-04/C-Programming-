/*Check Leap Year*/
#include <stdio.h>
int main()

{
    int Year;

    printf("Enter a Year :");
    scanf("%d",&Year);

    if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
    {
        printf("it is a leap year");
    }

    else 
    {
        printf("It is not a leap year");
    }

    return 0;
}