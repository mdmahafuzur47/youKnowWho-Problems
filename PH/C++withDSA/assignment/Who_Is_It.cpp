#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
        int id;
        char name[101];
        char section[27];
        int mark;
};

int main() {

    int t;
    cin>>t;
    while (t--)
    {
        Student a,b,c;
        cin>>a.id>>a.name>>a.section>>a.mark;
        cin>>b.id>>b.name>>b.section>>b.mark;
        cin>>c.id>>c.name>>c.section>>c.mark;

        int maxMark = max({a.mark,b.mark,c.mark});

        if(maxMark == a.mark){
            cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.mark<<endl;
        }else if(maxMark == b.mark){
             cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.mark<<endl;
        }else{
            cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.mark<<endl;
        }
       
    }
    

    return 0;
}