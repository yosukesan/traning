
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

    ll m;
    cin >> m;

    ll vv;
    if (m<100)
        vv = 0;
    else if (100 <= m && m <= 5000)
        vv = m/100;
    else if (6000 <= m && m <= 30000)
        vv = m/1000 + 50;
    else if (35000 <= m && m <= 70000)
        vv = (m/5000 - 6) + 80;
    else if (m > 70000)
        vv = 89;

    printf("%02d\n", vv);
        
    return 0;
}
