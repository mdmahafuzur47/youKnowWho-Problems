#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int r= a*b*c;
        if(m%r == 0){
            printf("%lld\n",m/r);
        }else{
            printf("-1\n");
        }
    }
    
    return 0;
}