
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

struct Node 
{
    ll to;
    ll w;
    Node(){}
    Node(ll _to, ll _w) : to(_to), w(_w) {}
};

using Graph = vector<vector<Node>>;

void dfs (Graph& g, vector<bool>& visited, int src)
{
    if (!visited[src])
    {
        visited[src]=true;
        dfs(g, visited, src);
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    Graph g(n);
    for (int i=0; i<n-1; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        --u, --v;
        g[u].push_back(Node(v, w));
    }

    ll root;
    for (int i=0; i<n; ++i)
    {
        if (g[i].size() == 0)
            root = i;
    }

    cout << root << endl; 

    vector<bool> visited(n, false);
    dfs(g, visited, root);

    //for (auto l: g)
    //{
    //    for (auto i: l)
    //        cout << ' ' << i.to;
    //    cout << endl;
    //}

    return 0;
}
