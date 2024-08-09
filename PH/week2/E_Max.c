#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int x, max=0;
    while (t--)
    {
        scanf("%lld", &x);
        if (max < x)
        {
            max = x;
        }
    }

    printf("%lld\n", max);

    return 0;
}