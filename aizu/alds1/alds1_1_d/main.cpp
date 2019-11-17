
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

#define rep(i, s, e) for(ll i=(s); i<(e); i++)
const ll LL_MAX (1LL << 60);

using namespace std;

int main()
{
    ll n;
    cin >> n;

    vector<ll> r(n);

    rep(i, 0, n) cin >> r[i];

    pair<ll, ll> _max (make_pair(-LL_MAX,0)), _min(make_pair(LL_MAX,0));

    rep(i, 0, n){
            if (r[i] < _min.first)
                _min = make_pair(r[i], i);
    }

    cout << _min.first << ' ' << _min.second << endl;

    rep(i, _min.second, n){
            if (r[i] > _max.first)
                _max = make_pair(r[i], i);
    }

    cout << _max.first << ' ' << _max.second << endl;

    //ll sgn = (_max.second > _min.second) ? 1 : -1;
    //if (_max.second == _min.second) sgn = 0;
    
    cout << _max.first - _min.first << endl;    

    return 0;
}
