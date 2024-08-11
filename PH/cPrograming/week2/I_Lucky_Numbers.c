#include <stdio.h>
int main()
{
    int n, last, first;
    scanf("%d", &n);
    first = n / 10;
    last = n % 10;

    if (last != 0 && (last % first == 0 || first % last == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}