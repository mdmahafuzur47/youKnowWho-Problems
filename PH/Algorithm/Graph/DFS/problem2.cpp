#include <bits/stdc++.h>
using namespace std;

int main() {
    const int N=1e2+5;
    int adjMat[N][N];
    vector<int> adjList[N];

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>adjMat[i][j];
            if(adjMat[i][j]>0){
                adjList[i].push_back(j);
            }
        }
    }
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1; i<=n; i++){
        cout<<"List "<<i<<" : ";
        for(int v:adjList[i]){
            cout<<v<<",";
        }
        cout<<endl;
    }



    return 0;
}