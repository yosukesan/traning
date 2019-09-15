
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

inline ll factorial(const ll& n)
{
    ll k(1);
    for (ll i=n; i>=1; i--)
        k *= i;

    return k;
}

inline ll permutation (const ll& n, const ll& k)
{
    return factorial(n) / factorial(k);
}

inline ll combination(const ll& n, const ll& k)
{
    return (factorial(n)/(factorial(n-k)*factorial(k)));
}

int main()
{
    ll n, k;
    cin >> n >> k;

    ll ans (1);
    rep(i, 0, n-1)
       ans *= k-1; 

    cout << ans * k << endl;

    return 0;
}
