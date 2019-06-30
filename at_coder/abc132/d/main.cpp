
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef unsigned long long ll;

using namespace std;

ll combination (const ll& n, ll r)
{
    if (r * 2 > n) r = n - r;

    ll denm = 1;
    ll neum = 1;

    for (ll i=1; i<=r; ++i)
    {
        neum *= (n-i+1);    
        denm *= i;   
    }

    return neum / denm;
}

int main()
{
    const ll LIM = 1000000000+7;
    ll n, k;
    cin >> n >> k;

    for (ll i=0; i<k; i++)
    {
        ll num = combination(n-2, i+1);

        cout << num % LIM << endl;
    }

    return 0;
}
