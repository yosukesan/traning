
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <deque>

typedef long long ll;

using namespace std;

void bfs(vector<vector<ll>>& g, vector<ll>* s, vector<ll>&c, const ll& start, const ll& score) 
{
    vector<bool> visited(g.size(), false);
    deque<ll> q(1, start);
    visited[start] = true; 
    ll st(0);

    while (!q.empty()) 
    {
        ll node = q.front();
        q.pop_front();

        //cout << node << endl;
        //s->at(node) += score;
        st += c[node]; 
        s->at(node) += st;
         
        for (auto i: g[node])
        {
            if (!visited[i])
            {
                q.push_back(i);
                visited[i] = true;
            }
        }
    }
}


int main()
{
    ll n, q;
    cin >> n >> q;

    vector<vector<ll>> e(n, vector<ll>(2));
    vector<vector<ll>> c(q, vector<ll>(2));
    vector<vector<ll>> g(n);
    vector<ll> cc(n);
    vector<ll> s(n);

    for (ll i=0; i<n-1; i++)
        cin >> e[i][0] >> e[i][1];        

    for (ll i=0; i<q; i++)
        cin >> c[i][0] >> c[i][1];        

    g[0].push_back(0);
    for (ll i=0; i<n-1; i++)
    {
        g[e[i][0]-1].push_back(e[i][1]-1);
    }

    for (ll i=0; i<q; i++)
    {
        cc[c[i][0]-1]= c[i][1];
    }

    /*
    for (ll i=0; i<n-1; i++)
    {
        for (auto j : g[i])
            cout << ' ' << j;
        cout << endl;
    }
    for (auto j : cc)
        cout << ' ' << j;
    */

    /*
    for (ll i=0; i<n-1; i++)
    {
        for (ll j=0; j<2; j++)
        {
            cout << ' ' << e[i][j];
        }
        cout << endl;
    }
        cout << endl;

    for (ll i=0; i<q; i++)
    {
        for (ll j=0; j<2; j++)
        {
            cout << ' ' << c[i][j];
        }
        cout << endl;
    }
    */

    ll node (c[0][0]);
    ll score (c[0][1]);

    bfs(g, &s, cc, 0, score);    

    for (auto i: s)
        cout << i << endl;

    return 0;
}
