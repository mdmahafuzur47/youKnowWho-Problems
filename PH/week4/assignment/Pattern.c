#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n, k = 1;
    for (int i = 1; i < n*2; i++)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        if (i > (n * 2) /2 -1 )
        {
            space++;
            k -= 2;
        }
        else
        {
            k += 2;
            space--;
        }
        printf("\n");
    }
    return 0;
}