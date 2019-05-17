
#include <iostream>
#include <list>
#include <queue>
#include <vector>

#define INF 0x3f3f3f3f

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pair_t;

class Graph{
    ll _num_verticies;
    list<pair<ll, ll>>* _adj;
public:
    Graph(){}

    Graph(const ll& num_verticies)
    : _num_verticies(num_verticies) {
        _adj = new list<pair<ll, ll>>[_num_verticies];
    }

    void addEdge(Graph* g, const ll& vertex_a, const ll& vertex_b, const ll& weight)
    {
        g->_adj[vertex_a].push_back(make_pair(vertex_b, weight)); 
        g->_adj[vertex_b].push_back(make_pair(vertex_a, weight)); 
    }

    void mst_prim(Graph& g)
    {
        priority_queue<pair_t, vector<pair_t>, greater<pair_t>> pq;
    
        ll src= 0;

        vector<ll> key(g._num_verticies, INF);
        vector<ll> parent(g._num_verticies, -1);
        vector<bool> inMST(g._num_verticies, false);

        pq.push(make_pair(0, src));
        key[src] = 0;

        while (!pq.empty())
        {
            ll u = pq.top().second;
            pq.pop();

            inMST[u] = true;
       
            for (list<pair<ll, ll>>::iterator i = g._adj[u].begin(); i!= g._adj[u].end(); ++i) 
            {
                ll v = (*i).first;
                ll weight = (*i).second;
                
                if (inMST[v] == false && key[v] > weight)
                {
                    key[v] = weight;
                    pq.push(make_pair(key[v], v));
                    parent[v] = u;
                }
            }
        }

        for (ll i = 1; i < g._num_verticies; ++i)
            cout << parent[i] << "-" << i << endl;

    }
};

int main(){
    Graph f;
    Graph g(5);

    f.mst_prim(g);

    return 0;
}
