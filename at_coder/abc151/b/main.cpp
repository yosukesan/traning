
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

    ll n, k, m;
    cin >> n >> k >> m;

    vector<ll> a(n-1);
    rep(i,0,n-1) cin >> a[i];

    ll sum(0);
    rep(i,0,n-1) sum+=a[i]; 

    ll ans = m * n - sum; 
    
    if (ans < 0) ans = 0;

    if (ans > k)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << ans << endl;

    return 0;
}
