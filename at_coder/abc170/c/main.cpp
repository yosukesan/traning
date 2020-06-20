
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

    ll x, n;
    cin >> x >> n;
    set<ll> p;

    rep(i,0,n)
    {
        ll cache;
        cin >> cache; p.emplace(cache);
    }

    pair<ll,ll> closest(LL_MAX, 0);
    rep(i,-1,105)
        if(p.find(i)==p.end())
        {
            if (abs(x-i) < closest.first)
                closest.second = i, closest.first = abs(x-i);
        }

    cout << closest.second << endl;
 
    return 0;
}
