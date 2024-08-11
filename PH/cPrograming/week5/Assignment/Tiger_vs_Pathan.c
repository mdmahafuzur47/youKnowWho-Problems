#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int t = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'T')
            {
                t++;
            }
            else
            {
                p++;
            }
        }
        if (t < p)
        {
            printf("Pathaan\n");
        }
        else if (t == p)
        {
            printf("Draw\n");
        }
        else
        {
            printf("Tiger\n");
        }
    }

    return 0;
}