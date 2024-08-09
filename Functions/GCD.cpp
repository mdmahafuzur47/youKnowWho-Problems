// a =42 and b =24;

//  b!=0 

// rem=a%b;
// a=b;
// b=rem

// return a;




#include <iostream>
using namespace std;

int GCD(int a,int b){
    int rem;
    while (b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main() {

    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;

    return 0;
}