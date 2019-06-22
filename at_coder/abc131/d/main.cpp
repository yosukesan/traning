
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

bool comp_second(pair<ll, ll>& a, pair<ll,ll>& b)
{
    return (a.second < b.second);
}

int main()
{
    ll n;

    cin >> n;
    vector<pair<ll, ll>> data(n);

    for (ll i=0; i<n; ++i)
    {
        cin >> data[i].first >> data[i].second;
    }

    sort(data.begin(), data.end(), comp_second);

    ll sum (0);
    for (auto j: data)
    {
        sum += j.first;
        if (sum > j.second)
        {
                cout << "No" << endl;
                return 0;
        }
    }
    
    cout << "Yes" << endl;

    return 0;
}
