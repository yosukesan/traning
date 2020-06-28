
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

    ll n;
    cin >> n;
    ll a[4] = {0};

    a[2] = 1;

    if (n==3)
        a[3] = a[2];

    rep(i,4,n+1)
    {
        a[3] = (a[2] + a[1] + a[0]) % 10007;
        a[0] = a[1];
        a[1] = a[2];
        a[2] = a[3];
    }

    cout << a[3] << endl;

    return 0;
}
