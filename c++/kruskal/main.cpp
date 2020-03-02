
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct UnionFind 
{
    vector<int> data;
    
    UnionFind (int sz)
    {
        data.assign(sz, -1);
    }

    bool unite(int x, int y)
    {
        x = find (x), y = find(y);
        if (x==y) return (false);
        if (data[x]>data[y]) 
        data[x] += data[y];
        data[y] = x;
        return (true);
    }

    int find (int k)
    {
        if (data[k]<0) return k;
        return (data[k]=find(data[k]));
    }
    
    int size(int k)
    {
        return (-data[find(k)]);
    }
};

template <typename T>
struct edge
{
    int src, to;
    T cost;
    edge(int t, T c) : src(-1), to(t), cost(c) {}
    edge(int s, int t, T c) : src(s), to(t), cost(c) {}

    edge &operator=(const int & x)
    {
        to = x;
        return *this;
    }

    operator int() const {return to;}
};

template <typename T>
using Edges = vector<edge<T>>;

template <typename T>
T kruskal (Edges<T>& edges, int V)
{
    sort(begin(edges), end(edges), [](const edge<T>& a, const edge<T>& b)
    {
        return (a.cost < b.cost);
    });
    UnionFind tree(V);
    T ret = 0;
    for (auto & e : edges)
        if (tree.unite(e.src, e.to)) ret += e.cost;

    return ret;
}

int main ()
{
    int V, E;
    cin >> V >> E;
    Edges<int> edges;
    for (int i=0; i<E; i++)
    {
        int from, cost, w;
        cin >> from >> cost >> w;
        edges.emplace_back(from, cost, w);
    }

    //for (auto e : edges)    
    //    cout << e.src << ' ' << e.to << ' ' << e.cost << endl;

    cout << kruskal(edges, V) << endl;
}
