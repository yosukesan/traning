
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>

typedef long long ll;

using namespace std;

int main()
{
    ll r, d, x;
    cin >> r >> d >> x;

    for (ll i=0; i<10; ++i)
        x = r * x - d, cout << x << endl;

    return 0;
}
