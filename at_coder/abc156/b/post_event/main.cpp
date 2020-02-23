
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

    ll cnt(0);
    vector<ll> num;
    while (n>0)
    {
        num.push_back(n % k);
        n /= k, cnt++;
    }

    //sort(num.begin(), num.end());
    //for (auto i: num)
    //    cout << i;
    //cout << endl;

    cout << cnt << endl;

    return 0;
}
