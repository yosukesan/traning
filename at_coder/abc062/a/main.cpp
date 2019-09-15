
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
    ll x, y;
    cin >> x >> y;

    set<ll> a({1,3,5,7,8,10,12});
    set<ll> b({4,6,9,11});
    set<ll> c({2});

    if (a.find(x) != a.end() && a.find(y) != a.end())
        cout << "Yes" << endl;

    else if (b.find(x) != b.end() && b.find(y) != b.end())
        cout << "Yes" << endl;

    else
        cout << "No" << endl;

    return 0;
}
