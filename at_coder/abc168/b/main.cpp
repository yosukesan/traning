
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

    ll k;
    string s;
    cin >> k >> s;

    //cout << k << ' ' << s.size() << endl;

    if (k<s.size())
    {
        rep(i,0,k) cout << s[i];
        cout << "..." << endl;
    }
    else
    {
        rep(i,0,s.size()) cout << s[i];
        cout << endl;
    }

    return 0;
}
