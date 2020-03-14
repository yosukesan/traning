
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

    ll h, w;
    cin >> h >> w;

    if (h == 1 || w == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    //ll h2 = h/2;
    ll h2 = (h % 2==0) ? h/2 : h/2+1;
    ll w2 = (w % 2==0) ? w/2 : w/2+1;

    //cout << "h2=" << h2 << endl;
    //cout << "w2=" << w2 << endl;

    cout << w2 * h2 + (w-w2) * (h-h2) << endl;
    
    return 0;
}
