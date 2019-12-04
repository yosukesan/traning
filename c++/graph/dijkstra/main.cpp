
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using p = pair<int, int>;
using Graph = vector<vector<p>>;

int dijkstra(Graph& g, int& s)
{
    priority_queue<p, vector<p>, greater<p>> q;
    vector<int> dist(g.size(), 1<<30);
    dist[s]=0;
    q.push(p(0, s));

    while (!q.empty())
    {
        p pi = q.top(); q.pop();
        int v = pi.second;
        if (dist[v]<pi.first) continue;

        for (auto i: g[v])
        {
            if (dist[i.second] > dist[v] + i.first)
                dist[i.second] = dist[v] + i.first, q.push(p(dist[i.second], i.second));
        }
    }

    for (auto i: dist)
        if (i <= 1E+5)
            cout << i << endl;
        else
            cout << "INF" << endl;
}

int main()
{
    int V, E, r;
    cin >> V >> E >> r;

    Graph g(V);
    for (int i=0; i<E; i++)
    {
        int a, b, c;
        cin >> a >> b >>c;
        g[a].emplace_back(c, b); 
    }

    dijkstra(g, r);
}
