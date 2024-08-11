#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,negSum=0;
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            sum+=arr[i];
        }else{
            negSum+=arr[i];
        }
    }
    printf("%d %d",sum,negSum);
    return 0;
}