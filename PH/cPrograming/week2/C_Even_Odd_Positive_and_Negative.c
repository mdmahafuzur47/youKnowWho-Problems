#include <stdio.h>
int main()
{
    int t, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even++;
        }
        else if (n % 2 != 0)
        {
            odd++;
        }
        if (n > 0)
        {
            pos++;
        }
        else if(n<0)
        {
            neg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);

    return 0;
}