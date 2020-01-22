
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, k;
    cin >>n >> k;

    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<ll> s(n+1);
    rep(i, 0, n+1) s[i+1] = s[i] + a[i];
    vector<ll> rs(n+1);
    rep(i, 0, n+1) rs[i] = s[n-i];

    //rep(i, 0, n+1) cout << ' ' << s[i]; 
    //cout << endl;

    ll ans(0);
    rep(i,0,n+1)   
    {
        ll trial = s[n] - s[i]; 
        ll t2 = rs[i] - rs[n]; 
        if (trial >= k)
        {
            ans++;
            cout << trial << ' ' << t2 << endl;
        }
    } 

    cout << ans << endl;
 
    return 0;
}
