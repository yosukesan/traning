
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <map>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin>>n>>m;

    vector<ll> a(n,0), b(n,0);

    rep(i,0,n) cin>>a[i]>>b[i];

    multimap<ll, ll> s;
    rep(i,0,n) s.emplace(a[i],b[i]);

    ll sum(0), unit(0);
    for (auto i: s)
    {
        if (unit >= m) break;

        if (unit + i.second <= m)
        {
                sum += i.first * i.second;
                unit += i.second;
                //cout << unit << ' ' << sum <<  endl;
        }
        else if (i.second > (m - unit))
        {
                sum += (m-unit) * i.first;
                unit += (m - unit);
        } 
            
    }

    cout << sum << endl;

    return 0;
}
