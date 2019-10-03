
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
    cin >>n;
    vector<ll> a(n+10), b(n+10), c(n+10);
    rep(i,0,n) cin>>a[i]>>b[i]>>c[i]; 

    vector<ll> dp(n+10, 0);

    dp[0] = 0;

    rep(i,0,n) 
    {
        if (a[i]>b[i] && b[i]>c[i])    
            dp[i+1] = max(dp[i], dp[i]+a[i]);
        else if (b[i]>c[i] && c[i]>a[i])    
            dp[i+1] = max(dp[i], dp[i]+b[i]);
        else if (c[i]>b[i] && b[i]>a[i])    
            dp[i+1] = max(dp[i], dp[i]+c[i]);
    }

    //rep(i,0,n) cout << dp[i] << ' ';
    //cout << endl;

    cout << dp[n] << endl;
     

    return 0;
}
