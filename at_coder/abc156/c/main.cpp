
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >>n;
    vector<ll> x(n);
    rep(i,0,n) cin >> x[i];

    ll ans(LL_MAX);

    rep(i,1,101)
    { 
        ll cur(0);
        rep(j,0,n)
        {
            cur += (ll)pow(x[j]-i, 2);
        }
        ans = min(ans, cur);
    }

    cout << ans << endl;

    return 0;
}
