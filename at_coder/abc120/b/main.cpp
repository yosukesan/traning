
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

int main()
{
    ll a, b, k;
    cin >> a >> b >> k;
    k--;

    ll d ((a > b)? a : b); 
    vector<ll> factors;
    rep(i, 1, d+1)
    {
        if (a%i == 0 && b%i == 0)
            factors.push_back(i);
    }

    reverse(factors.begin(), factors.end());

    cout << factors[k] << endl;

    return 0;
}
