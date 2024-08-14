#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char str[n];
        for(int i=0; i<n; i++){
            cin>>str[i];
        }
        int frq[26] = {0};
        for(int i=0; i<n; i++){
            int pos = str[i] - 'A';
            if(frq[pos] == 0){
                frq[pos]+=2;
            }else{
                frq[pos]++;
            }
        }
        int sum=0;
        for(int i=0; i<26; i++){
            if(frq[i] > 0){
                sum+=frq[i];
            }
        }
        cout<<sum<<endl;

    }
    

    return 0;
}