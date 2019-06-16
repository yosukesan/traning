
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
    vector<ll> l;
    ll tmp;

    cin >> n >> x;
    for (ll i=0; i<n; ++i)
        cin >> tmp, l.push_back(tmp);

    ll d = 0;
    ll counter;

    //cout << d << endl;
    for (ll i=0; i<n; ++i)
    {
        //cout << d + l[i] << endl;
        d = d + l[i];

        if (d <= x)
        {
            counter++;
        }
        else
            break;
    }

    cout << ++counter << endl;

    return 0;
}
