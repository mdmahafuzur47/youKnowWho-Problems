#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            cout<<i<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}