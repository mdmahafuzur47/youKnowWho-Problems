#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        vector<int> v;
        while (n--)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            v.push_back(*it);
        }
        reverse(v.begin(),v.end());
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}