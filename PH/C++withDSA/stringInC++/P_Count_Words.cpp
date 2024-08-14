#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    bool found = false;
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if(!found){
            cnt++;
            }
            found = true;
        }
        if (c == ' ' || c == '!' || c == '.' || c == '?' || c == ',')
        {
            found = false;
        }
    }
    cout << cnt << endl;

    return 0;
}