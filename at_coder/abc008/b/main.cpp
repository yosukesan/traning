
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
    map<string, ll> s;

    rep(i,0,n)
    {
        string tmp;
        cin >> tmp;
        s[tmp]++;
    }

    pair <ll, string> c;
    c.first = 0;
    for (auto i: s)
        if (c.first < i.second)
            c.first = i.second, c.second = i.first;

    cout << c.second << endl;

    return 0;
}
