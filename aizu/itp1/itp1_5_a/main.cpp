
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
    ll w, h;

    while (cin >> h >> w)
    {
        if (w == 0 && h == 0)
            break;

        for (ll j=0; j<h; j++)
        {
            for (ll i=0; i<w; i++)
            {
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
