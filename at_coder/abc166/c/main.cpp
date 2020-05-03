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

    ll N, M;
    cin >> N >> M;
    vector<ll> h(N);
    rep(n,0,N) cin >> h[n];

    Graph g(N);

    rep(m,0,M)
    {
        ll from, to;
        cin >> from >> to;
        --from, --to;
        g[from].emplace_back(to);
        g[to].emplace_back(from);
    }

    //for (auto l: g)
    //{
    //    for (auto i: l)
    //        cout << " " << i;
    //    cout << endl;
    //}
        
    ll ans(0);
    rep(n,0,N)
    {
        bool tmp(true);
        for (auto i: g[n])
            tmp &= h[i]<h[n];
        if (tmp)
            ++ans;
    }

    cout << ans << endl;

    return 0;
}
