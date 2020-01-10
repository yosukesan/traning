
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
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >>n;
    vector<ll> p(n), q(n);
    rep(i,0,n) cin >> p[i];
    rep(i,0,n) cin >> q[i];

    vector<ll> v(n); 
    iota(v.begin(), v.end(),1);

    ll a, b, cnt(0);
    do {
        cnt++;
        if (p == v) a = cnt;
        if (q == v) b = cnt;
    } while (next_permutation(v.begin(), v.end()));    

    cout << abs(a-b) << endl; 

    return 0;
}
