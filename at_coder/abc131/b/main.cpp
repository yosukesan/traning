
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
    ll n, l;
    vector<ll> taste;
    cin >> n >> l;

    for (ll i=0; i<n; ++i)
    {
        taste.push_back(l+i);
    }

    ll smallest (999999999);
    ll index;
    for (ll i=0; i<n; ++i)
    {
            if (abs(taste[i]) < smallest)
            {
                smallest = abs(taste[i]);
                index = i;
            }
    }

    ll sum (0);
    for (ll i=0; i<n; ++i)
    {
            if (i != index)
                sum += taste[i];
    }

    cout << sum << endl;

    return 0;
}
