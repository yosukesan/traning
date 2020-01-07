
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    vector<ll> ptr(s.size(), 0);

    ll s0(0), s1(0);
    rep(i,0,s.size())
    {
        if (s[i] == '0') s0++; 
        if (s[i] == '1') s1++; 
    }

    cout << 2*min(s0, s1) << endl;

    return 0;
}
