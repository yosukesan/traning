
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

    ll n, k;
    cin>>n>>k;
    vector<ll> h(n+110, 0);
    vector<ll> dp(n+110, LL_MAX);
    
    rep(i,0,n) cin>>h[i]; 

    dp[0] = 0;

    rep(i,0,n-1)
    {
        rep(j,1,k+1)
            dp[i+j] = min(dp[i+j], dp[i] + abs(h[i] - h[i+j]));
    }

    //rep(i,0,n) cout << dp[i] << endl; 

    cout << dp[n-1] << endl;

    return 0;
}
