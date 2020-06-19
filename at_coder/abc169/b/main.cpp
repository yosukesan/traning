
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

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    rep(i,0,n)
    {
        if (a[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans(1); 
    constexpr ll lim (1e18);
    rep(i,0,n)
    { 
        if (a[i]<=lim/ans)
            ans *= a[i];
        else
        {
            cout << -1 << endl; 
            return 0;
        }

    }

    cout << ans << endl;
    
    return 0;
}
