#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    long long int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        int end = c - 1, start = 0;
        while (start < end)
        {
            long long int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            end--;
            start++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == c - 1)
            {
                printf("%lld", arr[i][j]);
            }
            else
            {
                printf("%lld ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}