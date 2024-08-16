#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, n;
    cin >> x >> n;
    int s = 0;
    for (int i = 2; i <= n; i ++)
    {
        if(i%2==0){
            s+=pow(x,i);
        }
    }
    cout << s;

    return 0;
}