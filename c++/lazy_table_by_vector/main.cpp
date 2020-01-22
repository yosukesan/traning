
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<vector<int>> graph; 

    graph.push_back(vector<int>({3, 4, 5}));
    graph.push_back(vector<int>({-9, -4, 5}));
    
    for (auto i : graph)
    {
        for (auto j : i)
            cout << j << " ";
    
        cout << endl; 
    }
}
