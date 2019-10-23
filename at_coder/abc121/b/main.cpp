
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
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m ,c;
    cin >>n>>m>>c;

    vector<ll> b(m, 0);
    vector<vector<ll>> a(m, vector<ll>(n, 0));

    rep(i,0,m)
        cin >> b[i];

    rep(j,0,n)
        rep(i,0,m) cin>>a[i][j];

    //rep(j,0,n)
    //    rep(i,0,m) cout << a[i][j];

    ll cnt(0);
    rep(j,0,n)
    {
        ll dot(0);
        rep(i,0,m) dot += a[i][j] * b[i];

        dot += c;

        if(dot > 0) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
