
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
    ll n, a, b, c, d;
    string s;

    cin >> n >> a >> b >> c >> d;
    cin >> s;
    s += ' ';

    bool three_dot = false;
    bool two_hash = false;
    char prev2[2] = {' '};

    if (b > c)
    {
            cout << "No" << endl;
            return 0;
    }

    for (auto i : s)
    {
        if (i == prev2[0] && i == '.' && prev2[1] == i)
        {
                three_dot = true;
        }
        if (i == '#' && prev2[1] == i)
        {
                two_hash = true;
        }

        prev2[0] = prev2[1];
        prev2[1] = i;
    }

    if (three_dot && !two_hash)
    {
            cout << "Yes" << endl;
            return 0;
    }

    if (two_hash)
    {
        cout << "No" << endl;
        return 0;
    }

    if (c > d)
    {
        if (s[d-2] == '#' || s[d] == '#')
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
