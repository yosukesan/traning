
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
using Graph = vector<vector<ll>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    Graph g(n);

    rep(i,0,n)
    {
        ll from, k, to;    
        cin >> from >> k; 
        --from;
        rep(j,0,k)
        {
            cin >> to;
            --to;
            g[from].push_back(to); 
        }
    }
        
    //for (auto l: g)
    //{
    //    for(auto i: l)
    //        cout << ' ' << i;
    //    cout << endl;
    //}
    
    vector<vector<ll>> matrix(n, vector<ll>(n, 0));
    
    ll row(0); 
    for (auto l: g)
    {
        for (auto i: l)
            matrix[row][i] = 1;
        ++row;
    }

    rep(j,0,n)
    {
        rep(i,0,n)
            if (i!=n && j!=n)
                cout << matrix[j][i] << ' ';
            else
                cout << matrix[j][i];

        cout << endl;
    }
    return 0;
}
