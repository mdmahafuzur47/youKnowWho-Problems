#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%lld ",arr[i]);
    }
    printf("\n");
    return 0;
}