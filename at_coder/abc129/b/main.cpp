
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <climits>

typedef long long ll;

using namespace std;

int main()
{
    ll n, w[110];
    vector<ll> s;

    cin >> n;
    for (ll i=0; i<n; ++i)
            cin >> w[i];

    for (ll j=0; j<n; j++)
    {
        ll sum_a = 0;
        ll sum_b = 0;
        for (ll i=0; i<j; i++)
        {
            sum_a += w[i];
        }
        for (ll i=j; i<n; i++)
        {
            sum_b += w[i];
        }
        if (sum_a - sum_b >= 0)
        {
            cout << sum_a - sum_b << endl;
            return 0;
        }
    }

    return 0;
}
