#include <bits/stdc++.h>
using namespace std;

int main() {
    int *ar = new int[3];
    int *copy = new int[3];
    for(int i=0; i<3; i++){
        cin>>ar[i];
        copy[i] = ar[i];
    }
    delete[] ar;
    ar = new int[5];
    for(int i=0; i<3; i++){
        ar[i] = copy[i];
    }
    ar[3] = 10;
    ar[4] = 20; 

    for(int i=0; i<5; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}