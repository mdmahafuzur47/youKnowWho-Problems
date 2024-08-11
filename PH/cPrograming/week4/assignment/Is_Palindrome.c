#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int len = strlen(str);
    int i = 0, j = len - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char str[1001];
    scanf("%s",str);
    int value = is_palindrome(str);
    if (value)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}