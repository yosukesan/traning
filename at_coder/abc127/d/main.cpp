
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
    ll n, m;
    vector<ll> a, b, c;
    ll tmp;

    cin >> n >> m;
    for (ll i=0; i<n; ++i)
        cin >> tmp, a.push_back(tmp);

    for (ll i=0; i<m; ++i)
    {
        cin >> tmp, b.push_back(tmp);
        cin >> tmp, c.push_back(tmp);
    }

    
    //sort(c.begin(), c.end(), greater<ll>());
    //sort(a.begin(), a.end(), less<ll>());

    cout << c[0] << ' ' << a[0] << endl;
   

    return 0;
}
