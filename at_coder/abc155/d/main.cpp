
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

using Graph = vector<vector<ll>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, k;
    cin >>n>>k;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> ans;
    ll kk = k;
    rep (i,0,n)
        rep (j,0,n)
        {
            ans.push_back(a[i] * a[n-j-1]), --kk; 
            if (kk==0) goto fin;
        }  
fin:

    sort(ans.begin(), ans.end());

    cout << ans[k] <<endl;

    return 0;
}
