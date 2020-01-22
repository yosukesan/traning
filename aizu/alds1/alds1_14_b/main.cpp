
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string t, p;
    cin >> t >> p;

    const ll tlen (t.size());
    const ll plen (p.size());
    vector<ll> pos;

    for (ll i=0; i<tlen-plen+1; i++)
    {
        bool matched (true);
        for (ll j=i, k=0; j<i+plen; j++, k++)
        {
            //cout << t[j] << p[k] << endl;
            if (t[j] != p[k]) 
            {
                matched = false;
                break;
            }
        }

        if (matched)
            cout << i << endl;
    }

    return 0;
}
