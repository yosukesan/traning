
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
const ll MOD (1000000000+7);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

ll gcd (ll a, ll b)
{
    return b ? gcd(b, a%b) : a;
}

ll lcm (ll a, ll b)
{
    return a * b / gcd(a,b);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll _lcm;
    rep(i,1,n)
    {
        _lcm = lcm(a[i-1], a[i]);
    }

    //cout << _lcm << endl;

    ll _sum(0);
    rep(i,0,n)
        _sum += (_lcm / a[i]) % MOD; 

    cout << _sum << endl;

    return 0;
}
