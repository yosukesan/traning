
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <unordered_map>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    vector<pair<ll, ll>> coord;
    cin >> n;

    for (ll i=0; i<n; ++i)
    {
        ll x, y;
        cin >> x >> y;
        coord.push_back(make_pair(x, y));
    }

    ll p, q;
    vector<pair<ll, ll>> max_pair;
    for (ll i=n-1; i>=1; i--)
    {
        p = coord[i].first - coord[i-1].first;
        q = coord[i].second - coord[i-1].second;
       
        max_pair.push_back(make_pair(p, q));
    }

    ll hash [50 * 1000] = {0};
    for (auto m : max_pair)
    {
        cout << m.first << " " << m.second << endl;
        hash[m.first + 51 * m.second]++;
    }

    //for (auto m : max_pair)
    //{
    //    cout << hash[m.first + 51 * m.second] << endl;
    //}

    sort(hash, hash+50000, greater<ll>());

    cout << hash[0] << endl;

    return 0;
}
