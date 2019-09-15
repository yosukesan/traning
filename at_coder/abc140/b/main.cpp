
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    ll n;
    cin >> n;

    vector<vector<ll>> a(51, vector<ll>(51, 0));

    rep(j, 0, 3) 
        rep(i, 0, n) 
            cin >> a[j][i];

    rep(i, 0, n) 
        a[0][i]--;

    ll sum(0);
    ll prev(a[0][0]);

    rep(i,0,n)
    {
        sum += a[1][a[0][i]];
        if (prev+1 == a[0][i]) sum += a[2][a[0][i-1]];
        prev = a[0][i];
    }

    cout << sum << endl;

    return 0;
}
