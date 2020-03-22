
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
#include <tuple>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

using T = tuple<ll,ll>;
using Graph = vector<vector<T>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    map<ll, ll> hmap; 
    rep(i, 0, n)
        ++hmap[a[i]];


    //for (auto i: hmap)
    //    cout << i.first << ' ' << i.second << endl;

    rep(i, 0, n)
    {
        ll sum = 0;
        if (hmap[a[i]] < 2) 
        {
            cout << 0 << endl;
        }
        else
        {
            for (auto k: hmap)
            {
                if (k.first!=a[i])
                {
                    sum += (k.second-1) * (k.second-2) / 2;
                    cout << k.second << ", sum = " << sum << endl;
                }
                else
                {
                    cout << k.second << "sum = " << sum << endl;
                    sum += (k.second) * (k.second-1) / 2;
                }
            }

            cout << sum << endl;
        }
    }

    return 0;
}
