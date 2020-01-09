
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

const ll MOD (1000000007);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<bool> broken(n, false);
    rep(i,1,m+1)
    {
        ll x;
        cin >> x, broken[x] = true;
    }

    //rep(i,0,n)
    //    cout <<broken[i] << endl;

    vector<ll> dp(n+10);

    dp[0] = 1;
    rep(i,0,n)
    {
        if (!broken[i+1])
            dp[i+1] += dp[i], dp[i+1] = dp[i+1] % MOD; 

        if (!broken[i+2])
            dp[i+2] += dp[i], dp[i+2] = dp[i+2] % MOD;
    }

    cout << dp[n] << endl;

    return 0;
}
