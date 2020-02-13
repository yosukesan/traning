
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
    unordered_map<ll, ll> h;
    rep(i,0,n)
    {
        ll a;
        cin >> a;
        ++h[a];
    }

    bool is_uniq(true);
    for (auto i: h) 
        if (i.second > 1)
            is_uniq = false;

    if (is_uniq)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    
            

    return 0;
}
