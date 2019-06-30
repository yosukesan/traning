
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

    vector<ll> d(n);

    for(ll i=0; i<n; ++i) 
        cin >> d[i];

    sort(d.begin(), d.end());

    ll i(0), j(n-1);
    while (1)
    {
        if (i >= j)
            break;

        i++, j--;
    }

    cout << d[i] - d[j] << endl;

    return 0;
}
