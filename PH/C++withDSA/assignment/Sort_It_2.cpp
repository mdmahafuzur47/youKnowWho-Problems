#include <bits/stdc++.h>
using namespace std;

long long int* sort_it(int n){
    long long int *arr = new long long int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    sort(arr,arr+n,greater<long long int>());
    return arr;
}

int main() {

    int n; 
    cin>>n;
    long long int *arr = sort_it(n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}