
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

ll c(0);

void dfs(const ll& size,  vector<vector<ll>>& g, vector<ll>* ans, const ll& start, const ll& parent=-1)
{
    if (c > size)
        return;

    c++;

    cout << start << endl;

    ll i = g[start][1];
    {
        if (i != parent) 
        {
            //ans->at(i) += ans->at(start);
            dfs(size, g, ans, i, start);
        }
    }
}

int main()
{
    ll n, q;

    cin >> n >> q;

    vector<vector<ll>> p(n+q, vector<ll>(2)); 
    vector<ll> ans(n, 0);

    rep(i, 0, n-1)
        rep(j, 0, 2)
            cin >> p[i][j], p[i][j]--;

    rep(i, n-1, n+q-1)
        rep(j, 0, 2)
            cin >> p[i][j];

    rep(i, n-1, n+q-1)
        ans[p[i][0]] += p[i][1]; 

    dfs(n-1, p, &ans, 0); 

    //for (auto i: ans)
    //    cout << i << endl;

    return 0;
}
