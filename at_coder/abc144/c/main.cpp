
#include <bits/stdc++.h>

typedef long long ll;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll ans = LL_MAX;
    for (ll i=1; i*i<=n; i++)
    {
        if (n%i != 0) continue;
        ll j = n/i;
        ans = min(ans, i+j-2);
    }

    cout << ans << endl;

    return 0;
}
