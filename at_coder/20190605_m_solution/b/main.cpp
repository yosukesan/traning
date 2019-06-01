
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
    string s;

    cin >> s;

    ll lose = 0;
    for (auto i : s)
    {
        if (i == 'x') lose++;
    }

    if (15 - lose > 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
