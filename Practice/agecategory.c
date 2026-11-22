/*Check Age Category - child, teenager, or adult*/
#include <stdio.h>
int main()
{
    int age;

    printf("Enter Your Age :");
    scanf("%d",&age);

    if (age < 13)
    {
        printf("You r a child");
    }

    else if (age <= 19)
    
    {
        printf("You r a teen");
    }

    else
    
    {
        printf("You r an adult");
    }

    return 0;
    
}