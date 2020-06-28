
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
    vector<ll> r(n);
    rep(i,0,n)
        cin >> r[i]; 

    sort(r.begin(), r.end());

    double c(0);
    rep(i,n-k,n)
    {
        c = (c+r[i])*0.5;
    }    

    printf("%10.7lf\n", c);
    
    return 0;
}