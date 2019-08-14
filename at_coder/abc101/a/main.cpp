
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

    ll num (0);
    for (auto i: s)
    {
        if (i == '-') num--;
        if (i == '+') num++;
    }

    cout << num << endl;

    return 0;
}
