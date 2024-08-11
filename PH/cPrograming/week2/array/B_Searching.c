#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int x,pos=-1;
    scanf("%d",&x);
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            pos = i; 
            break;
        }
    }
    if(pos == -1){
        printf("%d",pos);
    }else{
        printf("%d",pos);
    }
    return 0;
}