#include <stdio.h>

void digitExtractUsingRecursion(long long int n)
{
    if (n < 10)
    {
        printf("%lld ", n);
        return;
    }
    digitExtractUsingRecursion(n / 10);
    printf("%lld ", n % 10);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        digitExtractUsingRecursion(n);
        printf("\n");
    }

    return 0;
}