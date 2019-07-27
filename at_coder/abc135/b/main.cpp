
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

    for (auto &i: p)
        cin >> i;

    vector<ll> sorted(p);
    sort(p.begin(), p.end());

    ll counter(0);
    for (ll i=0; i<n; i++)
    {
        if (sorted[i] - p[i]) counter++; 
    }

    if (counter <= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
