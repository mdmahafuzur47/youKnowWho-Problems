#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, m, k;
    cin >> n >> m >> k;

    long long cnt = min({n, m, k});

    n=n-cnt,k=k-cnt,m=m-cnt;

    while (n>=2 && k>=1)
    {
        cnt++;
        n-=2;
        k-=1;
    }
    cout<<cnt<<endl;

    return 0;
}