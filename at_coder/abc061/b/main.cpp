
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

    ll n, m;
    cin >>n>>m;

    vector<ll> a(m), b(m);

    rep(i,0,m)
        cin >> a[i] >> b[i], a[i]--, b[i]--;

    vector<ll> r(n, 0);

    rep(i,0,m)
        r[a[i]]++, r[b[i]]++;
       
    rep(i,0,n)
        cout << r[i] << endl;

    return 0;
}
