
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

    vector<ll> a(5);
    rep(i,0,5) cin >> a[i];
    ll k;
    cin >> k;

    bool ans(true);
    rep(i,0,5)
        rep(j,i,5){
            ll t = a[j] - a[i];
            if (t > k) ans = false;
        }

    if (ans) cout << "Yay!" << endl;
    else cout << ":(" << endl;

    return 0;
}
