
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
    cin >> n;
    vector<ll> h(n);
    rep(i,0,n) cin>>h[i];

    ll ans (0); 
    ll cur (0);

    rep(i,0,n)    
    {
        if (cur >= h[i])
            cur = h[i];
        else
            ans += h[i] - cur, cur = h[i];
    }

    cout << ans << endl;

    return 0;
}
