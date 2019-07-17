
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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(m), b(m);
    vector<ll> island(n);

    for (ll i=0; i<m; ++i)
        cin >> a[i] >> b[i];

    for (ll i=0; i<m; ++i)
    {
        a[i] = --a[i];
        b[i] = --b[i];
    }

     
    for (ll i=0; i<m; ++i)
    {
        island[a[i]]--;
        island[b[i]]++;
    }

    for (auto i : island)
        cout << i << endl;

    ll c(0);
    for (ll i=0; i<n-1; ++i)
    {
        c += (island[i] - island[i-1]) ? 1 : 0;
    }

    cout << c << endl;

    return 0;
}
