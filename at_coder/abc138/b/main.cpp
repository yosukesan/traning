
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

    vector<ll> a(n);

    for (ll i=0; i<n; i++)
           cin >> a[i]; 

    double denm(0);

    for (ll i=0; i<n; i++)
        denm += (1.0 / a[i]);

    cout << 1.0 / denm << endl;


    return 0;
}
