
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using Graph = vector<vector<int>>;


int main()
{

    int n, m, s, t;
    cin >> n >> m >> s >> t; 

    Graph g(n);
    for (int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    vector<int> dist(n, -1);
    priority_queue<int> q;
    dist[s] = 0, q.push(s);
    while(!q.empty())
    {
        int v = q.top(); q.pop();
        for (auto l : g[v])
        {
            if (dist[l] == -1)
            {
                dist[l] =  dist[v] + 1;
                q.push(l);
            }
        }
    }

    for (int i=0; i<g.size(); i++)
        cout << i << ":" << dist[i] << endl;

    if (dist[t] != -1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
