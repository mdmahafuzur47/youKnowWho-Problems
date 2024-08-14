#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0; i<s.size()/2; i++){
           
            sum1+=s[i] - '0';
        }
        cout<<endl;
        for(int i=s.size() /2; i<s.size(); i++){
           
            sum2+=s[i] - '0';
        }
        (sum1 == sum2 ) ? cout<<"YES" : cout<<"NO";
    }
    

    return 0;
}