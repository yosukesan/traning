
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

    ll s, l, r;
    cin >> s >> l >> r;

    if (l <= s && s <= r)
    {
        cout << s << endl;
        return 0;
    }

    if (abs(s-l) > abs(s-r))
        cout << r << endl;
    else
        cout << l << endl;

    return 0;
}
