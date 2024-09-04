#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
bool visited[N];
vector<int> adj[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v);
    }
    cout << u << " ";
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
        for (int val : adj[i])
        {
            cout << val << ",";
        }
        cout << endl;
    }
    cout << endl;
    dfs(1);
    cout << endl;

    return 0;
}