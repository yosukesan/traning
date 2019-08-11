
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

    for (auto &i : a)
        cin >> i;

    for (ll i=n-1; i>=1; i--)
    {
        cout << a[i] << ' ';
    }
    cout << a[0];


    cout << endl;

    return 0;
}
