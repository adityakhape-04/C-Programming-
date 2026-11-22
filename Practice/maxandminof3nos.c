/* Find maximum/ minimum of three numbers*/
#include <stdio.h>
int main()

{
    int a,b,c,max,min;

    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);

    if (a >= b)
    {
        if (a >= c)
        {
            max = a;
        }
        else 
        {
            max = c;
        }
    }

    else
    {
        if (b >= c)
        {
            if (b >= a)
            {

             max = b;
             
            }
        }    
        
        else 
        {
            max = c;
        }
    }
     if (a <= b)
    {
        if (a <= c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        if (b <= c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}