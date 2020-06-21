
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

using T = tuple<ll,ll>;
using Graph = vector<vector<T>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, q;
    cin >> n;
    multiset<ll> a;
    rep(i,0,n)
    {
        ll cache;
        cin >> cache;
        a.insert(cache);
    }
    cin >> q;
    vector<ll> b(q), c(q);
    rep(i,0,q)
        cin >> b[i] >> c[i];

    ll accm (0);
    for (auto i: a)
        accm += i;

    rep(i,0,q)  
    {

        ll num_change(0);
        num_change = a.count(b[i]);

        for (ll j=0; j<num_change; j++)
            a.insert(c[i]);

        while (a.count(b[i]))
            a.erase(b[i]);

        accm += (c[i] - b[i]) * num_change;
        cout << accm << endl;
    }

    return 0;
}
