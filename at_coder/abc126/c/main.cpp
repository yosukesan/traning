
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

    cin >> n >> k;

    double gain (1.0 / n);
    double result (0.0);
    ll max_power (0);
    for (ll i=1; ; i++)
    {
        result = 1 * pow(2, i);  
        //cout << i << endl;

        if (result > k)
        {
            max_power = i;
            break;
        }
    }

    while (max_power > 0)
    {

    }

    cout << result << endl;
 
    return 0;
}
