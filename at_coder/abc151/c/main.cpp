
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<ll> p(m);
    vector<string> s(m);

    rep(i,0,m) cin >> p[i] >> s[i];
    rep(i,0,m) --p[i];

    vector<ll> ac(n);
    vector<ll> wa(n);

    ll sum_ac(0), sum_wa(0);
    rep(i,0,m)
    {
        if (ac[p[i]] != 0) continue; 

        if ("AC" == s[i])
            ac[p[i]]++, sum_wa+=wa[p[i]];

        if ("WA" == s[i])
            wa[p[i]]++;
    }

    rep(i,0,n) sum_ac+=ac[i];
    //rep(i,0,n) sum_wa+=wa[i];

    cout << sum_ac << " " << sum_wa << endl;

    return 0;
}
