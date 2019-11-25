
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using Graph = vector<vector<int>>;

void bfs (Graph &g, const int& start)
{
    vector<int> dist(g.size(), -1);
    priority_queue<int> q;

    dist[start] = 0;
    q.push(start);

    vector<int> res;

    while (!q.empty())
    {
        int t = q.top(); q.pop();  
        for (auto l: g[t])
        {
            if (dist[l] != -1) continue;
            dist[l]=dist[t]+1;
            q.push(l); 
        }
    }

    for (int i=0; i<g.size(); i++)
        cout << i << ":" << dist[i] << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    Graph g(n);
    for (int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        //u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (auto l: g)
    {
        for (auto n: l)
            cout << n << ' ';

        cout << endl;
    }

    //int root;
    //for (auto l : g)
    //    if (l.size() == 1){ root = l[0]; break;}
    //cout << "root = " << root << endl;

    bfs(g, 0);

    return 0;
}
