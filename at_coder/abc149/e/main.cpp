
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

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    unordered_set<pair<ll,ll>> shaked;
    sort(a.begin(), a.end(), greater<ll>()); 
  
    ll l(0), s(0);
    rep(i,0,m) 
    {
        if (shaked.find({make_pair(a[l], a[s])) != shaked.end())
            ;
    }

    return 0;
}
