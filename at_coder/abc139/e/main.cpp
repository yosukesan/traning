
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

    vector<vector<ll>> a(n, vector<ll>(n));

    for (ll j=0; j<n; j++)
    {
        for (ll i=0; i<n; i++)
        {
            cin >> a[i][j];        
        }
    }


    return 0;
}
