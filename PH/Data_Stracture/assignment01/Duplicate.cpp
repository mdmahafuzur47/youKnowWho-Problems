#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> frq(1000000001,0);
    for(int i=0; i<n; i++){
        frq[arr[i]]++;
    }

    for(int i=0; i<1000000001; i++){
        if(frq[i] > 0){
            cout<<frq[i];
        }
    }
    

    return 0;
}