
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

    string s, t, tmp;
    cin >> s >> t;
    rep(i,0,t.size()) if (t[i]!=' ') tmp+=t[i];
    rep(i,0,s.size()) if (s[i]!=' ') tmp+=s[i];
    cout << tmp << endl;;
    return 0;
}
