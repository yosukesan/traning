
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

typedef unsigned long long ll;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, k;
    cin >>n >> k;
    vector<ll> h(200010);
    rep(i,0,n) cin >> h[i];

    sort(h.begin(), h.end(), greater<ll>());

    rep(i,0,k) h[i] = 0;

    ll cnt(0);
    rep(i,k,n) cnt += h[i];

    cout << cnt << endl;

    return 0;
}
