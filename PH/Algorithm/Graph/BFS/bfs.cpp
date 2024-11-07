#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for (int v : adj[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            level[v] = level[u] + 1;
            visited[v] = true;
        }
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

    bfs(1);
    cout<<endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << " : " << level[i]<<endl;
    }

    return 0;
}