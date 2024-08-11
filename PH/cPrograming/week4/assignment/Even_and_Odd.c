#include <stdio.h>
void odd_even();

int main()
{
    odd_even();
    return 0;
}
void odd_even()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}