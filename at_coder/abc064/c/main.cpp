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
    cin >> n;
    unordered_map<ll, ll> hmap;
    rep(i,0,n)
    {
        ll a;
        cin >> a; 
    
        if (1<=a && a<400)    
            hmap[0]++; 
        else if (400<=a && a<800)    
            hmap[1]++; 
        else if (800<=a && a<1200)    
            hmap[2]++; 
        else if (1200<=a && a<1600)    
            hmap[3]++; 
        else if (1600<=a && a<2000)    
            hmap[4]++; 
        else if (2000<=a && a<2400)    
            hmap[5]++; 
        else if (2400<=a && a<2800)    
            hmap[6]++; 
        else if (2800<=a && a<3200)    
            hmap[7]++; 
        else if (a>=3200)
            hmap[8]++; 
    }
   
    ll _min(0), _max(0); 
    rep(i,0,8)
        if (hmap[i]!=0)
            _min++; 

    _max = _min + hmap[8];

    cout << max(_min,1ll) << ' ' << _max << endl;

    return 0;
}
