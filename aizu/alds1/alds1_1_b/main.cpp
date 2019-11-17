
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll gcd(ll a, ll b)
{
    if (a < b) swap(a, b);

    ll c;
    while ((c=a%b))
    {
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    ll x, y;
    cin >> x >> y;

    cout << gcd(x, y) << endl;

    return 0;
}
