
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

    cin >> n >> Y;

    x = 0;
    while (1)
    {
        if (Y >= 0)
        {
            Y -= 10000;
            ++x;
        }
        else
        {
            Y += 10000;
            --x;
            break;
        }
    }

    y = 0;
    while (1)
    {
        if (Y >= 0)
        {
            Y -= 5000;
            ++y;
        }
        else
        {
            Y += 5000;
            --y;
            break;
        }
    }

    z = 0;
    while (1)
    {
        if (Y >= 0)
        {
            Y -= 1000;
            ++z;
        }
        else
        {
            Y += 1000;
            --z;
            break;
        }
    }

        //cout << x << " " << y << " " << z << endl; 

    if (x + y + z <= n)
        cout << x << " " << y << " " << z << endl; 
    else
        cout << -1 << " " << -1 << " " << -1 << endl;

    return 0;
}
