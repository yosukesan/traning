
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    ll n, l;
    cin >> n >> l;

    vector<ll> t(n);

    iota(t.begin(), t.end(), l);

    //for (auto i: t)
    //    cout << i << endl;

    ll _min(LL_MAX), id;
    rep(i, 0, n) 
        if (abs(t[i]) < _min)
            _min = abs(t[i]), id = i;
        //_min = min(abs(t[i]), _min);

    ll sum(0);
    rep(i, 0, n) 
        if (i != id)
            sum += t[i];

    cout << sum << endl;

    return 0;
}
