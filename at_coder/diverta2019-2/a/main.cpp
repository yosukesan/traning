
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

    if (k == 1)
        cout << 0 << endl;
    else
        cout << n - k << endl;

    return 0;
}
