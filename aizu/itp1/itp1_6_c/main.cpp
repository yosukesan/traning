
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
    ll n, b, f, r, v;

    cin >> n;

    ll record[4][3][10] = {0};

    // calculation
    while (cin >> b >> f >> r >> v)
    {
        record[b-1][f-1][r-1] += v;
    }

    // output
    for (ll k=0; k<4; k++)
    {
        for (ll j=0; j<3; j++)
        {
            for (ll i=0; i<10; i++)
            {
                printf(" %lld", record[k][j][i]);
            }
            cout << endl;
        }
        if (k != 3)
            cout << "####################" << endl;
    }

    return 0;
}
