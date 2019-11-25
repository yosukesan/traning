
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using Graph = vector<vector<int>>;

int main()
{
    int n, m; cin >> n >> m;

    Graph g(n);

    for (int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> dist(g.size(), -1);
    priority_queue<int> q;
    int count (0);
    for (int i=0; i<g.size(); i++)
    {
        if (dist[i]!= -1) continue;

        dist[i] = 0; q.push(i);
        while (!q.empty())
        {
            int v = q.top(); q.pop();
            for (auto nv : g[v])
            {
                if (dist[nv] == -1)
                {
                    dist[nv] = dist[v] + 1;
                    q.push(nv);
                }
            }
        }
        count++;
    }
   
    cout << count << endl;

    return 0;
}
