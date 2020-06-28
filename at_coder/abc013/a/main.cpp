
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a[3], b[3];
    rep(i,0,3) cin >> a[i];
    rep(i,0,3) cin >> b[i];

    ll ans(0); 

    ans = max((a[0]/b[0]) * (a[1]/b[1]) * (a[2]/b[2]), ans);
    ans = max((a[0]/b[1]) * (a[1]/b[2]) * (a[2]/b[0]), ans);
    ans = max((a[0]/b[2]) * (a[1]/b[0]) * (a[2]/b[1]), ans);
    ans = max((a[0]/b[1]) * (a[1]/b[0]) * (a[2]/b[2]), ans);
    ans = max((a[0]/b[2]) * (a[1]/b[1]) * (a[2]/b[0]), ans);
    ans = max((a[0]/b[0]) * (a[1]/b[2]) * (a[2]/b[1]), ans);

    cout << ans << endl;

    return 0;
}
