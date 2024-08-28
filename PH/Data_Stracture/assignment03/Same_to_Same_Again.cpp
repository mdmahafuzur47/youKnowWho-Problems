#include <bits/stdc++.h>
using namespace std;
class myStack
{
    list<int> ls;

public:
    void push(int val)
    {
        ls.push_back(val);
    }
    void pop()
    {
        ls.pop_back();
    }
    int size()
    {
        return ls.size();
    }
    bool empty()
    {
        return ls.empty();
    }
    int top()
    {
        return ls.back();
    }
};
class myQueue
{
    list<int> ls;

public:
    void push(int val)
    {
        ls.push_back(val);
    }
    void pop()
    {
        ls.pop_front();
    }
    int size()
    {
        return ls.size();
    }
    bool empty()
    {
        return ls.empty();
    }
    int front()
    {
        return ls.front();
    }
};
bool same_same(myStack st,myQueue qu){
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
int main()
{
    myStack st;
    myQueue qu;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0; i<m; i++){
        int val;
        cin>>val;
        qu.push(val);
    }
    if(m!=n){
        cout<<"NO"<<endl;
        return 0;
    }
    bool same = same_same(st,qu);
    (same) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}