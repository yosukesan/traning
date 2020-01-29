
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

ll gcd (ll a, ll b)
{
    return b ? gcd (b, a%b) : a;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll ans(LL_MAX);
    rep(i,1,n) ans = min(ans, gcd(a[i], a[i-1])); 

    cout << ans << endl;

    return 0;
}
