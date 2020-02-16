
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
   
    ll n, q; 
    cin >> n >> q;
    string s;
    cin >> s;
    vector<ll> l(q), r(q);
    rep(i,0,q) cin >> l[i] >> r[i];
    rep(i,0,q) --l[i], --r[i];

    vector<ll> acm(n+1, 0);
    rep(i,0,n) 
    {
        if (s[i]=='A' && s[i+1]=='C')
            acm[i+1] = acm[i]+1;
        else
            acm[i+1] = acm[i];
    }

    //for (auto l: acm)
    //    cout << ' ' << l;
    //cout << endl;

    rep(i,0,q)
        cout << acm[r[i]] - acm[l[i]] << endl;

    return 0;
}
