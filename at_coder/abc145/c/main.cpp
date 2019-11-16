
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >>n;
    vector<ll> x(n), y(n);
    rep(i,0,n) cin >> x[i] >> y[i];

    vector<vector<ll>> v;
    comb(n,3, &v);

    return 0;
}
