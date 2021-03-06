
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

    ll n, k;
    cin >>n>>k;

    vector<ll> h(n);

    rep(i,0,n) cin >> h[i]; 

    ll c(0);
    rep(i,0,n) if (h[i] >= k) c++;

    cout << c << endl;

    return 0;
}
