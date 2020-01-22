
#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    int to, cost;
    Edge(int to, int cost) : to(to), cost(cost) {}
};

using adjlist = vector<vector<Edge>>;
adjlist graph;

const int INF (1E+6);

vector<int> dist;

bool bellman_ford(int n, int s)
{
    dist = vector<int>(n, INF);
    dist[s] = 0;
    for (int i=0; i<n; i++)
        for (int v=0; v<n; v++)
            for (int k=0; k<graph[v].size(); k++)
            {
                Edge e = graph[v][k];
                if (dist[v] != INF && dist[e.to] > dist[v] + e.cost)
                {
                    dist[e.to] = dist[v] + e.cost;    
                    if (i==n-1) return true;
                }
            }

    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    graph = adjlist(n);

    for (int i=0; i<m; i++)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        graph[from].push_back(Edge(to, cost));
    }

    bellman_ford(n, 0);

    for (int i=1; i<n; i++)
        if (dist[i] != INF)
            cout << "cost: from 0 to " << i << "= " << dist[i] << endl; 
}
