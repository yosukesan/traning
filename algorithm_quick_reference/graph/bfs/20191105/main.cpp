
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>>& g, int & start)
{
    vector<bool> is_visited(g.size, false);

    priority_queue<int> q; 
    q.push(start);
    g[start];

    for (auto l: g[start])
    {
        q.push(l);
        while (!q.empty())
        {
            int t = q.front();
            q.pop();

            if (!is_visited[t])
            {
                 
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), u(n), w(n);
    for(int i=0; i<n; i++)
        cin >> v[i] >> u[i] >> w[i], v[i]--, u[i]--;

    vector<vector<int>> g(n, vector<int>());

    for (int i=0; i<n; i++)
        g[v[i]].push_back(u[i]);

    for (int i=0; i<n; i++)
        g[u[i]].push_back(v[i]);

    for (auto l: g)
    {
        for (auto i: l)
            cout << i << ' ';

        cout << endl;
    }

    return 0;
}
