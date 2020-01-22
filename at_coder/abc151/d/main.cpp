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

using Grid = vector<vector<char>>;

struct Coord{
    int x;
    int y;
    Coord(){} 
    Coord(int _x, int _y): x(_x), y(_y){}
};
bool operator<(const Coord&a, const Coord&b){return a < b;}

vector<ll> grid_x = {1,0,-1,0};
vector<ll> grid_y = {0,1,0,-1};

ll h, w;

ll bfs(vector<vector<char>>& g, ll x, ll y)
{
    Grid visited(h);

    for (int i=0; i<g.size(); ++i)
        for (int j=0; j<g[i].size(); ++j)
            visited[i].push_back(0); 
    visited[y][x] = 1;

    priority_queue<Coord> q;
    q.push(Coord(x,y));

    while (!q.empty())
    {
        Coord c (q.top()); q.pop();
        //if (visited[c.y][c.x]==1) continue;

        for (int i=0; i<4; i++)
        {
            ll xx = c.x + grid_x[i];  
            ll yy = c.y + grid_y[i];  

            cout << xx << ' ' << yy << endl;

            if (xx<0 || w<=x || yy<0 || h<=y) continue;
            if (g[yy][xx] == '#') continue;

            visited[yy][xx]==1;
            q.push(Coord(xx, yy));
        }
    }

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
            cin >> c, g[j].push_back(c);

    //for (auto j: g)
    //{ 
    //    for (auto i: j)
    //    {
    //        cout << i;
    //    }
    //    cout << endl;
    //}

    ll dist(0);
    rep(j,0,h)
        rep(i,0,w)
            if (g[j][i] != '#')
               dist = bfs(g, i, j);  
    
    return 0;
}
