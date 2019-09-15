
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

void dfs(vector<set<ll>>& g, const ll& start, vector<bool>& visited, const ll& dropped)
{
    visited[start] = true;

    for (auto i: g[start]) 
        if (!visited[i] && i != dropped)
            dfs(g, i, visited, dropped);
}

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<set<ll>> g(m); 

    rep(j, 0, m)
    {
        ll tmp1, tmp2;
        cin >> tmp1 >> tmp2, tmp1--, tmp2--;
        g[tmp1].insert(tmp2);
        g[tmp2].insert(tmp1);
    }

    ll c(0);
    rep (i, 0, m)
    {
        cout << c++ << ": ";
        for (auto l: g[i])
            cout << l << ' ';
        cout << endl;
    }
   
    ll ans(0); 
    rep(l, 0, m)
    {
        vector<bool> visited(m, false);

        for (auto j: g[l])
            dfs(g, 0, visited, j);

        rep(i,0,m) if (!visited[i]){ ans++; break; }
    }

    cout << ans << endl;

    return 0;
}
