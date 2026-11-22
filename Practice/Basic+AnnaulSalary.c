/*Write a program to accept the basic salary and
calculate the annual salary.*/
#include <stdio.h>
int main()
{
    double salary,AnnualSal;

    printf("Enter Your Basic Salary :");
    scanf("%lf",&salary);

    AnnualSal=12*salary;
    printf("AnnualSalary=%.3f",AnnualSal);

    return 0;
}