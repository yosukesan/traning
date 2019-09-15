
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    ll n;
    string s;
    cin >> n >> s;

    ll _max(0);
    rep (i, 0, n)
    {
        ll _max2(0);
        vector<char> hash(26, 0);

        ll j(i);
        while (true)
        {
            if (hash[s[j]-97] > 1) 
            {
            }
            else
            {
                hash[s[j]-97]++;
                _max2++;
            }
            j++;
        }

        _max = max(_max, _max2);
    }

    cout << _max << endl;

    return 0;
}
