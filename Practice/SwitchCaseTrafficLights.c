#include <stdio.h>
int main()
{
    int n;
    printf("Enter 1 for green, 2 for yellow, 3 for red");
    scanf("%d",&n);

    switch(n)
    {
        case 1: printf("Green"); break;

         case 2: printf("Yellow"); break;

          case 3: printf("Red"); break;
    }

    return 0;
}