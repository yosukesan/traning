
#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int num_vertices;
    list<int> *adj;
    void dfs_helper(const Graph& g, const int& vertex, bool* visited);

public:
    
    Graph(){}
    Graph(const int& num_verticies);
    void addEdge(Graph* g, const int& vertex, const int& neighbour);
    void print(const Graph& g);
    void dfs(const Graph& g, const int& start);
};

Graph::Graph(const int& num)
: num_vertices(num)
{
    if (num_vertices <= 0)
       cerr << "Error: function=" << __FUNCTION__ << "(), line=" <<  __LINE__ << endl; 

    adj = new list<int> [num_vertices];
    
    if (!adj)
       cerr << "Error: function=" << __FUNCTION__ << "(), line=" <<  __LINE__ << endl; 
}

void Graph::dfs_helper(const Graph& g, const int& vertex, bool* visited)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (auto j: g.adj[vertex])
    {
        if (!visited[j])
            dfs_helper(g, j, visited);
    }
}

void Graph::dfs(const Graph& g, const int& start)
{
    bool* visited = new bool [g.num_vertices];
    for (int i=0; i<g.num_vertices; ++i)
        visited[i] = false;

    dfs_helper(g, start, visited);
}

void Graph::addEdge(Graph* g, const int& vertex, const int& neighbour)
{
    if (vertex < g->num_vertices)
        g->adj[vertex].push_back(neighbour);
}

void Graph::print(const Graph& g)
{
    for (int i=0; i<g.num_vertices; ++i)
    {
        cout << i << ": ";
        for (auto j: g.adj[i])
            cout << j << " ";

        cout << endl;
    }
}

int main()
{
    Graph g(4);
    Graph f;

    f.addEdge(&g, 0, 1);
    f.addEdge(&g, 0, 2);
    f.addEdge(&g, 1, 2);
    f.addEdge(&g, 2, 0);
    f.addEdge(&g, 2, 3);
    f.addEdge(&g, 3, 3);

    f.dfs(g, 2);

    //f.print(g);
}
