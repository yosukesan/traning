
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

ll dijkstra(vector<vector<ll>>& g, const ll& start, const ll& end)
{
    ll sum (0);
    vector<bool> visited(g.size(), false);
    priority_queue<ll, vector<int>, greater<int>> q;

    q.push(start);

    while (!q.empty())
    {
        ll v = q.top();
        q.pop();

        //cout << v << endl;

        if (!visited[v])
        {
            visited[v] = true;

            if (v == end) 
                return sum;

            q.push(g[v][1]);
            cout << g[v][1] << endl;
            sum += g[v][2];
        }
    }

    return sum;
}

int main()
{
    ll num_v, num_e, start;
    
    cin >> num_v >> num_e >> start;

    vector<vector<ll>> g(num_e, vector<ll>(3));

    rep(i,0,5)
        rep(j,0,3)
            cin >> g[i][j];

    set<ll> ends;
    ends.insert(start);
    rep(i, 0, g.size())
        ends.insert(g[i][1]);

    for (auto i : ends)
    {
        cout << dijkstra(g, start, i) << endl; 
    } 
            

    return 0;
}
