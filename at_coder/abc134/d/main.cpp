
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

    for (auto &i : a)
        cin >> i;

    vector<ll> b;

    for (ll i = n; i>0; i--)
    {
        ll sum(0);
        for (ll j=i; j<n; j+=j)
        {
            cout << j << ' ' << i << endl;
            if (j % i == 0)
            {
                sum += a[j];
            }
        }

        ll eval = sum % 2;
        if (eval == a[i])
        {
            cout << eval << endl;
            if (eval != 0)
            {
                b.push_back(i+1);
            }
        }
    }

    cout << b.size() << endl;
    for (auto i: b)
        cout << i << ' ';

    cout << endl;

    return 0;
}
