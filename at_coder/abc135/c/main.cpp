
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

    vector<ll> a(n+1);
    vector<ll> b(n);

    for (auto &i: a)
        cin >> i;

    for (auto &i: b)
        cin >> i;


    ll counter (0);
    for (ll i=n-1; i>=0; i--)
    {
        ll rmd = a[i+1] - b[i];
        counter += b[i] + rmd;
        if (rmd < 0)
        {
            b[i] += rmd;
            a[i+1] = 0;
        }

        for (auto i: a)
            cout << i << " ";

        cout << endl;


        rmd = a[i] - b[i];
        counter += b[i] + rmd;
        if (rmd < 0)
        {
            b[i] += rmd;
            a[i] = 0;
        }

        for (auto i: a)
            cout << i << " ";

        cout << endl;
    }

    cout << counter << endl;

    return 0;
}
