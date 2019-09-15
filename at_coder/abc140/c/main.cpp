
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
    ll n;
    cin >> n;

    vector<ll> b(n);

    rep(i, 0, n-1)
        cin >> b[i];

    vector<ll> a(n+1, 0);

    a[0] = b[0];
    rep(i, 1, n)
    {
        a[i] = b[i-1];

        if (b[i] < b[i-1])
            a[i] = b[i];
    }
    a[n-1] = b[n-2];

    ll sum (0);
    rep(i, 0, n)
    {
        //cout << a[i] << endl;
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}
