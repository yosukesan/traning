
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <tuple>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

using P = pair<ll,ll>;
using Graph = vector<vector<ll>>;

ll dijkstra(Graph& g, vector<ll>&a, vector<ll>&b, vector<ll>&c, vector<ll>&d)
{
    priority_queue<ll>  que;
    
    while (que.size())
    {
        ll n = que.top(); que.pop();
        for (auto i: g[n])
        {
            
        }
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M, S;
    cin >> N >> M >> S;
    vector<ll> u(M), v(M), a(M), b(M);
    rep(i,0,M) cin >> u[i] >> v[i] >> a[i] >> b[i];
    vector<ll> c(N), d(N);
    rep(i,0,N) cin >> c[i] >> d[i]; 

    Graph g(M);
    rep(i,0,M)
    {
        g[u[i]-1].push_back(v[i]-1);
    }

    return 0;
}
