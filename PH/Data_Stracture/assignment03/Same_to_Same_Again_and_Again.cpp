#include <bits/stdc++.h>
using namespace std;

bool same_same(stack<int> st,queue<int> qu){
    while (!st.empty())
    {
        if(st.top() != qu.front()){
            return false;
        }
        st.pop();
        qu.pop();
    }
    return true;
    
}

int main() {

    stack<int> st;
    queue<int> qu;

    int n,m;
    cin>>n>>m;
    if(n!=m){
        cout<<"NO"<<endl;
        return 0;
    }
    while (n--)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    while (m--)
    {
        int val;
        cin>>val;
        qu.push(val);
    }

    bool same = same_same(st,qu);
    (same) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
    

    return 0;
}