
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <queue>
#include <unordered_set>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, tmp;
    cin >>n;
    unordered_set<ll> a;
    rep(i,0,n) cin >> tmp, a.insert(tmp); 
    ll m;
    unordered_set<ll> b;
    cin >>m;
    rep(i,0,m) cin >> tmp, b.insert(tmp); 

    vector<ll> ans;

    if (n>m)
    {
        for (auto i:a)
            if (b.find(i) != b.end()) ans.push_back(i);
    }
    else
    {
        for (auto i:b)
            if (a.find(i) != a.end()) ans.push_back(i);
    }

    sort(ans.begin(), ans.end());

    for(auto i: ans)
        cout << i << endl;

    return 0;
}
