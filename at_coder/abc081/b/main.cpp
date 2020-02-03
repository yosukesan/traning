
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
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll cnt (0);
    while (true)
    {
        ll shf(1);

        rep(i,0,n)
            if (a[i]%2 != 0)
                shf = shf && 0;

        //for (auto i: a)
        //    cout << ' ' << i;
        //cout << endl;


        if (!shf)
            break;
 
        if (shf)   
            rep(i,0,n)
                a[i] >>= 1;

        cnt++;
    }

    cout << cnt <<endl;

    return 0;
}
