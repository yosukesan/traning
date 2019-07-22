
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
    ll n, d;

    cin >> n >> d;

    ll x[11][11];

    for (ll j=0; j<n; j++)
    {
        for (ll i=0; i<d; i++)
        {
            cin >> x[j][i]; 
       }
    }

    ll count (0);
    for (ll j=0; j<n; j++)
    {
        for (ll i=j+1; i<n; i++)
        {
            float dist (0); 
            for (ll l=0; l<d; l++)
            {
                dist += pow(x[j][l] - x[i][l], 2);
            }

        dist = sqrt(dist);
        if (dist == floor(dist))
            count++;

        }
    }

    cout << count << endl;
    
    return 0;
}
