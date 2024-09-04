#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 5;
vector<int> adj[N];
bool visited[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v);
        height[u] = max(height[u], height[v] + 1);
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
    int x;
    cin >> x;
    cout << endl;
    dfs(1);
    cout << "height of " << x << " : " << height[x] << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "height of " << i << " : " << height[i] << endl;
    // }
    return 0;
}