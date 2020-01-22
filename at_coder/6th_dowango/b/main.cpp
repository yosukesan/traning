
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
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

ll factorial (ll n)
{
    ll ans (1);
    
    if (n<=0) return 1;

    for(ll i=n; i>1; --i)
        ans *= i;

    return ans;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vector<ll> x(n);
    rep(i,0,n) cin >> x[i];

    vector<ll> ax(n+1, 0);
    rep(i,0,n) ax[i+1] = ax[i] + x[i]; 

    //for (auto i: ax)
    //    cout << i << endl;

    ll m = factorial(n-1);
    ll gain(0);
    for (ll i=n; i>=2; --i)
    {
        ll dist = ax[i] - ax[i-1];
        ll exp = dist * 1/(n-1);  
        gain += (exp * m) % MOD;
    }

    cout << gain << endl;

    ll g = (gain) % MOD;
    cout << g % MOD << endl;

    return 0;
}
