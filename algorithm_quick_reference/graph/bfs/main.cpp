
#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int num_vertices;
    list<int> *adj;

public:
    
    Graph(){}
    Graph(const int& num_verticies);
    void addEdge(Graph* g, const int& vertex, const int& neighbour);
    void print(const Graph& g);
    void bfs(const Graph& g, const int& start);
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

void Graph::bfs(const Graph& g, const int& start)
{

    // initiallise
    bool visited[g.num_vertices] = {false};

    visited[start] = true;
    list<int> queue;
    queue.push_back(start);

    while (!queue.empty())
    {
        const int s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for (auto j: g.adj[s])
        {
            if(!visited[j]) 
            { 
                visited[j] = true;
                queue.push_back(j);
            }
        }
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

    f.bfs(g, 2);

    //f.print(g);
}
