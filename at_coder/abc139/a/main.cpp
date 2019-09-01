
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
    string s, t;
    cin >> s >> t;

    int c(0);
    for (int i=0; i<3; i++)
    {
        if (s[i] == t[i]) c++;
    }

    cout << c << endl;

    return 0;
}
