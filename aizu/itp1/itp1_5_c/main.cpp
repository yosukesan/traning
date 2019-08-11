
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

    bool is_shifted;
    while (cin >> h >> w)
    {
        if (w == 0 && h == 0)
            break;

        for (ll j=0; j<h; j++)
        {
            is_shifted = (j % 2) ? false : true;

            char letter = (is_shifted) ? '#' : '.';
            for (ll i=0; i<w; i++)
            {
                letter = (is_shifted) ? '#' : '.';
                cout << letter;
                is_shifted = !is_shifted;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
