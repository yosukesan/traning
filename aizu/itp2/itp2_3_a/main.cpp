
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a, b, c;
    cin >> a >> b >> c;

    ll _min, _max;

    _min = min(a, b);
    _min = min(_min, c);

    _max = max(a, b);
    _max = max(_max, c);

    cout << _min << ' ' << _max << endl;

    return 0;
}
