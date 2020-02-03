
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
    cin >>n>>k;
    vector<ll> l(n);
    rep(i,0,n) cin >> l[i];
    
    sort(l.begin(), l.end(), greater<ll>()); 

    ll s(0);
    rep(i,0,k)
        s += l[i];

    cout << s << endl;
    
    return 0;
}
