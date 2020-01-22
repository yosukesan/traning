
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using Graph = vector<vector<int>>;

int main()
{
    int n;
    cin >> n;

    Graph g(n);
    vector<int> deg(n, 0);
    for (int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
        g[b].push_back(a);
        ++deg[a], ++deg[b];
    }

    queue<int> q;
    for (int i=0; i<n; i++)
        if (deg[i]==1) q.push(i);

    vector<bool> is_pushed(n,false);
    while (!q.empty())
    {
        int v = q.front(); q.pop();
        is_pushed[v] = true;
        for (auto nv : g[v])
        {
            --deg[nv];
            if (deg[nv] == 1)
                q.push(nv);
        }
    }

    int p; cin >> p;
    for (int i=0; i<p; i++)
    {
        int a, b; cin >> a >> b; --a, --b;
        if (!is_pushed[a] && !is_pushed[b])
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}
