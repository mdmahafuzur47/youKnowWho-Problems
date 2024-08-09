#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n, k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }
        for (int j = k; j >= 1; j--)
        {
            printf("%d", j);
        }
        k++;
        space--;
        printf("\n");
    }
    return 0;
}