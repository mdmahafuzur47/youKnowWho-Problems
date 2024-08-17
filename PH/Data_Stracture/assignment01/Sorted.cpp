#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> copy(arr);
        sort(copy.begin(),copy.end());
        if(arr == copy){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}