#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int w,h;
        scanf("%lld %lld",&w,&h);
        if(w == h){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    
    return 0;
}