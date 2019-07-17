
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll gcd(ll&a , ll&b)
{
    if (a < b)
        swap(a, b);

    ll r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

ll f (ll& x, vector<ll>& a)
{
    ll ans(0);
    for (auto i : a)
        ans += x % i;

    return ans;
}

int main()
{
    ll n;

    cin >> n;

    vector<ll> a(n);

    for (ll i=0; i<n; i++)
        cin >> a[i];

    ll max (0);
    ll ans(0);
    for (ll i=0; i<1e+5; i++)
    {
        ll ans = f(i, a); 
        if (max )
    }

    return 0;
}
