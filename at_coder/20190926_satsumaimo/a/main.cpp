
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

    if (s[0] == s[1] || s[1] == s[2] || s[2] == s[3])
        cout << "Bad" << endl;
    else
        cout << "Good" << endl;

    return 0;
}
