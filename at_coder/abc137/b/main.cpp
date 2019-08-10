
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

    for (ll i=k-n+1; i<k+n; i++)
        cout << i << ' ';

    cout << endl;

    return 0;
}
