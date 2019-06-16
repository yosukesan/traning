
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    ll n, k;
    ll tmp;
    const ll size = 1000;

    cin >> n >> k;

    vector<ll> a;
    ll dp[size][size] = {0};

    for (ll i=0; i<n; ++i)
        cin >> tmp, a.push_back(tmp);

    dp[0][0] = 1;
    for (ll i=0; i<n; ++i)
    {
        for (ll j=0; j<=k; ++j)
        {
            dp[i+1][j] += dp[i][j];
            if (j >= a[i]) dp[i+1][j] += dp[i][j-a[i]];
        }
    }

    cout << dp[n][k] << endl;

    return 0;
}
