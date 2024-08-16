#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> element(arr.begin(),arr.end());
    int cnt=0;

    for(int i=0; i<n; i++){
        cout<<element.find(arr[i]+1);
    }
  

    cout<<cnt<<endl;

    return 0;
}