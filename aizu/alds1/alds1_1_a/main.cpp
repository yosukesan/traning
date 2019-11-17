
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

    for (auto &i: a)
        cin >> i;

    for (ll i=0; i<n-1; i++)
    {
        for (ll k=0; k<n; k++)
            cout << a[k] << ' ';

        for (ll j=i+1; j<n; j++)
            if (a[i]>a[j]){
                swap(a[i], a[j]);
            }
        cout << endl;
    }
    for (ll k=0; k<n; k++)
    {
        cout << a[k];
        if (k != n-1) cout << ' ';
    }
    cout << endl;

    return 0;
}
