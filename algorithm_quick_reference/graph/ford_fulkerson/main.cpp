
#include <iostream>
#include <vector>

using namespace std;

int forl_fulkerson(vector<vector<int>>& graph_matrix, const int& start, const int& terminal)
{
    vector<vector<int>> graph(graph_matrix);
}

int main()
{
    const int n = 6;
    vector<vector<int>> graph_matrix(n, vector<int>(n));

    graph_matrix = {{0, 16, 14, 0, 0, 0},
                    {0, 0, 10, 12, 0, 0},
                    {0, 4, 0, 0, 14, 0},
                    {0, 0, 9, 0, 0, 20},
                    {0, 0, 0, 7, 0, 4},
                    {0, 0, 0, 0, 0, 0}};

    return 0;
}
