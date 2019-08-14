
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
    cin >> n >> k;

    vector<ll> a(n);

    ll p (k);
    ll _max (-0xF3F3F3F3);
    ll d (k-1);
    ll i (0);

    while (true)
    {
        _max = p + d * i;
        i++;

        if (_max >= n)
            break;

        //cout << ' ' << _max;
    }

    cout << i << endl;

    return 0;
}
