
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
    string s, t;

    cin >> s >> t;

    const ll len = s.size();
    for (ll i=0; i<len; ++i)
    {
        string ss;
        for (ll j=i; j<len+i; ++j)
            ss += s[j % len]; 

        if (ss == t)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;


    return 0;
}
