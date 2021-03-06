
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

    ll n;
    cin >> n;
    vector<ll> d(n);
    rep(i,0,n) cin >> d[i];
    sort(d.begin(), d.end(), greater<ll>());
    unique(d.begin(),d.end());

    ll prev(LL_MAX), cnt(0);
    for (ll i=0; i<n; i++)
    {
        if (prev <= d[i])
            break;
        prev = d[i];
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
