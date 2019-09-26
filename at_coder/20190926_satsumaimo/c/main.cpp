
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

    ll sc(0), gs(0);
    rep(i, 0, s.size())
    {
        if (s[i] == 'g')
        {
            if (gs==0)
            {
                gs++; // g
            }
            else
            {
                sc++, gs--; // p    
            }
        }
        else
        {
            if (gs==0) 
            {
                sc--, gs++; // g
            }
            else
            {
                gs--; // p
            }
        }
    }

    cout << sc << endl;

    return 0;
}
