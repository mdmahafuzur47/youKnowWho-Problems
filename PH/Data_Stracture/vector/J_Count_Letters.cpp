#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;
    vector<int> frq(26, 0);
    for(int i=0; i<str.size(); i++){
        int value = str[i] - 'a';
        frq[value]++;
    }
    for(int i=0; i<26; i++){
        if(frq[i] > 0){
            cout<<char(i+'a')<<" : "<<frq[i]<<endl;
        }
    }

    return 0;
}