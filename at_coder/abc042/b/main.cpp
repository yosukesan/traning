
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
    ll n, l;
    cin >> n >> l;

    vector<string> s(n);

    rep(i, 0, n) cin >> s[i];

    sort(s.begin(), s.end());
        
    for (auto i: s)
        cout << i ;

    cout << endl;

    return 0;
}
