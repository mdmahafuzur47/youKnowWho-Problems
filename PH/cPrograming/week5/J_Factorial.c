#include<stdio.h>
long long int fac(int n){
    if(n==0) return 1;
    return fac(n-1) * n;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int ans = fac(n);
    printf("%lld",ans);
    return 0;
}