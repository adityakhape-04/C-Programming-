/*Write a program to accept two integers and
display their sum, difference, product, and
quotient.*/

#include <stdio.h>
int main()
{
    int a,b,sum,diff,prod;
    float quot;

    printf("Enter Two Numbers :");
    scanf("%d%d",&a,&b);

    //SUM
    sum=a+b;
    printf("Sum=%d\n",sum);

    //diff
    diff=a-b;
    printf("diff=%d\n",diff);

    //prod
    prod=a*b;
    printf("prod=%d\n",prod);

    //quot
    quot=a/b;
    printf("quot=%.2f\n",quot);

    return 0;
    
}