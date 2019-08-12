
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    ll r, c;
    cin >> r >> c;

    vector<vector<ll>> data(c+1, vector<ll>(r+1));

    for (ll j=0; j<r; j++)
    {
        for (ll i=0; i<c; i++)
        {
            cin >> data[i][j];
        }
    }

    // column
    for (ll j=0; j<r; j++)
    {
        for (ll i=0; i<c; i++)
        {
            data[c][j] += data[i][j];
        }
    }

    // row
    for (ll i=0; i<c+1; i++)
    {
        for (ll j=0; j<r; j++)
        {
            data[i][r] += data[i][j];
        }
    }


    for (ll j=0; j<r+1; j++)
    {
        for (ll i=0; i<c+1; i++)
        {
            if (i != c && j != r)
                cout << data[i][j] << ' ';
            else
                cout << data[i][j];
        }
        cout << endl;
    }

    return 0;
}
