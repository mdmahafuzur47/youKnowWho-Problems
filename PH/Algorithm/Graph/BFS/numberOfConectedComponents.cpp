#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
vector<int> v;

void dfs(int u)
{
    visited[u] = true;
    v.push_back(u);
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v);
    }
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
        adj[v].push_back(u);
    }

    int cc = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i);
        cc++;
        cout << "Number of Connected Components-" << cc << " : ";
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << endl;
        v.clear();
    }

    return 0;
}