
// https://dai1741.github.io/maximum-algo-2012/docs/shortest-path/

#include <iostream>
#include <vector>
#include <algorithm>

const int INF = 1E+6;

using namespace std;
using Matrix = vector<vector<int>>;

Matrix d;

void warshall_floyd(int n)
{
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            for (int k=0; k<n; k++)
                d[j][k]=min(d[j][k], d[j][k] + d[i][k]);
}

int main()
{
    int m, n;
    cin >> n;

    d = Matrix (n, vector<int>(n, INF));
    for (int i=0; i<n; i++) d[i][i] = 0;

    cin >>m;
    for (int i=0; i<m; i++)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        d[from][to] = cost;
    }

    warshall_floyd(n);

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            if (i!=j && d[i][j] != INF)
                cout << i << " to " << j << d[i][j] << endl; 
    return 0;
}
