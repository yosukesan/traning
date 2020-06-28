
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

ll _pow2(ll a)
{
    return a*a;
}

const double EPS (0.0);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll txa, tya, txb, tyb, t, v, n;
    cin >> txa >> tya >> txb >> tyb >> t >> v;
    cin >> n;
    vector<ll> x(n), y(n); 
    rep(i,0,n) cin >> x[i] >> y[i];

    double dist (v*t);
    rep(i, 0, n)
    {
        double to = sqrt(_pow2(txa - x[i]) + _pow2(tya-y[i]));
        double from = sqrt(_pow2(txb - x[i]) + _pow2(tyb-y[i]));

        //cout << to << ' ' << from << endl;

        if (to + from <= EPS + dist)
        {
            cout << "YES" << endl;        
            return 0;
        } 
    }

    cout << "NO" << endl;        
    
    return 0;
}
