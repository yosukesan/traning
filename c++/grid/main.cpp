
#include <iostream>
#include <vector>
#include <tuple>
#include <climits>

using namespace std;

using T2 = tuple<int64_t, int64_t>;
using Grid = vector<vector<int64_t>>;

vector<int64_t> dx({1, 0, -1, 0});
vector<int64_t> dy({0, 1, 0, -1});

void print(Grid& g)
{
    int64_t ny = g.size();
    int64_t nx = g[0].size();

    for (int64_t i=0; i<ny; ++i)
    {
        for (int64_t j=0; j<nx; ++j)
            cout << " " << g[i][j];
        cout << endl;
    }
}

void dfs(Grid& g, T2 start, int64_t colour)
{
    int64_t ny = g.size();
    int64_t nx = g[0].size();
    int64_t x = get<0>(start);
    int64_t y = get<1>(start);

    g[y][x] = colour;

    for (int64_t k=0; k<4; ++k)
    {
        int64_t xx = x + dx[k];        
        int64_t yy = y + dy[k];        

        if (xx<0 || nx<=xx) continue;
        if (yy<0 || ny<=yy) continue;

        if (g[yy][xx] == 0 || g[yy][xx]==colour) continue;

        dfs(g, T2(xx, yy), colour);
    }
}

int main ()
{
    int64_t nx, ny; 
    cin >> nx >> ny;

    Grid g(ny); 

    for (int64_t i=0; i<ny; ++i)
    {
        for (int64_t j=0; j<nx; ++j)
        {
            int64_t a;
            cin >> a;
            g[i].push_back(a);
        }
    }

    int64_t colour = 2;
    T2 start(0,0), prev(INT_MAX, INT_MIN);
    while (true)
    {
        for (int64_t i=0; i<ny; ++i)
        {
            for (int64_t j=0; j<nx; ++j)
                if (g[i][j] == 1) start = T2(j,i);
        }

        if (prev == start)
            return 0;

        print(g);
        cout << endl;

        dfs(g, start, colour); 
        colour++;
        prev = start;
    }

    return 0;
}
