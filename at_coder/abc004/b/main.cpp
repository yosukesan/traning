
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

    vector<vector<char>> c(4, vector<char>(4)); 
    rep(i,0,4)
        rep(j,0,4)
            cin >>c[i][j];

    //rep(i,0,4)
    //    rep(j,0,4)
    //        swap(c[i][j], c[j][i]);

    for (ll i=3; i>=0; --i)
    {
        for (ll j=3; j>=0; --j)
            cout << ' ' << c[i][j];        
        cout << endl;
    }
    
    return 0;
}
