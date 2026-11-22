/*Write a program to accept two float numbers and
display their sum, difference, product, and
quotient.*/

#include <stdio.h>
int main()
{
    float a,b,sum,diff,prod,quot;

    printf("Enter Two Numbers :");
    scanf("%f%f",&a,&b);

    //sum
    sum=a+b;
    printf("sum=%.2f\n",sum);

    //diff
    diff=a-b;
    printf("diff=%.2f\n",diff);

    //prod
    prod=a*b;
    printf("prod=%.2f\n",prod);

    //quot
    quot=a/b;
    printf("quot=%.2f\n",quot);

    return 0;
}