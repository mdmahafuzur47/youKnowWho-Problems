#include<stdio.h>
#include<limits.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX,frequency =0;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            frequency = 1;
        }else if(arr[i] == min){
            frequency++;
        }
    }
    if(frequency % 2 != 0){
        printf("Lucky\n");
    }else{
        printf("Unlucky\n");
    }
    return 0;
}