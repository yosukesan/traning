
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;
#define LL_MAX (1<<30)

using namespace std;

int main()
{
    ll n, m;
    vector<ll> r;
    vector<ll> l;

    cin >> n >> m;

    ll tmp;
    for (ll i=0; i<m; i++)
    {
        cin >> tmp, l.push_back(--tmp);
        cin >> tmp, r.push_back(--tmp);
    }

    vector<ll> gate(n, 0);

    ll _min(-LL_MAX), _max(LL_MAX);
    for(ll i=0; i<m; i++)    
        _min=max(_min, l[i]), _max=min(_max, r[i]);

    ll ans(0);
    if (_max>=_min)
        ans = _max-_min+1;

    cout << ans << endl;

    return 0;
}
