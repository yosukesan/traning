#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ll n;
 
    cin >> n;
 
    ll* a = new ll[n];
    ll* b = new ll[n];
 
    for (ll i=0; i<n; ++i)
        cin >> a[i] >> b[i];
 
    ll m = 0;
    for (ll i=0; i<n; ++i)
        m += max(a[i], b[i]);

    cout << m << endl;
 
    return 0;
}
