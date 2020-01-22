
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
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

struct UnionFind
{
    vector<ll> d;
    UnionFind(){}
    UnionFind(ll mx): d(mx, -1){}
    ll root(ll x)
    {
        if (d[x] < 0) return x;
        return d[x] = root(d[x]);
    }

    void unite(ll x, ll y)
    {
        x = root(x); y = root(y);
        if (x == y ) return;
        if (d[x] > d[y]) swap(x, y);
        d[x] += d[y]; d[y] = x;
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, q;
    cin >>n >> q;

    UnionFind t(n);
    rep(i,0,q)
    {
        ll p, a, b;
        cin >> p >> a >> b;
        if (p)
        {
            if (t.root(a) == t.root(b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else
            t.unite(a,b);
    }

    return 0;
}
