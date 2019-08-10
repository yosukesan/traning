
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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(n);

    for (ll i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }

    vector<vector<ll>> dp(n+10, vector<ll>(n+10));

    dp [0][0] = 0;
    for (ll i=0; i<m; i++)
    {
        if (a[i]+i < m)
        {
            ll inc = b[i][j];
        }
    }

    return 0;
}
