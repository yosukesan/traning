
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

    ll a, b;
    cin >> a >> b;

    ll cnt(0);
    rep(i,a,b+1)
    {
        string s (to_string(i));
        ll n (s.size());
           if (s[0]==s[4] && s[1]==s[3])
            ++cnt;
    }

    cout << cnt << endl;
    
    return 0;
}
