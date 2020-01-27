
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

    const ll M(10000);
    ll N, W;
    cin >> N >> W;
    vector<ll> v(N+10), w(M+10);
    rep(i,1,N+1) cin >> v[i] >> w[i];
   
    vector<vector<ll>> dp(N+10, vector<ll>(M+10, -1));   

    rep(i, 0, W+1)
        dp[0][i] = 0;

    rep(i,1,N+1)
    {
        rep(j,0,W+1)
        {
            if (j-w[i] >= 0 && j-w[i] <= W) 
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            else
                dp[i][j] = dp[i-1][j];

            //for (auto k : dp)
            //{
            //    for (auto l: k)
            //        cout << ' ' << l;
            //    cout << endl;
            //}

        }
    }

    cout << dp[N][W] << endl;
 
    return 0;
}
