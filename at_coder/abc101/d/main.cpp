
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll S(ll n)
{
    string s(to_string(n));

    ll sum (0);
    for (auto i: s)
        sum += i - 48;

    //cout << "Sunuk:" <<  sum << endl;

    return sum;
}

int main()
{
    ll k;
    cin >> k;

    ll count(0);
    ll i(1);
 
    while (count < k) 
    {
        for (ll m=1; m<i; m++)
        {
            if (i/S(i) <= m/S(m))
            {
                cout << m/S(m) << endl;
                count++;
            }
        }
        i++;
    }

    return 0;
}
