
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

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    rep(i,0,n) cin >> c[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll cnt(0);
    for (ll i=0; i<n; ++i)
    {
        ll ai = lower_bound(a.begin(), a.end(), b[i]) - begin(a);
        ll ci = n - (upper_bound(c.begin(), c.end(), b[i]) - begin(c));
        cnt += ai * ci;
    }

    cout << cnt << endl;

    return 0;
}
