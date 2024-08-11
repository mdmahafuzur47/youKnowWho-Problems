#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'z')
    {
        printf("%c\n", 'a');
    }
    else
    {
        printf("%c\n", c + 1);
    }
    return 0;
}