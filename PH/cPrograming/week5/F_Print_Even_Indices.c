#include<stdio.h>
void printReverse(int *arr, int n){
    if(n<0)return;
    if(n % 2 ==0 ){
        printf("%d ",arr[n]);
    }
    printReverse(arr,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printReverse(a,n-1);
    return 0;
}