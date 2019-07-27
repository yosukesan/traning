
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
    ll a, b;
    cin >> a >> b;

    if (a > b) swap(a, b);

    for (ll i=a; i<=b; i++) 
    {
        if (abs(a - i) == abs(b - i))
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
