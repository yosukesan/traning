
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
    ll n;
    cin >> n;

    vector<ll> h(n);

    for (auto &i: h)
        cin >> i;

    ll ans(0);
    ll c(0);
    for (ll i=n-1; i>=1; i--)
    {
        //cout << h[i] << ' ' << h[i-1] <<  ' ';

        if (h[i-1] >= h[i])
        {
            c++;
        }
        else
        {
            ans = max(c, ans);
            c = 0;
        }
    }

    ans = max(c, ans);

    cout << ans << endl;

    return 0;
}
