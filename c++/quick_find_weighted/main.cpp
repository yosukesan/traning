
#include <vector>
#include <iostream>

using namespace std;

void resize(const int& n, vector<int>* i2g, vector<vector<int>>* g2i)
{
    i2g->resize(n);
    g2i->resize(n);

    for (int i=0; i<n; ++i)
        i2g->at(i) = i;

    for (int i=0; i<n; ++i)
        g2i->at(i).assign(1,n-i);

    cout << g2i->at(1).at(0) << endl;
}

int main()
{
    vector<int> i2g;
    vector<vector<int>> g2i;

    resize(10, &i2g, &g2i); 

    return 0;
}
