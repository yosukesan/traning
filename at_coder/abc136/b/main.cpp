
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
    ll n;
    cin >> n;

    ll count (0);
    for (ll i=1; i<=n; i++)
    {
        string s = to_string(i);
        if (s.size() % 2 != 0)
            count++;
    }

    cout << count << endl;

    return 0;
}
