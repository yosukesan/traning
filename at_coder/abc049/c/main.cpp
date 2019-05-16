
#include <iostream>
#include <string>
#include <algorithm>
#include <set>

typedef long long ll;

using namespace std;

int main()
{
    string s; 
    string p[] = {"dream", "dreamer", "erase", "eraser"};

    for (int i=0; i<4; ++i)
        reverse(p[i].begin(), p[i].end());

    cin >> s;
        reverse(s.begin(), s.end());

    bool can = true; 
    for (unsigned int i=0; i<s.size(); )    
    {
        bool can2 = false;
        for (ll j=0; j<4; j++)
        {
            string d = p[j];
            if (s.substr(i, d.size()) == d)
            {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2)
        {
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
