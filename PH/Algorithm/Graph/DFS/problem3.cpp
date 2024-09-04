#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adjList[N];
int adjMat[N][N];

int main() {

    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        // adjList[v].push_back(u);
    }    

    for(int i=1; i<=n; i++){
        cout<<"List"<<i<<" : ";
        for(int v:adjList[i]){
            cout<<v<<",";
            adjMat[i][v] = 1;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}