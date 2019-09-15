
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
    ll p, q, r;
    cin >> p >> q >> r;

    ll ans = 0;

    ans = p + q;

    if (ans > q+r)
            ans = q+r;

    if (ans > r+p)
            ans = r+p;

    cout << ans << endl;

    return 0;
}
