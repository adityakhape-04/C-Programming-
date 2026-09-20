#include<stdio.h>
int main()
{
    char Name[100],Address[200];
    int age,MobNumber;
    double Salary;

    printf("Enter Your Name : \n");
    scanf("%S",Name);
    printf("Name=%s \n",Name);

    printf("Enter Your Address : \n");
    scanf("%s",Address);
    printf("Address=%s\n",Address);

    printf("Enter Your Age : \n");
    scanf("%d",&age);
    printf("Age=%d\n",age);

    printf("Enter MobNumber : \n");
    scanf("%d",&MobNumber);
    printf("MobNumber=%d\n",MobNumber);

    printf("Enter Your Salary : \n");
    scanf("%1f",&Salary);
    printf("Salary=%f\n",Salary);

    return 0;


}