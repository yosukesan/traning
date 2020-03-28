
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

    ll k,n;
    cin >> k >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    rep(i,0,n) a.push_back(a[i]+k);

    ll max_itv(-LL_MAX);
    ll e1, e2;
    rep(i,1,n+1)
    { 
        ll itv = a[i] - a[i-1];
        if (max_itv < itv)
            max_itv = itv, e1 = i, e2 = i-1; 
        //cout << a[i] << ' ' << a[i-1] << endl;
    }

    if (e1>n-1) e1 -= n;
    if (e2<e1) e2 += n;

    //cout << max_itv << ' ' << e1 << ' ' << e2 << endl;

    ll dist(0);
    rep(i,e1+1,e2+1)
    {
        ll itv = a[i] - a[i-1];
        dist += itv;
    }

    cout << dist << endl;

    return 0;
}
