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

using Grid = vector<vector<char>> s;

vector<ll> grid_x = {1,0,-1,0};
vector<ll> grid_y = {1,0,-1,0};

ll h, w;

ll dfs(vector<vector<char>>& g, ll x, ll y, dist)
{
    for ()

    if (h + w - 1 >= dist)
        dfs(g, x, y, dist); 
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;

    Grid g (h);

    char c;
    rep(j,0,h)
        rep(i,0,h)
            cin >> c, g.push_back(c);

    ll dist(0);
    rep(j,0,h)
        rep(i,0,w)
            if (g[j][i] != '#')
                dijkstra(g, i, j, dist);  
    
    return 0;
}
