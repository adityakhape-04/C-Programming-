/*Write a program to accept a student's name, roll
number, and branch, then display the details.*/
#include <stdio.h>
int main()
{
    char Name[100],Branch[100];
    int RollNo;

    printf("Enter Your Name :\n");
    scanf("%s",Name);
    printf("Name=%s\n",Name);

    printf("Enter Your Branch :\n");
    scanf("%s",Branch);
    printf("Branch=%s\n",Branch);

    printf("Enter Your RollNo :\n");
    scanf("%d",&RollNo);
    printf("RollNO=%d\n",RollNo);

    return 0;
}