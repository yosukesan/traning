
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
    ll n, x;

    while (cin >> n >> x)
    {
        ll count (0);

        if (n == 0 && x == 0)
            break;

        for (ll i=n; i>=1; i--)
        {
            for (ll j=i; j>=1; j--)
            {
                for (ll k=j; k>=1; k--)
                {
                    ll ans = i + j + k;
                    if ( i != j && j != k && ans == x)
                    {
                        //cout << i << j << k << ans << endl;
                        count++;
                    }
                }    
            }    
        }

       cout << count << endl;

    }

    return 0;
}
