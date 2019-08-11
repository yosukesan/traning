
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
    ll n, a;
    cin >> n;

    ll _min(INT_MAX), _max(INT_MIN), _sum(0);
    for (ll i=0; i<n; i++)
    {
        cin >> a;

        _min = min(_min, a);
        _max = max(_max, a);
        _sum += a;
    }

    cout << _min << ' ' << _max << ' ' << _sum << endl;

    return 0;
}
