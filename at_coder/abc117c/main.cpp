
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct DP
{
    vector<int> token;
};

int main()
{
    int n;
    int m;
    int tmp;
    vector<int> x;

    cin >> n >> m;
    for (int i=0; i<m; ++i)
    {
        cin >> tmp;
        x.push_back(tmp);
    }

    //sort(x.begin(), x.end());    
    
    bool is_opt = false;
    struct DP dp;
    while (!is_opt)
    {
        bool is_solved = false;

        for (int i=0; i<n; ++i)
        {
            dp.token[i] = x[rand() % n];
        }

        while (!is_solved)
        {
            for (int i=0; i<n; ++i)
            {
                
            }
        }
    }

}
