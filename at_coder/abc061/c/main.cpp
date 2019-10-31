
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <vector>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin >> a[i] >> b[i];

    vector<pair<ll,ll>> v(n);
    rep(i,0,n) v[i] = make_pair(a[i], b[i]);

    sort(v.begin(), v.end());

    //rep(i,0,n)
    //    cout << v[i].first << ' ' << v[i].second << endl;

    ll pos=0, val=0;
    rep(i,0,n)
    {
        //cout << pos << ' ' << val << endl;
        if (pos>=k) break;
        pos+=v[i].second, val=v[i].first;
    }

    cout << val << endl;
        
    return 0;
}
