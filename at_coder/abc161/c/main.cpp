
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

    ll n, K;
    cin >> n >> K;

    if (K==1)        
    {
        cout << 0 << endl;
        return 0;
    }

    ll prev(LL_MAX);
    ll prev2(LL_MAX);
    while (true)
    {
        if (prev > prev2)
            break;

        //cout << prev2 << ' ' << prev << ' ' << n << endl;

        n = abs(n-K);
        prev2 = prev; 
        prev = n;
    }

    n = min(prev2, n);
    n = min(prev, n);

    cout << n << endl;

    return 0;
}
