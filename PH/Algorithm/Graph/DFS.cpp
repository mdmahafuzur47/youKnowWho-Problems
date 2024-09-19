#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
vector<int> adj[N];
bool visited[N];


void dfs(int u){
    // section 1: action just after entering node u
    visited[u] = true;
    cout<<"Visiting node: "<<u<<endl;

    for(int v:adj[u]){
        // section 2: actions before entering a new neighbor
        if(visited[v]) continue;
        dfs(v);
        // section 3: actions after exiting a neighbor
    }
    // section 4: actions before exiting node u
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    dfs(1);

    return 0;
}