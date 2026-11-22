/*Check Voting Eligibility*/
#include <stdio.h>
int main()
{
    int age;

    printf("Enter your age :");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("Your are eligible for voting");
    }
    else
    {
        printf("You r not eligible for voting");
    }
    
    return 0;
}