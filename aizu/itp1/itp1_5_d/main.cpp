
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

void call (const int& n)
{
    for (ll i=3; i<=n; ++i)
    {
        if (i % 3 == 0 || i % 10 == 3 || (i / 10) % 10 == 3)
            cout << ' ' << i;
    }

    cout << endl;
}

int main()
{
    ll n;
    cin >> n;

    call (n);

    return 0;
}
