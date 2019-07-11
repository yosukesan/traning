
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

    string s(to_string(n));
    bool flag = true;

    while (flag)
    {
        s = to_string(n);
        if (s[0] == s[1] && s[1] == s[2] && s[2] == s[1])
            flag = false;

        ++n;
    }
    
    cout << s << endl; 

    return 0;
}
