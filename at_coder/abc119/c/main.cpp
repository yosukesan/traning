
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, a, b, c;
    cin >>n>>a>>b>>c;
    vector<ll> l(n);
    rep(i,0,n) cin >> l[i];

    vector<vector<ll>> dp(1E+6+10, LL_MAX);

    rep(i,0,n)
    {
        rep(j,0,3)
        {

        }
    }

    return 0;
}
