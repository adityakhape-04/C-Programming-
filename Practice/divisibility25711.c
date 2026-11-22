/*Check Divisibility by 3,5,7,11
Check Student Result either Pass*/

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d",&num);

    if (num % 3 == 0)
    {
        printf("divisible by 3\n");
    }

    if (num % 5 == 0)
    {
        printf("divisible by 5\n");
    }

    if (num % 7 == 0)
    {
        printf("divisible by 7\n");
    }

    if (num % 11 == 0)
    {
        printf("divisible by 11\n");
    }

    else 
    {
        printf("Number is not divisible by any of the above");
    }

    return 0;
}