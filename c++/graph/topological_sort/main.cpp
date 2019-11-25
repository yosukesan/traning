
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
using Graph = vector<vector<int>>;

int main()
{
    int n, m;
    cin >> n >> m;

    Graph g(n);
    vector<int> deg(n, 0);

    for (int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[b].push_back(a);
        deg[a]++;
    }

    queue<int> que;
    for (int i=0; i<n; ++i) if (deg[i] == 0) que.push(i);

    vector<int> order;
    while (!que.empty())
    {
        int v = que.front(); que.pop();
        order.push_back(v);

        for (auto nv : g[v])
        {
            --deg[nv];
            if (deg[nv] == 0) que.push(nv);
        }
    }

    reverse(order.begin(), order.end());
    for (auto v: order) cout << v << endl;

    return 0;
}
