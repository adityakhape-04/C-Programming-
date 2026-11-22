#include <stdio.h>
int main()
{
    int n,i,j,count;
    printf("Enter thr number of terms :");
    scanf("%d",&n);

    for (i = 2; i <= n; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}