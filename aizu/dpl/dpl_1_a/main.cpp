
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
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

    const ll N (50000);
    ll n, m;
    cin >>n>>m;
    vector<ll> c(m);
    rep(i,0,m) cin >> c[i];

    vector<ll> dp(N+10, LL_MAX);

    dp[0] = 0;

    rep(j,0,N+1)
        rep(i,0,m)
        {
            if (j+c[i] > N) break;
            //cout << dp[j] << ' ' << c[i] << endl;
            dp[j+c[i]] = min(dp[j]+1, dp[j+c[i]]);
        }

    cout << dp[n] << endl;

    return 0;
}
