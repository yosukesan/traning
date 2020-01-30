
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll gcd (ll a, ll b)
{
    return b ? gcd(b, a%b) : a;
}

ll lcm (ll a, ll b)
{
    return a*b / gcd(a, b);
}

ll f (ll x, ll c, ll d)
{
    ll res = x;
    res -= x/c;
    res -= x/d;
    res += x/lcm(c,d);
    return res;
}

int main()
{
    ll a,b,c,d;
    vector<ll> nums;
    cin >> a >> b >> c >> d;

    ll cnt(f(b,c,d) - f(a-1, c, d));

    cout << cnt << endl;

    return 0;
}
