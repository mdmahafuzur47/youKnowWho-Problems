#include <iostream>
using namespace std;

int main() {

    long long a,b,c,d,multiplication;
    cin>>a>>b>>c>>d;
    multiplication= a*b*c*d;

    cout<<multiplication % 100<<endl;

    return 0;
}