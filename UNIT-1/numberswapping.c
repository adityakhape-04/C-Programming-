#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("ENTER TWO NUMBERS : ");
    scanf("%d %d",&a,&b);

    printf("BEFORE SWAPPING : a=%d,b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("AFTER SWAPPING : a=%d,b=%d\n",a,b);

    return 0;


}