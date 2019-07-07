
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
    ll l, r;
    cin >> l >> r;

    ll ans, prev = 9999999999999999;

    ans = prev;

    for (ll i=l; i<=r; i++)
    {
        for (ll j=i; j<=r; j++)
        {
            //cout << prev << ' ' << ans << endl; 
            if ((i * j) % 2019 < prev)
            {
                prev = ans;
                ans = (i * j) % 2019;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
