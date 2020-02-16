
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

    string s (to_string(n));

    //reverse(n.begin(), n.end());

    ll cnt(0);
    rep(i,0,s.size())
        cnt ++;

    if (s[0]-'0' >= 5)
        cnt++;
   
    //cout << s << endl;
    //cout << n << endl;
    
    return 0;
}
