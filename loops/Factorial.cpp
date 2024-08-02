#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {
        int n,fac=1;
        cin>>n;
        for(int i=1; i<=n; i++){
            fac*=i;
        }
        cout<<fac<<endl;
    }
    

    return 0;
}