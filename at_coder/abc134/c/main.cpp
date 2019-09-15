
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

    vector<ll> sorted(a);

    sort(sorted.begin(), sorted.end(), greater<ll>());

    ll j (0);
    for (ll i=0; i<n; ++i)    
    {
        if (a[i] != sorted[j])
        {
            cout << sorted[j] << endl; 
        }
        else
        {
            cout << sorted[j+1] << endl; 
        }
    }

    return 0;
}
