
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
    vector<double> v(n);

    for (ll i=0; i<n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (ll i=1; i<n; i++)
        v[i] = 0.5 *(v[i-1] + v[i]);

    cout << v[n-1] << endl;

    return 0;
}
