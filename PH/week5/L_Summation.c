#include <stdio.h>
long long int sum(long long int *arr, int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + sum(arr, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int result = sum(arr, n);
    printf("%lld\n", result);
    return 0;
}