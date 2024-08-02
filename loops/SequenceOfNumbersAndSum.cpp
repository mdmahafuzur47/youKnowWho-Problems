#include <iostream>
using namespace std;

int main() {

    int n,m,sum=0;
    cin>>n>>m;

    if(n>0 && m>0 && n>m){
        for(int i=m; i<=n; i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum;
    }else if(n>0 && m>0 && n<m){
         for(int i=n; i<=m; i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum;
    }

    return 0;
}