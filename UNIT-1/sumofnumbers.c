#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;

    printf("ENTER THE 1ST NUMBER: \n");
    scanf("%d",&num1);

    printf("ENTER THE 2nd NUMBER: \n");
    scanf("%d",&num2);

    printf("ENTER THE 3rd NUMBER: \n");
    scanf("%d",&num3);

    sum=num1+num2+num3;

    printf("Sum=%d\n",sum);
    
    return 0;
}