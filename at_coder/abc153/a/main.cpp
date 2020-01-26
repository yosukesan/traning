
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
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll h ,a;
    cin >> h >> a;

    ll cnt(0);
    while(true)
    {
        h -= a;
        cnt++;
        if (h <= 0) break;
    }

    cout << cnt << endl;

    return 0;
}
