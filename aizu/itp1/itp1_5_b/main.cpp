
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

    bool is_h_edge, is_w_edge;
    while (cin >> h >> w)
    {
        if (w == 0 && h == 0)
            break;

        for (ll j=0; j<h; j++)
        {
            is_h_edge = (j == 0 || j == h-1) ? true : false;

            for (ll i=0; i<w; i++)
            {
                is_w_edge = (i == 0 || i == w-1) ? true : false;
                char letter = (is_w_edge || is_h_edge) ? '#' : '.';
                cout << letter;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
