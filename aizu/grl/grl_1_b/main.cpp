
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

struct Edge 
{
    ll to;
    ll cost;
    ll from;
    Edge(){};
    Edge(ll& from, ll& to, ll& cost) : from(from), to(to), cost(cost) {}
};

using Graph = vector<vector<Edge>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll V, E, r;
    cin >> V >> E >> r;

    Graph g(V);

    bool negative_cycle (false);
    vector<ll> dist(V, LL_MAX);
    dist[r] = 0;

    for (ll i=0; i<E; i++)
    {
        ll s,t,d;
        cin >> s >> t >> d;
        g[s].push_back(Edge(s, t,d));


    }

    for (ll i=0; i<V; i++)
    {
        for (ll j=0; j<V; j++)
        {
            if (dist[j] == LL_MAX) continue;
            for (auto e : g[j])
            {
                if (dist[e.to] > dist[e.from] + e.cost)
                dist[e.to] = dist[e.from] + e.cost;
                if (i >= V-1 && e.to == V-1) return negative_cycle = true;
            }
        }
    }
    return 0;
}
