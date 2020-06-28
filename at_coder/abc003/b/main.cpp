
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

char cc(char& c)
{
    switch(c)
    {
        case 'a':
            return 'a';
        case 't':
            return 't';
        case 'c':
            return 'c';
        case 'o':
            return 'o';
        case 'd':
            return 'd';
        case 'e':
            return 'e';
        case 'r':
            return 'r';
        default:
            break;
    }
    return NULL;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;

    if (s == t)
    { 
        cout << "You can win" << endl;
        return 0;
    }

    rep(i,0,s.size())
    {
        if (s[i] != t[i])
        {
            if (s[i]=='@' && t[i]=='@')
                continue;
            else if (s[i]=='@' && t[i]!='@')
                s[i] = cc(t[i]);
            else if (s[i]!='@' && t[i]=='@')
                t[i] = cc(s[i]);
        }        
    }

    if (s == t)
    { 
        cout << "You can win" << endl;
        return 0;
    }
    cout << "You can lose" << endl;
    
    return 0;
}
