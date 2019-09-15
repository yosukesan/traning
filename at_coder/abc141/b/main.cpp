
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

    bool is_odd(true), is_even(true);
    rep(i, 0, s.size())
    {
        if(i % 2 == 0)
        {
            if(s[i] == 'R' || s[i] == 'U' || s[i] == 'D')
            ;
            else
            {
                //cout << s[i] << endl; 
                is_even = false;
            }
        }    
        else
        {

            if(s[i] == 'L' || s[i] == 'U' || s[i] == 'D')
                    ;
            else
            {
                //cout << s[i] << endl; 
                is_odd = false;
            }
        }

    }

    if(is_even && is_odd)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
