#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 5;
vector<int> adj[N];
bool visited[N];
int depth[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        depth[v] = depth[u] + 1;
        dfs(v);
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << " : ";
        for (int v : adj[i])
        {
            cout << v << ",";
        }
        cout << endl;
    }
    cout << endl;
    dfs(1);

    cout << endl;
    int x;
    cin >> x;

    cout << "depth" << "[" << x << "]" << " : " << depth[x] << endl;
    // for(int i=1; i<=n; i++){
    //    cout<<"depth"<<"["<<i<<"]"<<" : "<<depth[i]<<endl;

    // }

    return 0;
}