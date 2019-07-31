
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

    vector<ll> h(n);

    for (auto &i: h)
    {
        cin >> i;
    }

    sort(h.begin(), h.end());

    ll min (1E+16);
    ll tmp (0);
    for (ll i=0; i<n-k+1; i++)
    {
        //cout << h[i] << " " << h[i+k-1] << endl;

        tmp = h[i+k-1] - h[i];     
        if (tmp < min)
        {
            min = tmp;
        }
    }

    cout << min << endl;

    return 0;
}
