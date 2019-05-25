
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

    ll* a = new ll[n];
    ll* b = new ll[n];
    set<pair<ll, ll>> s;

    for (ll i=0; i<n; ++i)
        cin >> a[i] >> b[i];

    for (ll i=0; i<n; ++i) 
    {
        if (b[i] > a[i])
            swap(a[i], b[i]);

        s.insert(make_pair(a[i], b[i]));
    }

    cout << s.size() << endl; 

    return 0;
}
