
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

    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    rep(i,0,n) cin >> p[i];

    sort(p.begin(), p.end());  

    double sm_exp(0.0);
    vector<ll> acum(k+1, 0);

    rep(i,n-k,n)
        acum[i+1] = acum[i]+p[i];

    rep(i,n-k,n+1)
        cout << acum[i] << endl;

    cout << sm_exp << endl;

    return 0;
}
