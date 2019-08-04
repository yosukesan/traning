
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

    if (n == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }

    for (auto &i: h)
        cin >> i;

    for (ll i=0; i<n-1; i++)
    {
        if (h[i] < h[i+1])
        {
            h[i+1] = h[i+1] - 1;
        }

        if (h[i] > h[i+1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
