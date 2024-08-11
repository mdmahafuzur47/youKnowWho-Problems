#include<stdio.h>
void maxMin(int *arr, int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    maxMin(arr,n);
    return 0;
}

void maxMin(int *arr, int n){
    int max=*arr;
    int min=*arr;
    for(int i=0; i<n; i++){
        if(*(arr + i) > max){
            max=*(arr + i);
        }
        if(*(arr+i) < min){
            min=*(arr + i);
        }
    }
    printf("%d %d",min,max);
}