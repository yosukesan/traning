
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
    ll n, k;

    cin >> n >> k;

    if (abs(n%k) != 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
