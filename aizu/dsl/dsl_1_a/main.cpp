
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

struct UnionFind
{
    vector<ll> r, p;
    UnionFind(){}
    UnionFind(ll& size){init(size);}
    void init (ll& size)
    {
        r.resize(size,0);
        p.resize(size,0);
        fill(r.begin(), r.end(), 1);
        iota(p.begin(), p.end(), 0);
    }
    ll find(ll & x)
    {
        return (x==p[x] ? x : p[x] = find(p[x]));
    }
    bool same (ll& x, ll& y)
    {
        return find(x) == find(y);
    }
    void unite(ll&x, ll&y)
    {
        x = find(x); y = find(y);
        if (x == y) return;
        if (r[x] < r[y]) swap(x,y);
        r[x] += r[y];
        p[y] = x;
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, q;
    cin >> n >> q;
    UnionFind uf(n);
    for(ll i=0; i<q; i++)
    { 
        ll c, x, y;
        cin >> c >> x >> y;
        if (c) cout << uf.same(x,y) << endl;
        else uf.unite(x,y);
    }

    return 0;
}
