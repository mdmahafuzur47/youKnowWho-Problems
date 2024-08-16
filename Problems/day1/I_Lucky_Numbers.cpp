#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int flag=0;
    int first=n/10,last=n%10;
    if(first > last){
        if(first % last == 0){
            flag=1;
        }
    }else{
        if(last % first == 0){
            flag=1;
        }
    }

    (flag)?cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}