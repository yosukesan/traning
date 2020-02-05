
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
using Grid = vector<vector<char>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll h, w;
    cin >> h >> w;
    Grid g(h);
    
    char buf;
    rep(i,0,h)
    {
        rep(j,0,w)
            cin >> buf, g[i].push_back(buf);
    }

    bool ans(true);

    rep(i,1,h-1)
    {
        rep(j,1,w-1)
        { 
            if (g[i][j] == '#')
            {            
                bool p(false);
                p = (g[i+1][j] == '#') 
                || (g[i-1][j] == '#')
                || (g[i][j-1] == '#')
                || (g[i][j+1] == '#');
                ans &= p;
            }
        }
    }

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
