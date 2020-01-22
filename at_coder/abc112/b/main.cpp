
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, T;
    cin >> N >> T;

    map<ll, ll> m;
    for (ll i=0; i<N; ++i)
    {
        ll c, t;
        cin >> c >> t;
        m.emplace(c, t); 
    }

    ll min_cost(LL_MAX);
    for (auto i: m)
        if (i.second < T)
        {
            min_cost = min(min_cost, i.first);
        }

    if (min_cost == LL_MAX)
        cout << "TLE" << endl;
    else
        cout << min_cost << endl;

    return 0;
}
