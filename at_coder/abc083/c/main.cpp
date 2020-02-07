
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

ll gcd (ll a, ll b)
{
    return b ? gcd(b, a%b) : a;
}

ll lcm(ll a, ll b)
{
    return a*b/ gcd(a, b);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll x, y;
    cin >> x >> y;

    ll k=2, cnt(0);
    for (ll i=x; i<=y; i=i*k)
    {
        //cout << i << endl;
        ++cnt;     
    }

    cout << cnt << endl;
    
    return 0;
}
