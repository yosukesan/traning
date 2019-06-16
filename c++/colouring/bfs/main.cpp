
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Graph{
    int num_verticies;
    unique_ptr<vector<int>[]> adj;

public:
    Graph (const int& v)
    {
        this->num_verticies = v;
        adj = make_unique<vector<int>[]>(v);
    }

    void add (const int& vertex, vector<int>&& neighbours)
    {
        for (auto i : neighbours)
            adj[vertex].push_back(i);
    }
};

int main(){

    Graph g(13);

    g.add(0, vector<int>({1, 2, 4}));
    g.add(1, vector<int>({0, 2, 5, 6}));
    g.add(2, vector<int>({0, 1, 5, 3}));
    g.add(3, vector<int>({2, 5, 10, 4}));
    g.add(4, vector<int>({0, 3}));
    g.add(5, vector<int>({1, 2, 3, 4, 6, 8, 10}));
    g.add(6, vector<int>({1, 5, 8}));
    g.add(7, vector<int>({6, 5, 9, 11}));
    g.add(8, vector<int>({5, 9, 11, 7}));
    g.add(9, vector<int>({10, 8, 12}));
    g.add(10, vector<int>({5, 8, 11, 9}));
    g.add(11, vector<int>({7, 8, 12}));
    g.add(12, vector<int>({9, 11}));

    

    return 0;
}
