
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
    ll n, x;
    cin >> n >> x;

    ll k (1);
    for (ll i=1; i<n; i++)
    {
        k = k*2 + 3;
    }
    //cout << k << endl;

    return 0;
}
