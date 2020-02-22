
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

using ll = unsigned long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, k;
    cin >> n >> k;

    ll y(0), cnt(0);
    for (ll i=0;n>0;i++)
    {
        ll z = n%k;
        y += z*pow(10,i);
        //cout << n << ' ' << k << endl;
        n = n/k;
        cnt++;
    }

    //cout << y << endl;
    //cout << to_string(y).size() << endl;
    cout << cnt << endl;

    return 0;
}
