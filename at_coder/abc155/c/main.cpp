
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
    cin >>n;
    unordered_map<string, ll> m;
    rep(i,0,n)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    ll _max(-LL_MAX);
    for (auto i: m)
        _max = max(_max, i.second); 

    //multimap<ll, string> ord;
    vector<string> ans;
    for (auto i: m)
        if (_max==i.second) ans.push_back(i.first);
        //if (_max==i.second) ord.emplace(i.second, i.first);

    sort(ans.begin(), ans.end());

    for (auto c: ans)
        cout << c << endl;
    return 0;
}
