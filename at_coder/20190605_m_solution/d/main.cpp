
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    ll tmp;
    const ll table_size = 10000;

    cin >> n;

    vector<vector<ll>> adj(table_size);
    set<pair<ll, ll>> table;

    for (ll i=0; i<=n; ++i)
    {
        string buff;
        getline(cin, buff); 

        cout << buff << ' ';
            //if (j-'0' != -16)adj[i].push_back(j-'0');
    } 

    for (ll i=0; i<=n; ++i)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    for (ll i=1; i<=n; ++i)
    {
        ll sum = 0;
        ll num;
        for (auto j : adj[i])
            num = j, sum += j;
      
        table.insert(make_pair(i, sum-num));
    }

    //for (auto i: table)
    //{
    //    cout << i.first << ' ' << i.second << endl;
    //}

    cout << prev(table.end())->second << endl;

    for (auto i : adj[table.end()->first])
        cout << i << ' ';

    cout << endl;
    return 0;
}
