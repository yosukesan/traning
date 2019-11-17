
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

#define rep(i, s, e) for(ll i=(s); i<(e); i++)
const ll LL_MAX (1LL << 60);

using namespace std;

int main()
{
    ll n;
    cin >> n;

    vector<ll> r(n);

    rep(i, 0, n) cin >> r[i];

    ll min(LL_MAX); 
    ll profit (-LL_MAX);
    rep(i,0,n-1)
    {
        if (min > r[i])
            min = r[i];

        ll p = r[i+1]-min;

        if (p > profit)
        profit = p;
    }

    cout << profit << endl;    

    return 0;
}
