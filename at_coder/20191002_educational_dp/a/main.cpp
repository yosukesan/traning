
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    vector<ll> h(n);
    vector<ll> dp(100010, LL_MAX);

    rep(i,0,n) cin >> h[i];

    dp[0] = 0;

    rep(i,0,n-1)
    {
        ll t1 = abs(h[i] - h[i+1]);
        ll t2 = abs(h[i] - h[i+2]);

        //cout << t1 << ' ' << t2 << endl;
        dp[i+1] = min(dp[i+1], dp[i] + t1);     
        dp[i+2] = min(dp[i+2], dp[i] + t2);     
    }

    //rep(i,0,n) cout << dp[i] << endl;
    cout << dp[n-1] << endl; 

    return 0;
}
