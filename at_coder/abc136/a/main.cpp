
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
    ll a, b, c;
    cin >> a >> b >> c;

    ll diff = a - b;
    c = c - diff;

    if (c < 0)
        c = 0;
    cout << c << endl;

    return 0;
}
