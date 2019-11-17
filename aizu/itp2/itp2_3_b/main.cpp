
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

    ll n;
    cin >>n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];
    ll q;
    cin >> q;
    vector<ll> com(q), b(q), e(q);
    rep(i,0,q) cin >> com[i] >> b[i] >> e[i];

    rep(i,0,q) 
    {
        //cout << i << ' ' << com[i] << endl;
        switch(com[i])
        {
            case (0):
            {
                //cout << 0 << endl;
                ll _min(LL_MAX); 
                rep(j,b[i],e[i])
                    _min = min(a[j], _min);

                cout << _min << endl;

                break;
            }
            case (1):
            {
                //cout << 1 << endl;
                ll _max(-LL_MAX); 
                rep(j,b[i],e[i])
                    _max = max(a[j], _max);

                cout << _max << endl;

                break;
            }
            default:
                break;
        }
    }

    return 0;
}
