#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    min = a;

    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    printf("%d %d\n", min, max);
    return 0;
}