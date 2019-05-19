
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <locale>

typedef long long ll;

using namespace std;

int main()
{
    ll n, k;
    string s;
    locale loc;

    cin >> n >> k;
    cin >> s;

    for (ll i=0; i<n; ++i)
    {
        if (i == k-1)
            cout << tolower(s[i], loc);
        else
            cout << s[i];
    }

    return 0;
}
