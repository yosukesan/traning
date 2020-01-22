#include <vector>
#include <iostream>
#include <queue>

using namespace std;

void bfs(vector<vector<int>>& g, const int& start)
{
    vector<bool> visited(g.size(), false);

    cout << start << endl;
    visited[start] = true;

    priority_queue<int> q;

    q.push(start);

    while (!q.empty())
    {
        int t (q.top());
        q.pop();
        for (auto i: g[t])
        {
            if (!visited[i])
            {
                visited[i] = true;
                cout << i << endl;
                q.push(i);
            }
        }
    }
}

int main()
{
    vector<vector<int>> adj_graph ({{0, 1, 2, 4, 7, 6},
                                    {0, 6, 2},
                                    {1, 0, 3, 5},
                                    {4, 7},
                                    {0, 3, 6},
                                    {2, 6},
                                    {0, 1, 4, 5, 7},
                                    {3, 6, 0}});


    bfs(adj_graph, 0);

}
