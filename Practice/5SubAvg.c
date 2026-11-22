/*Write a program to accept five subject marks and
calculate the total marks and average.*/

#include <stdio.h>
int main()
{
    int eng, math, science, sst, it;
    float average;

    printf("Enter The Marks Of Five Subjects :");
    scanf("%d%d%d%d%d",&eng,&math,&science,&sst,&it);

    average= (eng+math+science+sst+it)/5;
    printf("average=%.2f",average);

    return 0;
}