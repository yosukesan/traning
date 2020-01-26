
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll h, n;
    cin >> h >> n;
    vector<ll> a(n);
    rep(i, 0, n)
        cin >> a[i];

    rep(i,0,n)
    {
        h -= a[i];
    }

    if (h<=0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
