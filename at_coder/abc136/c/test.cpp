
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

    for (ll i=0; i<n-1; i++)
    {
        if (h[i] < h[i+1])
        {
            h[i+1] = h[i+1] - 1;
        }

        if (i!=0)
        {

            cout << h[i-1] << ' ' << h[i] << endl;

            if (h[i-1] < h[i])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}
