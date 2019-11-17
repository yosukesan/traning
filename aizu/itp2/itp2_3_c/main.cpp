
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

    ll n;
    cin >>n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];
    ll q;
    cin >> q;
    vector<ll> b(q), e(q), k(q);
    rep(i,0,q) cin >> b[i] >> e[i] >> k[i];

    rep(i,0,q) 
    {
        ll cnt(0);
        rep(j,b[i],e[i])
            if (k[i] == a[j]) cnt++;

        cout << cnt << endl;
    }

    return 0;
}
