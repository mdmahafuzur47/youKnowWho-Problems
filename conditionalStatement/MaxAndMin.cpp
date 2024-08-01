#include <iostream>
using namespace std;

int main()
{

    long long a, b, c, max, min;
    cin>>a>>b>>c;

    max=a;
    min=a;

    if(b>max){
        max=b;
    }
    if(b<min){
        min=b;
    }
    if(c>max){
        max=c;
    }
    if(c<min){
        min=c;
    }

    cout<<min<<" "<<max<<endl;

    return 0;
}