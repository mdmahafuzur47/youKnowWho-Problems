#include <bits/stdc++.h>
using namespace std;

int main()
{

    const int N = 1e3 + 5;
    int n, m;
    cin >> n >> m;
    int adjMat[N][N];

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjMat[u][v] = w;
        adjMat[v][u] = w;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}