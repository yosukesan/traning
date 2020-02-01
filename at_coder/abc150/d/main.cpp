
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

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a%b) : a;
}

ll lcm(ll a, ll b)
{
    return a*b / gcd(a, b);
}

ll f(ll x)
{
    ll res = 0;
    while (x%2 == 0)
        x /= 2, res++;

    return res;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    rep(i,0,n) 
    {
        if (a[i]%2==1)
        {
            cout << 0 << endl;
            return 0;
        } 
        a[i] /= 2;
    }

    ll t = f(a[0]);
    rep(i,0,n)
    {
        if (f(a[i]) != t)
        {
            cout << 0 << endl;
            return 0;
        }
        a[i] >>= t;
    }

    m >>= t;

    ll l = 1;
    rep(i,0,n)
    {
        l = lcm(l, a[i]);
        if (l > m)
        {
            cout << 0 << endl;
            return 0;
        }
    }

    m /= l;
    ll ans ((m+1)/2);
    cout << ans << endl;

    return 0;
}
