
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
    vector<ll> part[100010];

    for (auto &i: a)
        cin >> i;

    ll num_colour (0);
    for (ll i=0; i<n-1; i++)
    {
        part[num_colour].push_back(a[i]);
        if (a[i] >= a[i+1])
        {
            num_colour++;    
        }
    }
    if (a[n-1] >= a[n])
    {
        num_colour++;    
        part[num_colour].push_back(a[n]);
    }

    for (ll i=0; i<num_colour; i++)
    {
        for (auto j: part[i])
            cout << j << ' ';

        cout << endl;
    }

    cout << num_colour << endl;

    return 0;
}
