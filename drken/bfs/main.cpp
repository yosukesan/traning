
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using Graph = vector<vector<int>>;

int bfs(const Graph& g, const int& start)
{
    vector<int> dist (g.size(), -1);
    queue<int> que;

    dist[start] = 0;
    que.push(start);

    while (!que.empty())
    {
        int v (que.front());
        que.pop();

        for (int nv: g[v])
        {
            if (dist[nv] != -1) continue;

            dist[nv] = dist[v]+1;
            que.push(nv);
        }
    }

    for (int v=0; v<g.size(); ++v)
        cout << v << ": " << dist[v] << endl;

    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;

    Graph g(n);
    for (int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(g, 0);

    return 0;
}
