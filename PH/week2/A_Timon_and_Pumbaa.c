#include<stdio.h>
int main()
{
    long long int a,b,sub;
    scanf("%lld %lld",&a,&b);
    sub = a-b;
    if(sub>=0){
        printf("%d\n",sub);
    }else{
        printf("0\n");
    }
    return 0;
}