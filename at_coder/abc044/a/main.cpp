
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
    ll n, k, x, y;
    cin >> n >> k >> x >> y;

    ll sum(0); 

    for (ll i=1; i<=n; i++)
    {
        sum += (i > k) ? y : x;
    }

    cout << sum << endl;

    return 0;
}
