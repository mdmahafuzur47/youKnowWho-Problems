#include <bits/stdc++.h>
using namespace std;

int fun(){
    int c = 30;
    return c;
}
int* fun1(){
    int *d = new int;
    *d = 60;
    return d;
}

int main() {

    int a; // static variable
    a=10; // static declared
    int *b = new int;
    *b = 100;
    // delete b;

    cout<<a<<" "<<*b<<endl;
    cout<<fun()<<endl;

    cout<<*fun1()<<endl;


    return 0;
}