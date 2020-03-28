
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

using Graph = vector<vector<ll>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, x, y;
    cin >>n >> x >> y;

    Graph g(n);
    rep(i,0,n-1) g[i].push_back(i+1);
    g[x-1].push_back(y-1);

    ll w(1);
    for (ll i=0; i<n-1; ++i)
    {
        ll cnt(0);
        for (ll from=0; from<g.size(); from++)
        {
            for (ll to=0; to<g[from].size(); to++)
            { 
                ll dist = g[from][to] - from;
                if (dist == w)
                {
                    cnt++; 
                    cout << from << ' ' << g[from][to] << endl;
                }
            }
        }
        cout << cnt << endl;
        ++w;
    }

    return 0;
}
