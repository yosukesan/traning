
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

    set<pair<char, ll>> input;

    for (ll i=0; i<n; i++)
    {
        char c; int d;
        cin >> c >> d;

        input.insert(make_pair(c, d));
    }

    vector<char> kind ({'S', 'H', 'C', 'D'});

    for (auto i : kind)
    {
        for (ll j=1; j<=13; j++)
        {
            if (input.find(make_pair(i, j)) == input.end())
                cout << i << ' ' << j << endl;
        }
    }


    return 0;
}
