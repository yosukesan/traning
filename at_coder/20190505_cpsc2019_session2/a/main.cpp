
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>

typedef long long ll;

using namespace std;

int main()
{
    ll n, m;
    cin >> m >> n;

    const ll p = m/n;

    for (ll i=0; i<n-1; ++i)
        m -= p;

    cout << m << endl;    

    return 0;
}
