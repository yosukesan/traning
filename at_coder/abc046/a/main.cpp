
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
    ll p[3];
    vector<ll> hash(105, 0);

    rep(i, 0, 3) cin >> p[i];

    rep(i, 0, 3)
        hash[p[i]] = 1; 

    cout << count_if(hash.begin(), hash.end(), [](ll x){return x > 0;}) << endl;

    return 0;
}
