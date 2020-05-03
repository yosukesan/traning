
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

    ll n,k;
    ll d;
    cin >> n >> k;
    vector<ll> snk(n, 0);
    rep(i,0,k)
    {
        cin >> d;
        ll h;
        rep(j,0,d)
        {
            cin >> h;
            --h;
            ++snk[h];
        }
    }

    ll ans(0);
    rep(i,0,n)
    {
        if (snk[i]==0)
            ans++;
    }    

    cout << ans << endl;

    return 0;
}
