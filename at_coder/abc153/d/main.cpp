
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
typedef unsigned long long ul;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ul h;
    cin >> h;

    ul cnt(0);
    while (h>1)    
        h /=2, ++cnt;

    ++cnt;

    ll ans = -1*(1-pow(2,cnt));

    cout << ans << endl;

    return 0;
}
