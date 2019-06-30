
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
    vector<ll> p(n);

    for (ll i=0; i<n; ++i)
        cin >> p[i];

    vector<ll> sub(3);
    ll counter (0);
    for (ll i=1; i<n-1; ++i)
    {
        sub[0] = p[i-1];
        sub[1] = p[i];
        sub[2] = p[i+1];

        ll centre = sub[1]; 

        sort(sub.begin(), sub.end());

        if (centre == sub[1]) counter++;
    }

    cout << counter << endl;

    return 0;
}
