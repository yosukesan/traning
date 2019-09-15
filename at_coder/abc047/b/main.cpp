
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
    ll w, h, n;

    cin >> w >> h >> n;

    vector<ll> t(n, vector<ll>(3))

    rep(i, 0, n)
        rep(j, 0, n)
            cin >> t[i][j]; 

    return 0;
}
