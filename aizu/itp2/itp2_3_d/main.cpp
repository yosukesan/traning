
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
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

    ll n,m;
    cin >>n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];
    cin >> m;
    vector<ll> b(m);
    rep(i,0,m) cin >> b[i];

    ll lim ((a.size() < b.size()) ? a.size() : b.size());

    ll ans (0);
    //cout << lim << endl;
    rep(i,0,lim) if(a[i] < b[i]){ans = 1; break;}

    cout << ans << endl;

    return 0;
}
