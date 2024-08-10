#include<stdio.h>
void print(int i){
    if(i==0)return ;
    print(i-1);
    printf("%d\n",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}