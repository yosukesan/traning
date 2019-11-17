
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <queue>
#include <unordered_set>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, tmp;
    cin >>n;
    set<ll> a;
    rep(i,0,n) cin >> tmp, a.insert(tmp);

    ll m;
    cin >> m;
    set<ll> b;
    rep(i,0,m) cin >> tmp, b.insert(tmp);

    //for (auto i:a) cout << i << endl;
    //cout << endl;
    //for (auto i:b) cout << i << endl;
    //cout << endl;

    set<ll> ans;

    set_difference(a.begin(), a.end(),
                   b.begin(), b.end(),
                   inserter(ans, ans.end()));
    
    for(auto i: ans) 
        cout << i << endl;

    return 0;
}
