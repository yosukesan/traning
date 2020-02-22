
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >>n;
    vector<ll> x(n);
    rep(i,0,n) cin >> x[i];

    vector<ll> accm(n,0);

    ll p;

    ll _max(-LL_MAX);
    rep(i,0,n)
        _max = max(_max, x[i]);

    vector<ll> coord(_max);
    iota(coord.begin(),coord.end(),1);

    vector<ll> xx = x;
    sort(xx.begin(), xx.end());

    ll ans, tmp, target=(*xx.begin()+*xx.end())/2, prev(LL_MAX);
    while (true)
    {
        tmp = 0;

        rep(j,0,n)
        {
            tmp += pow(x[j]-target, 2); 
        }

        if (prev == tmp)
            break;

        if (prev < tmp)
        {
            target /= 2;
        }
        else
        {
            target *= 2;
        }
        prev = tmp;
    }

    ans = target;
    cout << ans << endl;

    return 0;
}
