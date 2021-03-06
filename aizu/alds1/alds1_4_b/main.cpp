
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vector<ll> s(n);
    rep(i,0,n) cin >> s[i];
    ll q;
    cin >> q;
    vector<ll> t(q);
    rep(i,0,q) cin >> t[i];

    ll cnt(0);
    for (auto i: t) 
        if (binary_search(s.begin(), s.end(), i))
            cnt++;

    cout << cnt << endl;
 
    return 0;
}
