
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

//ll gcd(ll x, ll y) { return y ? gcd(y,x%y) : x;}

ll gcd(ll a, ll b)
{
    if (a < b) swap(a, b);
    if (a % b == 0) return b;
    else return gcd(a, a%b);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a, b;

    //cout << gcd(4, 18) << endl;
    //cout << gcd(24, 18) << endl;
    //cout << gcd(17, 1) << endl;

    cin >> a >> b;

    ll _gcd = gcd(a, b);

    //cout << _gcd << endl;

    vector<ll> factors;
    for (ll i=2; i*i<=_gcd; ++i)
    {
        if (_gcd % i)
            continue;
        factors.push_back(i);
        while (_gcd%i == 0)
            _gcd /= i;
    }
    if (_gcd != 1) factors.push_back(_gcd);

    //for(auto i: factors)
    //    cout << i << ' ';
    //cout << endl;

    cout << factors.size() + 1 << endl;

    return 0;
}
