
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<int> s(n);
    rep(i,0,m)
    {
        ll k;
        cin >> k;
        ll x;
        rep(i,0,k) cin>>x, --x, s[x] |= 1<<i;
    }
    ll p;
    rep(i,0,m){ll y; cin >> y; p |= y<<i;}

    ll ans(0);
    for (ll l=0; l<(1<<n); l++)
    {
        ll t = 0;
        rep(i,0,n)
            if (l>>i & 1)
                t ^= s[i];

        if (t==p) ans++;
    }

    cout << ans << endl;

    return 0;
}
