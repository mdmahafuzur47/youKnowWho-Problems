#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        char ch;
        cin>>n>>ch;
        for(int i=1; i<=n; i++){
            if(i==n){
                cout<<ch;
            }else{
                cout<<ch<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}