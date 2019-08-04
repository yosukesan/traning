
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

    const ll len (s.size());

    vector<ll> n(len);
    vector<ll> n2(len);

    for (ll i=0; i<len; i++)
        n[i] = 1;

    cout << s << endl;

    for ( ll k=0; k<1; k++)
    {

    for (ll i=0; i<len; i++) 
    {
        if(s[i] == 'R')
        {
            n2[i+1] += n[i];
            n2[i] -= n[i];
        }
        else if(s[i] == 'L')
        {
            n2[i-1] += n[i];
            n2[i] -= n[i];
        }
    }

    for (ll i=0; i<len; i++) 
        n[i] = n2[i];

    }

    for (auto i: n)
        cout << i << endl;

    return 0;
}
