
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>

typedef long long ll;

using namespace std;

int main()
{
    ll n, k;
    double prob = 0;

    cin >> n >> k;

    if (n >= k) 
    {
        prob += (n - (k + 1)) / static_cast<double>(n);
    }    
    {
        for (ll i=1; i<=n; ++i)
        {
            double m = i+1;
            prob += (1.0 / static_cast<double>(n)) * pow(0.5, m);
        }
    }

    cout << prob << endl;
 
    return 0;
}
