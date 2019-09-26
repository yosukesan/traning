
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
    string s;
    cin >> s;

    ll c(0), _max(0);
    rep(i, 0, s.size())
    {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' ||s[i] == 'T')
        {
            c++;    
        }
        else
            c = 0;

        _max = max(_max, c);
    }

    cout << _max << endl;

    return 0;
}
