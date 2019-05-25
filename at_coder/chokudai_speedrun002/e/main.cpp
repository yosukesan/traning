
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>

typedef long long ll;

using namespace std;

int main()
{
    ll n;

    cin >> n;
    ll out = 0;
    ll* a = new ll[n];
    ll* b = new ll[n];

    for (ll i=0; i<n; ++i)
        cin >> a[i] >> b[i];

    for (ll i=0; i<n; ++i)
    {
        if (a[i] >= b[i]*2) out += b[i];
        else if (a[i]/2 <= b[i]) out += a[i]/2;
    }

    cout << out << endl;

    return 0;
}
