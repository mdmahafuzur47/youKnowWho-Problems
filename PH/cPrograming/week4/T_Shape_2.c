#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int space = n, k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i*2 -1; j++)
        {
            printf("*");
        }
        // space++;
        // k += 2;
        printf("\n");
    }
    return 0;
}