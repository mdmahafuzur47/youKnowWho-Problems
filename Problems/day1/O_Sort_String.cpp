#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    char str[n];
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<str[i];
    }


    return 0;
}