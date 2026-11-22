/*Check number is Zero or non-zero*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    if (num == 0)
    {
        printf("Number is Zero");
    }
    else 
    {
        printf("Number is nonzero");
    }

    return 0;
}