
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
    vector<ll> x(n);
    vector<char> c(n);
    rep(i,0,n)
        cin >> x[i] >> c[i];

    vector<ll> qb, qr;
    rep(i,0,n)
        if (c[i]=='R')
            qr.push_back(x[i]);
        else
            qb.push_back(x[i]);
  
    sort(qr.begin(), qr.end());  
    sort(qb.begin(), qb.end());  

    for (auto i: qr)
        cout << i << endl;
    for (auto i: qb)
        cout << i << endl;

    return 0;
}
