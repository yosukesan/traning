
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

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<ll> l(s.size());

    ll j(0), cnt(0);
    for (auto i: s)
    {
        if (i=='(')
            cnt++;
        else if (i==')')
            cnt--;

        l[j] = cnt;
        j++;
    }

    sort(l.begin(), l.end(),greater<ll>());

    ll sum(0);

    rep(i,0,k)
        sum += l[i];

    cout << sum << endl;

    return 0;
}
