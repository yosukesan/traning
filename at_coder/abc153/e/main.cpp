
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

    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin >> a[i] >> b[i];

    vector<vector<ll>> dp(n, vector<ll>(10010, LL_MAX));

    dp[0][0] = h;
    rep(j,0,n)
    {
        rep(i,0,10010)
            dp[j][i] = min(dp[j][i], h-a[j][b[i]]);
    }

    cout << dp[n][h] << endl;

    return 0;
}
