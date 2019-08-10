
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

    vector<string> s;

    for(ll i=0; i<n; i++)
    {
        string tmp;
        cin >> tmp, s.push_back(tmp);
    }

    vector<vector<ll>> hash(n, vector<ll>(27, 0));

    for (ll i=0; i<n; i++)
    {
        for (ll j=0; j<10; j++)
        {
            //cout << s[i][j] << ' ';  
            hash[i][s[i][j]-97]++;  
        }
        //cout << endl;
    }

    multiset<string> mset;

    for (ll i=0; i<n; i++)
    {
        string buf;
        for (ll j=0; j<27; j++)
        {
            buf += hash[i][j] + 48;
        }
        mset.insert(buf);
    }

    ll count(0);

    while (!mset.empty())
    {
        auto it = mset.begin();

        ll inc = mset.count(*it);
        count += (ll)inc * (inc-1) / 2;

        mset.erase(*it);
    }

    cout << count << endl;

    return 0;
}
