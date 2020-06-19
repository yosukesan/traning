
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

    ll k, a, b;
    cin >> k;
    cin >> a >> b;

    if (a == b)
    {
        if (a%k==0) cout << "OK" << endl;
        else cout << "NG" << endl;
        return 0;
    }

    for (ll i=1; i<=1000; i++)
    {
        if (i%k==0 && (a<=i && i<=b))
        {
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;

    return 0;
}
