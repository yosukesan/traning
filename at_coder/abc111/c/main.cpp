
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>

typedef long long ll;

using namespace std;

int main()
{
    ll n;

    cin >> n;

    vector<ll> v(n);

    for (ll i=0; i<n; i++)
        cin >> v[i];

    unordered_map<ll, ll> hash;
    
    for (auto i: v)
    {
        hash.insert(make_pair(i, 0));
        //hash.insert_or_assign(make_pair(i, 0));
    }

    for (auto i: v)
    {
        hash.insert(make_pair(i, hash.at(i)++));
        //hash.insert_or_assign(make_pair(i, hash.at(i)++));
    }

    //for (auto i: hash)
    //    cout << i.first << ' ' << i.second << endl;

    switch (hash.size())
    {
    case 1:
        cout << n/2 << endl;      
        break;
    case 2:
        cout << 0 << endl;      
        break;
    default:    
        ll min (1e+9+7);
        for (auto i: hash)
        {
            if (min > i.second)
                min = i.second;
        }
        cout << min << endl;
    } 

    return 0;
}
