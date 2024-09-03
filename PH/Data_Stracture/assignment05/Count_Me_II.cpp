#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int frq[100001]={0};
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<n; i++){
            frq[arr[i]]++;
        }

        for(int i=0; i<100001; i++){
            if(frq[i] > 0){
                cout<<i<<" "<<frq[i]<<endl;
            }
        }


    }
    

    return 0;
}