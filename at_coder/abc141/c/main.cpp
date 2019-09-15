
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
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> a(q);

    rep(i, 0, q) cin >> a[i], a[i]--; 

    vector<ll> hash(n, 0);

    rep(l, 0, q)
        hash[a[l]]++; 

    //rep(l, 0, n)
    //    cout << hash[l] << endl;

    rep(i, 0, n)
    {
        if ((k - q + hash[i]) > 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }


    return 0;
}
