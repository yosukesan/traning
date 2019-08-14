
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
    string s;
    cin >> s;

    //reverse(s.begin(), s.end());

    ll num (1);
    ll dec (0);
    for (auto i: s)
    {
        dec += (i-48);    
    }

    ll num2 = atoi(s.c_str());

    if( num2 % dec == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
