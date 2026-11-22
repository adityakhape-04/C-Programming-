/*Check person is Adult or Minor*/
#include <stdio.h>
int main()
{
    int age;

    printf("Enter Your Age :");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("You r n adult\n");
    }
    else 
    {
        printf("You r a minor");
    }

    return 0;

}