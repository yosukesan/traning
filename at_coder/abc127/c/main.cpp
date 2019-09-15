
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
    ll n, m;
    ll tmp;
    vector<ll> r;
    vector<ll> l;
    set<pair<ll, ll>> s;

    cin >> n >> m;

    for (ll i=0; i<m; i++)
    {
        cin >> tmp, l.push_back(tmp);
        cin >> tmp, r.push_back(tmp);
    }

    vector<bool> cards(n+1, true);

    for (ll i=0; i<m; i++)
    {
        for (ll j=0; j<l[i]; j++)
        {
            cards[j] = false;
            //cout << j << " ";            
        }

        for (ll j=r[i]; j<n; j++)
        {
            cards[j] = false;
            //cout << j << " ";            
        }
        cout << endl;
    }

    ll c = 0;
    for (ll i=0; i<n; i++)
        if (cards[i] == true) c++;
   
    cout << c << endl; 

    return 0;
}
