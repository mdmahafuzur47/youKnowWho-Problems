#include <bits/stdc++.h>
using namespace std;

int main() {

    queue<int> qu;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        qu.push(val);
    }
    stack<int> st;
    for(int i=0; i<n; i++){
        st.push(qu.front());
        qu.pop();
    }
    while (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
    
    while (!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    

    return 0;
}