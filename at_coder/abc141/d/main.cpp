
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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);

    rep(i, 0, n) cin >> a[i];

    sort(a.begin(), a.end(), greater<ll>());


    ll sum(0);
    const ll Q(1E+5);
    //const ll Q(1E+9);
    vector<vector<ll>> dp(m, vector<ll>(Q,LL_MAX));

    ll _min (LL_MAX);
    ll j(0);
    while (true)
    {
        rep(i, 0, m)
        {
            
            if (dp[j][i] < )
        }
        j++;
    }
    return 0;
}
