
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
#include <tuple>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

using T = tuple<ll,ll>;
using Graph = vector<vector<T>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);

    rep(i,0,n)
        cin >> a[i];

    ll accm = 0;
    rep(i,0,n)
        accm += a[i];

    //cout << accm << " " << m << endl;

    ll cnt(0);
    rep(i,0,n)
        if (a[i] >= accm/(4.0*m))
            ++cnt;

    //cout << cnt << endl;

    if (m <= cnt)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
