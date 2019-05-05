
#include <iostream>
#include <string>
#include <algorithm>
#include <set>

typedef long long ll;

using namespace std;

int main()
{
    ll n, Y;
    ll x, y, z;
    ll rx = -1, ry = -1, rz = -1;

    cin >> n >> Y;

    for (z=0; z<=n; z++)
    {
        for (y=0; z + y<=n; y++)
        {
            x = n - y - z;

            if (10000*x + 5000*y + 1000*z == Y) 
            {
                rx = x;
                ry = y;
                rz = z;
            } 
        }
    }

    cout << rx << " " << ry << " " << rz << endl; 

    return 0;
}
