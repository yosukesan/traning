
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
    string s;
    cin >> n >> s;

    ll _max(-1);
    for (ll i=0; i<n; i++)
    {
        ll cm (0);
        vector<ll> hash1(26, 0);
        vector<ll> hash2(26, 0);

        for (ll k=0; k<i; k++)
            hash1[s[k]-97]=1;

        for (ll k=i; k<n; k++)
            hash2[s[k]-97]=1;

        for (ll j=0; j<26; j++)
            if (hash1[j] == hash2[j] && hash1[j] > 0)
                cm++;

        if (_max < cm)
            _max = cm;
    }

    cout << _max << endl;

    return 0;
}
