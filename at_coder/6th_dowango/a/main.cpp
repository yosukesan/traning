
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

    ll n;
    cin >> n;

    vector<pair<string, ll>> l;

    string ts;
    ll tmp;
    rep(i,0,n) cin >> ts >> tmp, l.push_back({ts, tmp});

    string x;
    cin >> x;

    ll t(0); 
    bool f(false);
    for (auto i: l)
    {
        if (f) t+=i.second;

        if (!f && i.first==x)
            f = true;
    }

    cout << t << endl;

    return 0;
}
