#include<stdio.h>
int main()

{
    int choice;
    float a,b;

    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter Your Choice :\n");
    scanf("%d",&choice);

    printf("Enter Two Numbers");
    scanf("%f%f",&a,&b);

    switch(choice)
   {
     case 1:
            printf("Result = %.2f\n", a + b);
            break;
     case 2:
            printf("Result = %.2f\n", a - b);
            break;
     case 3:
            printf("Result = %.2f\n", a * b);
            break;
     case 4:
            printf("Result = %.2f\n",a/b);
            break;
     default:
            printf("Invalid choice\n");
    }
 
return 0;


}